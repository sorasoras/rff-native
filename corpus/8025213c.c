#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8025213c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, s32 param_8)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0x20u;
    f1 = tc_callf(0x8000443cu, &a);
    f2 = 0.0;
    r4 = (((rd32(param_1) & 0xfffffffcu) | (param_6 & 3u)) & 0xfffffff3u) | ((param_7 << 2u) & 0xcu) | 0x10u;
    wr32(param_1, r4);
    if ((u32)param_8 == 0u) {
        r4 = (r4 & 0xffffff1fu) | 0x80u;
        wr32(param_1, r4);
    } else {
        wr8(param_1 + 0x1fu, (u8)((u32)rd8(param_1 + 0x1fu) | 1u));
        if ((param_5 - 8u) > 2u) {
            r4 = (r4 & 0xffffff1fu) | 0xc0u;
            wr32(param_1, r4);
        } else {
            r4 = (r4 & 0xffffff1fu) | 0xa0u;
            wr32(param_1, r4);
        }
        if (param_3 <= param_4) {
            r3 = 0x1fu - ppc_cntlzw(param_4);
        } else {
            r3 = 0x1fu - ppc_cntlzw(param_3);
        }
        f2 = rdf64(0x80576cd8u);
        f1 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f2);
        f0 = (f64)(f32)((f64)rdf32(0x80576cd0u) * f1);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wr32(param_1 + 4u, (rd32(param_1 + 4u) & 0xffff00ffu) | (((u32)px_f2b(f0) << 8u) & 0xff00u));
    }
    r3 = (rd32(param_1 + 8u) & 0xfffffc00u) | ((param_3 - 1u) & 0x3ffu);
    r4 = param_5 & 0xfu;
    wr32(param_1 + 0x14u, param_5);
    r3 = (r3 & 0xfff003ffu) | (((param_4 - 1u) << 0xau) & 0xffc00u);
    r3 = (r3 & 0xff0fffffu) | ((param_5 << 0x14u) & 0xf00000u);
    wr32(param_1 + 0xcu, (rd32(param_1 + 0xcu) & 0xff000000u) | ((param_2 >> 5u) & 0xffffffu));
    wr32(param_1 + 8u, r3);
    if (r4 > 0xeu) {
        r6 = 2u;
        wr8(param_1 + 0x1eu, 2u);
        r7 = 2u;
    } else {
        r3 = rd32(((r4 << 2u) & 0xfffffffcu) - 0x7fc719e8u);
        sw_ = r3;
        switch (sw_) {
        case 0x80252280u:
            r6 = 3u;
            wr8(param_1 + 0x1eu, 1u);
            r7 = 3u;
            break;
        case 0x80252294u:
            r6 = 3u;
            wr8(param_1 + 0x1eu, 2u);
            r7 = 2u;
            break;
        case 0x802522a8u:
            r6 = 2u;
            wr8(param_1 + 0x1eu, 2u);
            r7 = 2u;
            break;
        case 0x802522bcu:
            r6 = 2u;
            wr8(param_1 + 0x1eu, 3u);
            r7 = 2u;
            break;
        case 0x802522e4u:
            r6 = 2u;
            wr8(param_1 + 0x1eu, 2u);
            r7 = 2u;
            break;
        case 0x802522d0u:
            r6 = 3u;
            wr8(param_1 + 0x1eu, 0u);
            r7 = 3u;
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return;
        }
    }
    wr8(param_1 + 0x1fu, (u8)((u32)rd8(param_1 + 0x1fu) | 2u));
    r4 = param_3 + (((r6 & 0x20u) != 0u) ? 0u : (1u << (r6 & 0x1fu))) - 1u;
    r4 = ((r6 & 0x20u) != 0u) ? (u32)((s32)r4 >> 31) : (u32)((s32)r4 >> (s32)(r6 & 0x1fu));
    r0 = param_4 + (((r7 & 0x20u) != 0u) ? 0u : (1u << (r7 & 0x1fu))) - 1u;
    r0 = ((r7 & 0x20u) != 0u) ? (u32)((s32)r0 >> 31) : (u32)((s32)r0 >> (s32)(r7 & 0x1fu));
    r0 = r4 * r0;
    r0 = r0 & 0x7fffu;
    wr16(param_1 + 0x1cu, (u16)r0);
    return;
}
