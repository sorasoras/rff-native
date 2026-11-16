#include "tc_rt.h"

static u32 px_qsize(u32 t)
{
    return t == 4u || t == 6u ? 1u : t == 5u || t == 7u ? 2u : 4u;
}

static f64 px_qscale(u32 sc)
{
    f64 m = 1.0;
    s32 n = (s32)(sc & 0x3fu);
    if (n >= 32) n -= 64;
    for (; n > 0; n--) m *= 2.0;
    for (; n < 0; n++) m *= 0.5;
    return m;
}

static f64 px_dq(u32 g, u32 ea)
{
    u32 t = (g >> 16) & 7u;
    f64 m = px_qscale(g >> 24);
    if (t == 4u) return (f64)(f32)((f64)rd8(ea) / m);
    if (t == 5u) return (f64)(f32)((f64)rd16(ea) / m);
    if (t == 6u) return (f64)(f32)((f64)(s8)rd8(ea) / m);
    if (t == 7u) return (f64)(f32)((f64)(s16)rd16(ea) / m);
    return (f64)rdf32(ea);
}

f64 fn_80033e34(s32 param_1, s32 param_2, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r8 = 0, t5 = 0, t13 = 0, t19 = 0, t27 = 0, t33 = 0, t44 = 0, t47 = 0;
    u32 t58 = 0, t61 = 0, t75 = 0;
    f64 f1 = 0.0, f5 = 0.0, f6 = 0.0, t3 = 0.0, t17 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.f[0] = param_f1;
    a.r[0] = (u32)param_2;
    a.r[1] = 0x817fdfacu;
    a.r[2] = 0x817fdfa8u;
    f1 = tc_callf(0x800323ccu, &a);
    r0 = rd32(0x817fdfacu);
    r5 = rd32(0x817fdfa8u);
    r4 = rd32((u32)param_2 + 0x10u);
    f5 = (f64)rdf32((u32)param_2 + 4u);
    r3 = r4 + ((r0 << 4u) & 0xfffffff0u);
    f6 = (f64)rdf32((u32)param_2 + 8u);
    r8 = r4 + ((r5 << 4u) & 0xfffffff0u);
    if (r0 == 0xffffffffu) {
        t3 = px_dq(0u, r8);
        f1 = t3;
        t5 = r8 + 4u;
        wrf32d((u32)param_1, ppc_fmadds(t3, f5, f6));
        wrf32d((u32)param_1 + 4u, ppc_fmadds(px_dq(0u, r8 + px_qsize(0u)), f5, f6));
        t13 = (u32)param_1 + 8u;
        wrf32d(t13, ppc_fmadds(px_dq(0u, t5), f5, f6));
        wrf32d(t13 + 4u, ppc_fmadds(px_dq(0u, t5 + px_qsize(0u)), f5, f6));
    } else {
        if (r5 == 0xffffffffu) {
            t17 = px_dq(0u, r3);
            f1 = t17;
            t19 = r3 + 4u;
            wrf32d((u32)param_1, ppc_fmadds(t17, f5, f6));
            wrf32d((u32)param_1 + 4u, ppc_fmadds(px_dq(0u, r3 + px_qsize(0u)), f5, f6));
            t27 = (u32)param_1 + 8u;
            wrf32d(t27, ppc_fmadds(px_dq(0u, t19), f5, f6));
            wrf32d(t27 + 4u, ppc_fmadds(px_dq(0u, t19 + px_qsize(0u)), f5, f6));
        } else {
            t33 = r3 + 4u;
            wrf32d(0x817fdfb0u, ppc_fmadds(px_dq(0u, r3), f5, f6));
            wrf32d(0x817fdfb4u, ppc_fmadds(px_dq(0u, r3 + px_qsize(0u)), f5, f6));
            wrf32d(0x817fdfb8u, ppc_fmadds(px_dq(0u, t33), f5, f6));
            wrf32d(0x817fdfbcu, ppc_fmadds(px_dq(0u, t33 + px_qsize(0u)), f5, f6));
            t44 = r3 + 8u;
            t47 = r3 + 0xcu;
            wrf32d(0x817fdfc0u, ppc_fmadds(px_dq(0u, t44), f5, f6));
            wrf32d(0x817fdfc4u, ppc_fmadds(px_dq(0u, t44 + px_qsize(0u)), f5, f6));
            wrf32d(0x817fdfc8u, ppc_fmadds(px_dq(0u, t47), f5, f6));
            wrf32d(0x817fdfccu, ppc_fmadds(px_dq(0u, t47 + px_qsize(0u)), f5, f6));
            t58 = r8 + 8u;
            t61 = r8 + 0xcu;
            wrf32d(0x817fdfd0u, ppc_fmadds(px_dq(0u, t58), f5, f6));
            wrf32d(0x817fdfd4u, ppc_fmadds(px_dq(0u, t58 + px_qsize(0u)), f5, f6));
            wrf32d(0x817fdfd8u, ppc_fmadds(px_dq(0u, t61), f5, f6));
            wrf32d(0x817fdfdcu, ppc_fmadds(px_dq(0u, t61 + px_qsize(0u)), f5, f6));
            t75 = r8 + 4u;
            wrf32d(0x817fdfe0u, ppc_fmadds(px_dq(0u, r8), f5, f6));
            wrf32d(0x817fdfe4u, ppc_fmadds(px_dq(0u, r8 + px_qsize(0u)), f5, f6));
            wrf32d(0x817fdfe8u, ppc_fmadds(px_dq(0u, t75), f5, f6));
            wrf32d(0x817fdfecu, ppc_fmadds(px_dq(0u, t75 + px_qsize(0u)), f5, f6));
            a.f[0] = f1;
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfb0u;
            a.r[2] = 0x817fdfc0u;
            a.r[3] = 0x817fdfd0u;
            a.r[4] = 0x817fdfe0u;
            f1 = tc_callf(0x800320a8u, &a);
        }
    }
    return f1;
}
