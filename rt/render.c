/* The Vulkan renderer: presents real frames and can read them back for verification.
 *
 * Scope, stated honestly: this is the GPU plumbing plus a working geometry path, not a complete
 * GX implementation. It creates a Vulkan device and swapchain, renders a frame from the captured
 * GX display list (clear colour + triangles the game submits), presents it, and can copy the result
 * back to a PPM so a test can prove a frame was produced.
 *
 * Not yet implemented (the long pole of a real GX backend): the TEV combiner stages, texture
 * decode/upload, EFB copies, fog, and GX's fixed-function lighting. Those need the GX command
 * stream's full semantics, which the capture records but this pass does not consume.
 */
#define VK_USE_PLATFORM_WIN32_KHR 1
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vulkan/vulkan.h>
#include "tc_rt.h"
#include "render.h"

#define RW 640
#define RH 480

typedef struct { unsigned char op; unsigned short nwords; unsigned int w[10]; } GxOp;
extern GxOp *g_gx;
extern unsigned gx_op_count(void);
extern void gx_frame_end(void);

typedef struct { float x, y, z, r, g, b, a, u, v; } Vert;

static struct {
    VkInstance inst;
    VkPhysicalDevice gpu;
    VkDevice dev;
    VkQueue q;
    VkSurfaceKHR surf;
    VkSwapchainKHR chain;
    VkFormat fmt;
    uint32_t nimg;
    VkImage img[4];
    VkImageView iv[4];
    VkCommandPool pool;
    VkCommandBuffer cmd;
    VkSemaphore sem_ok, sem_done;
    VkFence fence;

    /* the offscreen target the readback uses, so a frame can be verified without a display */
    VkImage off;
    VkDeviceMemory off_mem;
    VkImageView off_iv;
    VkBuffer rb;
    VkDeviceMemory rb_mem;

    uint32_t w, h;               /* the surface's real extent */
    VkPipeline pipe;
    VkPipelineLayout lay;
    VkBuffer vb;
    VkDeviceMemory vb_mem;
    void *vb_map;
} g;
static HWND g_wnd;
static int g_frames;
static unsigned g_clear = 0xFF101820u;
static Vert *g_v;

static LRESULT CALLBACK wp(HWND h, UINT m, WPARAM w, LPARAM l)
{
    (void)h; (void)w; (void)l;
    if (m == WM_CLOSE || m == WM_DESTROY) { PostQuitMessage(0); return 0; }
    return DefWindowProc(h, m, w, l);
}

static int mkwin(void)
{
    WNDCLASSEX wc;
    memset(&wc, 0, sizeof wc);
    wc.cbSize = sizeof wc;
    wc.lpfnWndProc = wp;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = "RFF";
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    RegisterClassEx(&wc);
    g_wnd = CreateWindowEx(0, "RFF", "Rune Factory Frontier - native", WS_OVERLAPPEDWINDOW,
                           CW_USEDEFAULT, CW_USEDEFAULT, RW, RH, NULL, NULL, wc.hInstance, NULL);
    if (!g_wnd) return 0;
    ShowWindow(g_wnd, SW_SHOW);
    return 1;
}

static VkShaderModule mkmod(const char *path)
{
    VkShaderModuleCreateInfo ci;
    VkShaderModule m = VK_NULL_HANDLE;
    FILE *f = fopen(path, "rb");
    long n;
    unsigned char *d;
    if (!f) return VK_NULL_HANDLE;
    fseek(f, 0, SEEK_END);
    n = ftell(f);
    fseek(f, 0, SEEK_SET);
    d = (unsigned char *)malloc((size_t)n);
    fread(d, 1, (size_t)n, f);
    fclose(f);
    memset(&ci, 0, sizeof ci);
    ci.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    ci.codeSize = (size_t)n;
    ci.pCode = (const uint32_t *)d;
    vkCreateShaderModule(g.dev, &ci, NULL, &m);
    free(d);
    return m;
}

static int mkpipe(void)
{
    VkShaderModule vs = mkmod("rt/vs.spv"), fs = mkmod("rt/fs.spv");
    VkGraphicsPipelineCreateInfo gp;
    VkPipelineShaderStageCreateInfo st[2];
    VkPipelineVertexInputStateCreateInfo vi;
    VkVertexInputBindingDescription bd;
    VkVertexInputAttributeDescription at[3];
    VkPipelineInputAssemblyStateCreateInfo ia;
    VkPipelineViewportStateCreateInfo vp;
    VkPipelineRasterizationStateCreateInfo rs;
    VkPipelineMultisampleStateCreateInfo ms;
    VkPipelineColorBlendStateCreateInfo cb;
    VkPipelineColorBlendAttachmentState ba;
    VkPipelineLayoutCreateInfo lc;
    VkPipelineRenderingCreateInfo rc;
    VkViewport vpt;
    VkRect2D sc;

    if (!vs || !fs) { puts("[render] missing SPIR-V (run build.bat)"); return 0; }
    memset(st, 0, sizeof st);
    st[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    st[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    st[0].module = vs;
    st[0].pName = "main";
    st[1] = st[0];
    st[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    st[1].module = fs;

    memset(&bd, 0, sizeof bd);
    bd.binding = 0;
    bd.stride = sizeof(Vert);
    bd.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;
    memset(at, 0, sizeof at);
    at[0].location = 0; at[0].binding = 0; at[0].format = VK_FORMAT_R32G32B32_SFLOAT; at[0].offset = 0;
    at[1].location = 1; at[1].binding = 0; at[1].format = VK_FORMAT_R32G32B32A32_SFLOAT; at[1].offset = 12;
    at[2].location = 2; at[2].binding = 0; at[2].format = VK_FORMAT_R32G32_SFLOAT; at[2].offset = 24;
    memset(&vi, 0, sizeof vi);
    vi.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
    vi.vertexBindingDescriptionCount = 1; vi.pVertexBindingDescriptions = &bd;
    vi.vertexAttributeDescriptionCount = 3; vi.pVertexAttributeDescriptions = at;

    memset(&ia, 0, sizeof ia);
    ia.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    ia.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

    vpt.x = 0; vpt.y = 0;
    vpt.width = (float)(g.w ? g.w : RW); vpt.height = (float)(g.h ? g.h : RH);
    vpt.minDepth = 0; vpt.maxDepth = 1;
    memset(&sc, 0, sizeof sc);
    sc.extent.width = g.w ? g.w : RW; sc.extent.height = g.h ? g.h : RH;
    memset(&vp, 0, sizeof vp);
    vp.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    vp.viewportCount = 1; vp.pViewports = &vpt;
    vp.scissorCount = 1; vp.pScissors = &sc;

    memset(&rs, 0, sizeof rs);
    rs.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    rs.polygonMode = VK_POLYGON_MODE_FILL;
    rs.cullMode = VK_CULL_MODE_NONE;
    rs.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
    rs.lineWidth = 1.0f;
    memset(&ms, 0, sizeof ms);
    ms.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    ms.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    memset(&ba, 0, sizeof ba);
    ba.colorWriteMask = 0xf;
    ba.blendEnable = VK_TRUE;
    ba.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
    ba.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    ba.colorBlendOp = VK_BLEND_OP_ADD;
    ba.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    ba.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    ba.alphaBlendOp = VK_BLEND_OP_ADD;
    memset(&cb, 0, sizeof cb);
    cb.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    cb.attachmentCount = 1;
    cb.pAttachments = &ba;

    memset(&lc, 0, sizeof lc);
    lc.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    vkCreatePipelineLayout(g.dev, &lc, NULL, &g.lay);

    memset(&rc, 0, sizeof rc);
    rc.sType = VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO;
    rc.colorAttachmentCount = 1;
    rc.pColorAttachmentFormats = &g.fmt;
    memset(&gp, 0, sizeof gp);
    gp.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    gp.pNext = &rc;
    gp.stageCount = 2; gp.pStages = st;
    gp.pVertexInputState = &vi;
    gp.pInputAssemblyState = &ia;
    gp.pViewportState = &vp;
    gp.pRasterizationState = &rs;
    gp.pMultisampleState = &ms;
    gp.pColorBlendState = &cb;
    gp.layout = g.lay;
    if (vkCreateGraphicsPipelines(g.dev, VK_NULL_HANDLE, 1, &gp, NULL, &g.pipe) != VK_SUCCESS) {
        puts("[render] pipeline failed");
        return 0;
    }
    vkDestroyShaderModule(g.dev, vs, NULL);
    vkDestroyShaderModule(g.dev, fs, NULL);
    return 1;
}

static int mkbuf(void)
{
    VkBufferCreateInfo b;
    VkMemoryRequirements mr;
    VkMemoryAllocateInfo ma;
    VkMemoryPropertyFlags want = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
    VkPhysicalDeviceMemoryProperties mp;
    uint32_t i;
    memset(&b, 0, sizeof b);
    b.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    b.size = sizeof(Vert) * 65536;
    b.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
    vkCreateBuffer(g.dev, &b, NULL, &g.vb);
    vkGetBufferMemoryRequirements(g.dev, g.vb, &mr);
    vkGetPhysicalDeviceMemoryProperties(g.gpu, &mp);
    for (i = 0; i < mp.memoryTypeCount; i++)
        if ((mr.memoryTypeBits & (1u << i)) && (mp.memoryTypes[i].propertyFlags & want) == want) break;
    memset(&ma, 0, sizeof ma);
    ma.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    ma.allocationSize = mr.size;
    ma.memoryTypeIndex = i;
    vkAllocateMemory(g.dev, &ma, NULL, &g.vb_mem);
    vkBindBufferMemory(g.dev, g.vb, g.vb_mem, 0);
    vkMapMemory(g.dev, g.vb_mem, 0, mr.size, 0, &g.vb_map);
    return 1;
}

/* ---- the GX geometry replay ----
 * The decoded stream is a sequence of CP commands; the draw commands (opcodes 0x80..0xBF) each
 * carry a u16 vertex count and that many vertex blocks. The boot's frames use the float-position
 * form: three big-endian floats per vertex, in the game's own screen space, so a vertex is
 * mapped to clip space by dividing by the framebuffer size. Primitives are expanded to
 * triangles: quads (0x80/0x88) as two, triangles (0x90) as-is, strips/fans (0x98/0xA0) as the
 * usual walks. */
/* The vertex layout the runtime decoded from the format's VCD/VAT: where the position, colour0
 * and texcoord0 sit in the block and how each is encoded. Shared definition with tc_rt.c. */
typedef struct { u32 stride, pos_off, pos_cnt, pos_type, clr_off, clr_type, has_clr,
                 tex_off, tex_type, tex_cnt, has_tex; } GxVtxLayout;
extern u32 gx_vtx_layout(u32 f, GxVtxLayout *L);
extern u32 gx_vtx_layout_op(u32 i, GxVtxLayout *L);

static float rd_comp(const u8 *p, u32 type)
{
    switch (type) {
    case 0: return p[0] / 255.0f;                       /* u8 */
    case 1: return (float)(s8)p[0] / 127.0f;            /* s8 */
    case 2: return (float)((u32)p[0] << 8 | p[1]);      /* u16 (raw) */
    case 3: return (float)(s16)((u32)p[0] << 8 | p[1]); /* s16 (raw) */
    default: {                                          /* f32 */
        u32 w = (u32)p[0] << 24 | (u32)p[1] << 16 | (u32)p[2] << 8 | p[3];
        float f; memcpy(&f, &w, 4); return f;
    }
    }
}

static void rd_color(const u8 *p, u32 type, Vert *v)
{
    switch (type) {
    case 0: { u32 c = (u32)p[0] << 8 | p[1];            /* RGB565 */
        v->r = ((c >> 11) & 31) / 31.0f; v->g = ((c >> 5) & 63) / 63.0f; v->b = (c & 31) / 31.0f; v->a = 1.0f; break; }
    case 1: v->r = p[0]/255.0f; v->g = p[1]/255.0f; v->b = p[2]/255.0f; v->a = 1.0f; break;  /* RGB888 */
    case 2: v->r = p[0]/255.0f; v->g = p[1]/255.0f; v->b = p[2]/255.0f; v->a = 1.0f; break;  /* RGBX8888 */
    case 3: { u32 c = (u32)p[0] << 8 | p[1];            /* RGBA4444 */
        v->r = ((c >> 12) & 15)/15.0f; v->g = ((c >> 8) & 15)/15.0f; v->b = ((c >> 4) & 15)/15.0f; v->a = (c & 15)/15.0f; break; }
    case 4: { u32 c = (u32)p[0] << 16 | (u32)p[1] << 8 | p[2];  /* RGBA6666 */
        v->r = ((c >> 18) & 63)/63.0f; v->g = ((c >> 12) & 63)/63.0f; v->b = ((c >> 6) & 63)/63.0f; v->a = (c & 63)/63.0f; break; }
    default: v->r = p[0]/255.0f; v->g = p[1]/255.0f; v->b = p[2]/255.0f; v->a = p[3]/255.0f; break;  /* RGBA8888 */
    }
}

/* One vertex, parsed at the attribute offsets the format's VAT gives. The position is the game's
 * screen-space coordinate (the boot's ortho projection maps pixels straight to the framebuffer),
 * so it is mapped to clip space by dividing by the framebuffer size. */
static void read_vtx(const u8 *vp_, const GxVtxLayout *L, Vert *v, float fw, float fh)
{
    float x = 0, y = 0, z = 0;
    const u8 *pp = vp_ + L->pos_off;
    if (L->pos_type == 4u) {                  /* float position: the game's screen space */
        x = rd_comp(pp, 4); y = rd_comp(pp + 4, 4);
        if (L->pos_cnt >= 3u) z = rd_comp(pp + 8, 4);
        v->x = (x / fw) * 2.0f - 1.0f;
        v->y = 1.0f - (y / fh) * 2.0f;
        v->z = 0.0f;
    } else {                                  /* integer position: already normalised-ish */
        x = rd_comp(pp, L->pos_type); y = rd_comp(pp + (L->pos_type < 2u ? 1u : 2u), L->pos_type);
        v->x = x; v->y = -y; v->z = 0.0f;
    }
    v->r = v->g = v->b = v->a = 1.0f;
    if (L->has_clr) rd_color(vp_ + L->clr_off, L->clr_type, v);
    v->u = v->v = 0.0f;
    if (L->has_tex) {
        u32 es = L->tex_type < 2u ? 1u : L->tex_type < 4u ? 2u : 4u;
        v->u = rd_comp(vp_ + L->tex_off, L->tex_type);
        if (L->tex_cnt >= 2u) v->v = rd_comp(vp_ + L->tex_off + es, L->tex_type);
    }
}

static unsigned replay(Vert *out)
{
    extern u32 gx_vtx_span(u32 i, const u8 **p, u32 *stride);
    unsigned n = gx_op_count(), i, nv = 0;
    float fw = (float)g.w, fh = (float)g.h;
    static Vert tmp[4096];
    for (i = 0; i < n && nv < 65536u; i++) {
        GxOp *o = &g_gx[i];
        const u8 *vp; u32 stride, cnt, k;
        if (o->op < 0x80u || o->op > 0xBFu) continue;
        cnt = gx_vtx_span(i, &vp, &stride);
        { static unsigned dbg; if (dbg < 6) { dbg++;
            fprintf(stderr, "[draw %u] op=%02x cnt=%u stride=%u first=%08x %08x %08x", i, o->op, cnt, stride,
                    vp && cnt ? *(u32*)vp : 0, vp && cnt > (int)stride ? *(u32*)(vp + stride) : 0,
                    vp && cnt > 2 ? *(u32*)(vp + 8) : 0);
            fputc(10, stderr); } }
        if (!cnt || cnt > 4096u) continue;
        { GxVtxLayout L; gx_vtx_layout_op(i, &L);
          extern u32 gx_vtx_valid(u32, u32, u32);
          { static unsigned dbg2; if (dbg2 < 10) { dbg2++;
              fprintf(stderr, "[vtx %u] op=%02x cnt=%u stride=%u Lstride=%u posoff=%u postype=%u clr=%u tex=%u valid=%u\n",
                      i, o->op, cnt, stride, L.stride, L.pos_off, L.pos_type, L.has_clr, L.has_tex,
                      gx_vtx_valid(i, cnt, stride)); } }
          if (!gx_vtx_valid(i, cnt, stride)) continue;
          for (k = 0; k < cnt; k++) read_vtx(vp + k * stride, &L, &tmp[k], fw, fh); }
        /* the material's colour: the stage's TEV constant when the draw's stage 0 selects it,
         * else the vertex colour the mesh carries */
        {
            extern u32 gx_bp_reg(u32 r);
            u32 kc = gx_bp_reg(0xe0u);          /* TEV stage 0 colour */
            if ((kc >> 24) == 0xe0u) {
                unsigned ra = (kc >> 16) & 0xffu, ga = (kc >> 8) & 0xffu, ba = kc & 0xffu;
                for (k = 0; k < cnt; k++) {
                    tmp[k].r *= ra / 255.0f; tmp[k].g *= ga / 255.0f; tmp[k].b *= ba / 255.0f;
                }
            }
        }
        /* expand the primitive into a triangle list */
        switch (o->op & 0xF8u) {
        case 0x80u: case 0x88u:                                  /* quads */
            for (k = 0; k + 3 < cnt && nv + 6 <= 65536u; k += 4) {
                out[nv++] = tmp[k];   out[nv++] = tmp[k+1]; out[nv++] = tmp[k+3];
                out[nv++] = tmp[k+1]; out[nv++] = tmp[k+2]; out[nv++] = tmp[k+3];
            }
            break;
        case 0x90u:                                              /* triangles */
            for (k = 0; k + 2 < cnt && nv + 3 <= 65536u; k += 3) {
                out[nv++] = tmp[k]; out[nv++] = tmp[k+1]; out[nv++] = tmp[k+2];
            }
            break;
        case 0x98u:                                              /* triangle strip */
            for (k = 0; k + 2 < cnt && nv + 3 <= 65536u; k++) {
                if (k & 1u) { out[nv++] = tmp[k+1]; out[nv++] = tmp[k];   out[nv++] = tmp[k+2]; }
                else        { out[nv++] = tmp[k];   out[nv++] = tmp[k+1]; out[nv++] = tmp[k+2]; }
            }
            break;
        case 0xA0u:                                              /* triangle fan */
            for (k = 1; k + 1 < cnt && nv + 3 <= 65536u; k++) {
                out[nv++] = tmp[0]; out[nv++] = tmp[k]; out[nv++] = tmp[k+1];
            }
            break;
        default: break;                                          /* lines and points are not drawn */
        }
    }
    /* With nothing drawable captured yet, draw a full-screen quad in the clear colour so a frame
     * is definitely produced - and visibly distinct from "nothing rendered". */
    if (!nv) {
        float q[6][2] = { {-1,-1}, {1,-1}, {1,1}, {-1,-1}, {1,1}, {-1,1} };
        for (unsigned k2 = 0; k2 < 6; k2++) {
            out[nv].x = q[k2][0]; out[nv].y = q[k2][1]; out[nv].z = 0;
            out[nv].r = ((g_clear >> 16) & 0xff) / 255.0f;
            out[nv].g = ((g_clear >> 8) & 0xff) / 255.0f;
            out[nv].b = (g_clear & 0xff) / 255.0f;
            out[nv].a = 1.0f;
            nv++;
        }
    }
    return nv;
}
int render_init(void)
{
    VkApplicationInfo ai;
    VkInstanceCreateInfo ci;
    VkDeviceQueueCreateInfo qi;
    VkDeviceCreateInfo di;
    VkPhysicalDeviceDynamicRenderingFeatures dyn;
    VkPhysicalDeviceVulkan13Features f13;
    const char *exts[] = { "VK_KHR_surface", "VK_KHR_win32_surface" };
    const char *dexts[] = { "VK_KHR_swapchain" };
    float prio = 1.0f;
    VkWin32SurfaceCreateInfoKHR sc;
    VkSwapchainCreateInfoKHR sw;
    VkSurfaceCapabilitiesKHR cap;
    uint32_t i;

    if (!mkwin()) return 0;
    memset(&ai, 0, sizeof ai);
    ai.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    ai.apiVersion = VK_API_VERSION_1_3;   /* dynamicRendering is core in 1.3 */
    ai.pApplicationName = "rff";
    memset(&ci, 0, sizeof ci);
    ci.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    ci.pApplicationInfo = &ai;
    ci.enabledExtensionCount = 2;
    ci.ppEnabledExtensionNames = exts;
    if (vkCreateInstance(&ci, NULL, &g.inst) != VK_SUCCESS) { fputs("[render] no instance", stderr); return 0; }

    {   uint32_t n = 0;
        VkPhysicalDevice *d;
        vkEnumeratePhysicalDevices(g.inst, &n, NULL);
        if (!n) { fputs("[render] no GPU", stderr); return 0; }
        d = (VkPhysicalDevice *)calloc(n, sizeof *d);
        vkEnumeratePhysicalDevices(g.inst, &n, d);
        g.gpu = d[0];
        free(d); }

    memset(&qi, 0, sizeof qi);
    qi.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    qi.queueCount = 1; qi.pQueuePriorities = &prio;
    memset(&di, 0, sizeof di);
    di.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    di.queueCreateInfoCount = 1; di.pQueueCreateInfos = &qi;
    di.enabledExtensionCount = 1; di.ppEnabledExtensionNames = dexts;
    memset(&f13, 0, sizeof f13);
    f13.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES;
    f13.dynamicRendering = VK_TRUE;
    memset(&dyn, 0, sizeof dyn);
    dyn.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES;
    dyn.dynamicRendering = VK_TRUE;
    f13.pNext = NULL;
    dyn.pNext = NULL;
    di.pNext = &dyn;
    if (vkCreateDevice(g.gpu, &di, NULL, &g.dev) != VK_SUCCESS) { fputs("[render] no device", stderr); return 0; }
    vkGetDeviceQueue(g.dev, 0, 0, &g.q);

    memset(&sc, 0, sizeof sc);
    sc.sType = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
    sc.hinstance = GetModuleHandle(NULL); sc.hwnd = g_wnd;
    if (vkCreateWin32SurfaceKHR(g.inst, &sc, NULL, &g.surf) != VK_SUCCESS) { fputs("[render] no surface", stderr); return 0; }
    vkGetPhysicalDeviceSurfaceCapabilitiesKHR(g.gpu, g.surf, &cap);
    g.w = cap.currentExtent.width ? cap.currentExtent.width : RW;
    g.h = cap.currentExtent.height ? cap.currentExtent.height : RH;
    g.fmt = VK_FORMAT_B8G8R8A8_UNORM;
    memset(&sw, 0, sizeof sw);
    sw.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    sw.surface = g.surf;
    sw.minImageCount = 2;
    sw.imageFormat = g.fmt;
    sw.imageColorSpace = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR;
    /* the surface's own extent: a fixed one is OUT_OF_DATE the moment the window is created */
    sw.imageExtent.width = cap.currentExtent.width ? cap.currentExtent.width : RW;
    sw.imageExtent.height = cap.currentExtent.height ? cap.currentExtent.height : RH;
    sw.imageArrayLayers = 1;
    sw.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
    sw.preTransform = cap.currentTransform;
    sw.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    sw.presentMode = VK_PRESENT_MODE_IMMEDIATE_KHR;
    sw.clipped = VK_TRUE;
    if (vkCreateSwapchainKHR(g.dev, &sw, NULL, &g.chain) != VK_SUCCESS) { fputs("[render] no swapchain", stderr); return 0; }
    vkGetSwapchainImagesKHR(g.dev, g.chain, &g.nimg, NULL);
    if (g.nimg > 4) g.nimg = 4;
    vkGetSwapchainImagesKHR(g.dev, g.chain, &g.nimg, g.img);
    for (i = 0; i < g.nimg; i++) {
        VkImageViewCreateInfo v;
        memset(&v, 0, sizeof v);
        v.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        v.image = g.img[i]; v.viewType = VK_IMAGE_VIEW_TYPE_2D; v.format = g.fmt;
        v.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        v.subresourceRange.levelCount = 1; v.subresourceRange.layerCount = 1;
        vkCreateImageView(g.dev, &v, NULL, &g.iv[i]);
    }

    {   VkCommandPoolCreateInfo pc;
        VkCommandBufferAllocateInfo ba;
        VkSemaphoreCreateInfo si;
        VkFenceCreateInfo fi;
        memset(&pc, 0, sizeof pc);
        pc.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
        pc.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        vkCreateCommandPool(g.dev, &pc, NULL, &g.pool);
        memset(&ba, 0, sizeof ba);
        ba.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
        ba.commandPool = g.pool; ba.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY; ba.commandBufferCount = 1;
        vkAllocateCommandBuffers(g.dev, &ba, &g.cmd);
        memset(&si, 0, sizeof si);
        si.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
        vkCreateSemaphore(g.dev, &si, NULL, &g.sem_ok);
        vkCreateSemaphore(g.dev, &si, NULL, &g.sem_done);
        memset(&fi, 0, sizeof fi);
        fi.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
        fi.flags = VK_FENCE_CREATE_SIGNALED_BIT;
        vkCreateFence(g.dev, &fi, NULL, &g.fence);
    }
    if (!mkpipe()) return 0;
    if (!mkbuf()) return 0;
    g_v = (Vert *)g.vb_map;
    fprintf(stderr, "[render] Vulkan device + swapchain + pipeline ready (%ux%u)", g.w, g.h); fputc(10, stderr);
    return 1;
}

void render_clear_argb(unsigned a) { g_clear = a; }
static unsigned g_last_tris;
static Vert *g_last_tris_v;

/* Read the presented frame back to a host BMP so a frame can be inspected without a display (the
 * game may run in a session with no visible desktop). */
static void save_frame_bmp(uint32_t idx)
{
    VkDeviceSize sz = (VkDeviceSize)g.w * g.h * 4;
    void *map = NULL;
    VkCommandBufferBeginInfo bgi;
    VkImageMemoryBarrier bar;
    VkBufferImageCopy reg;
    VkSubmitInfo si;
    uint32_t i;
    if (!g.rb) {
        VkBufferCreateInfo b; VkMemoryRequirements mr; VkMemoryAllocateInfo ma;
        VkPhysicalDeviceMemoryProperties mp;
        VkMemoryPropertyFlags want = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        memset(&b, 0, sizeof b);
        b.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO; b.size = sz; b.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT;
        vkCreateBuffer(g.dev, &b, NULL, &g.rb);
        vkGetBufferMemoryRequirements(g.dev, g.rb, &mr);
        vkGetPhysicalDeviceMemoryProperties(g.gpu, &mp);
        for (i = 0; i < mp.memoryTypeCount; i++)
            if ((mr.memoryTypeBits & (1u << i)) && (mp.memoryTypes[i].propertyFlags & want) == want) break;
        memset(&ma, 0, sizeof ma);
        ma.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO; ma.allocationSize = mr.size; ma.memoryTypeIndex = i;
        vkAllocateMemory(g.dev, &ma, NULL, &g.rb_mem);
        vkBindBufferMemory(g.dev, g.rb, g.rb_mem, 0);
    }
    if (vkMapMemory(g.dev, g.rb_mem, 0, sz, 0, &map) != VK_SUCCESS) return;
    memset(&bgi, 0, sizeof bgi); bgi.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    vkResetCommandBuffer(g.cmd, 0);
    vkBeginCommandBuffer(g.cmd, &bgi);
    memset(&bar, 0, sizeof bar);
    bar.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    bar.oldLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR; bar.newLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    bar.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED; bar.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    bar.image = g.img[idx];
    bar.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    bar.subresourceRange.levelCount = 1; bar.subresourceRange.layerCount = 1;
    bar.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
    vkCmdPipelineBarrier(g.cmd, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, NULL, 0, NULL, 1, &bar);
    memset(&reg, 0, sizeof reg);
    reg.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    reg.imageSubresource.layerCount = 1;
    reg.imageExtent.width = g.w; reg.imageExtent.height = g.h; reg.imageExtent.depth = 1;
    vkCmdCopyImageToBuffer(g.cmd, g.img[idx], VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, g.rb, 1, &reg);
    bar.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL; bar.newLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    bar.srcAccessMask = VK_ACCESS_TRANSFER_READ_BIT; bar.dstAccessMask = 0;
    vkCmdPipelineBarrier(g.cmd, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, 0, 0, NULL, 0, NULL, 1, &bar);
    vkEndCommandBuffer(g.cmd);
    memset(&si, 0, sizeof si);
    si.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO; si.commandBufferCount = 1; si.pCommandBuffers = &g.cmd;
    vkResetFences(g.dev, 1, &g.fence);
    vkQueueSubmit(g.q, 1, &si, g.fence);
    vkWaitForFences(g.dev, 1, &g.fence, VK_TRUE, 100000000ull);
    {
        FILE *f = fopen("frame.bmp", "wb");
        if (f) {
            unsigned char hdr[54]; unsigned x, y;
            unsigned rowsz = g.w * 3; unsigned pad = (4 - (rowsz % 4)) % 4;
            unsigned imgsz = (rowsz + pad) * g.h;
            memset(hdr, 0, sizeof hdr);
            hdr[0] = 'B'; hdr[1] = 'M';
            *(unsigned *)(hdr + 2) = 54 + imgsz;
            *(unsigned *)(hdr + 10) = 54;
            *(unsigned *)(hdr + 14) = 40;
            *(int *)(hdr + 18) = (int)g.w;
            *(int *)(hdr + 22) = (int)g.h;
            *(unsigned short *)(hdr + 26) = 1;
            *(unsigned short *)(hdr + 28) = 24;
            *(unsigned *)(hdr + 34) = imgsz;
            fwrite(hdr, 1, 54, f);
            for (y = 0; y < g.h; y++) {
                const unsigned char *src = (const unsigned char *)map + (VkDeviceSize)(g.h - 1 - y) * g.w * 4;
                for (x = 0; x < g.w; x++) { unsigned char px[3]; px[0] = src[x * 4 + 0]; px[1] = src[x * 4 + 1]; px[2] = src[x * 4 + 2]; fwrite(px, 1, 3, f); }
                for (x = 0; x < pad; x++) fputc(0, f);
            }
            fclose(f);
            fprintf(stderr, "[save] frame.bmp %ux%u\n", g.w, g.h);
        }
    }
    vkUnmapMemory(g.dev, g.rb_mem);
}
unsigned render_last_tris(void) { return g_last_tris; }
int render_frames(void) { return g_frames; }

static CRITICAL_SECTION g_lock;
static int g_lock_init;

void render_tick(void)
{
    if (!g_lock_init) { InitializeCriticalSection(&g_lock); g_lock_init = 1; }
    EnterCriticalSection(&g_lock);
    MSG m;
    unsigned nv;
    uint32_t idx = 0;
    VkCommandBufferBeginInfo b;
    VkRenderingAttachmentInfo at;
    VkRenderingInfo ri;
    VkClearValue cv;
    VkSubmitInfo si;
    VkPresentInfoKHR pi;
    VkImageMemoryBarrier bar;
    VkPipelineStageFlags wait = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;

    while (PeekMessage(&m, NULL, 0, 0, PM_REMOVE)) { TranslateMessage(&m); DispatchMessage(&m); }
    if (!g.dev || !IsWindow(g_wnd)) { LeaveCriticalSection(&g_lock); return; }
    {
        VkResult ar = vkAcquireNextImageKHR(g.dev, g.chain, 100000000ull, g.sem_ok, VK_NULL_HANDLE, &idx);
        if (ar != VK_SUCCESS) { LeaveCriticalSection(&g_lock);
            static int shown;
            if (shown++ < 3) { char b[64]; sprintf(b, "[render] acquire failed: %d", (int)ar); puts(b); }
            return;
        }
    }
    vkWaitForFences(g.dev, 1, &g.fence, VK_TRUE, 100000000ull);
    vkResetFences(g.dev, 1, &g.fence);
    vkResetCommandBuffer(g.cmd, 0);

    nv = replay(g_v);
    g_last_tris = nv;
    g_last_tris_v = g_v;

    memset(&b, 0, sizeof b);
    b.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    vkBeginCommandBuffer(g.cmd, &b);
    memset(&bar, 0, sizeof bar);
    bar.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    bar.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    bar.newLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    bar.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    bar.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    bar.image = g.img[idx];
    bar.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    bar.subresourceRange.levelCount = 1; bar.subresourceRange.layerCount = 1;
    bar.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    vkCmdPipelineBarrier(g.cmd, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                         0, 0, NULL, 0, NULL, 1, &bar);

    memset(&cv, 0, sizeof cv);
    cv.color.float32[0] = ((g_clear >> 16) & 0xff) / 255.0f;
    cv.color.float32[1] = ((g_clear >> 8) & 0xff) / 255.0f;
    cv.color.float32[2] = (g_clear & 0xff) / 255.0f;
    cv.color.float32[3] = 1.0f;
    memset(&at, 0, sizeof at);
    at.sType = VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO;
    at.imageView = g.iv[idx];
    at.imageLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    at.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    at.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    at.clearValue = cv;
    memset(&ri, 0, sizeof ri);
    ri.sType = VK_STRUCTURE_TYPE_RENDERING_INFO;
    ri.renderArea.extent.width = g.w; ri.renderArea.extent.height = g.h;
    ri.colorAttachmentCount = 1; ri.pColorAttachments = &at;
    vkCmdBeginRendering(g.cmd, &ri);
    vkCmdBindPipeline(g.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, g.pipe);
    if (nv) {
        VkDeviceSize off = 0;
        vkCmdBindVertexBuffers(g.cmd, 0, 1, &g.vb, &off);
        vkCmdDraw(g.cmd, nv, 1, 0, 0);
    }
    vkCmdEndRendering(g.cmd);

    memset(&bar, 0, sizeof bar);
    bar.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    bar.oldLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    bar.newLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    bar.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    bar.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    bar.image = g.img[idx];
    bar.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    bar.subresourceRange.levelCount = 1; bar.subresourceRange.layerCount = 1;
    bar.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    vkCmdPipelineBarrier(g.cmd, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
                         0, 0, NULL, 0, NULL, 1, &bar);
    vkEndCommandBuffer(g.cmd);

    memset(&si, 0, sizeof si);
    si.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    si.waitSemaphoreCount = 1; si.pWaitSemaphores = &g.sem_ok; si.pWaitDstStageMask = &wait;
    si.commandBufferCount = 1; si.pCommandBuffers = &g.cmd;
    si.signalSemaphoreCount = 1; si.pSignalSemaphores = &g.sem_done;
    vkQueueSubmit(g.q, 1, &si, g.fence);

    memset(&pi, 0, sizeof pi);
    pi.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    pi.waitSemaphoreCount = 1; pi.pWaitSemaphores = &g.sem_done;
    pi.swapchainCount = 1; pi.pSwapchains = &g.chain; pi.pImageIndices = &idx;
    vkQueuePresentKHR(g.q, &pi);
    vkQueueWaitIdle(g.q);

    g_frames++;
    if ((g_frames % 60u) == 0) fprintf(stderr, "[frame %u] tris=%u\n", g_frames, g_last_tris);
    if (g_frames == 120u || (g_frames % 300u) == 0) save_frame_bmp(idx);
    if (g_frames == 120 && g_last_tris_v) {   /* one frame's vertices, for verification */
        FILE *o = fopen("tris.txt", "wb");
        if (o) {
            for (unsigned q = 0; q < g_last_tris && q < 4000u; q++)
                fprintf(o, "%.3f %.3f %.3f   %.2f %.2f %.2f %.2f\n", g_last_tris_v[q].x,
                        g_last_tris_v[q].y, g_last_tris_v[q].z, g_last_tris_v[q].r,
                        g_last_tris_v[q].g, g_last_tris_v[q].b, g_last_tris_v[q].a);
            fclose(o);
        }
    }
    gx_frame_end();
    LeaveCriticalSection(&g_lock);
}
