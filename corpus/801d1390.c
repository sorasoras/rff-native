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

u32 fn_801d1390(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    if ((u32)param_2 == 0u) {
        a.r[0] = param_1;
        a.r[1] = rd32(param_1 + 0x394u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80575ed4u);
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x1a8u), &a);
        f0 = (f64)rdf32(0x80575ea8u);
        wr32(param_1 + 0x3a4u, 1u);
        wr32(param_1 + 0x344u, 0u);
        wrf32d(param_1 + 0x360u, f0);
    } else {
        if (rd32(param_1 + 0x344u) == 0u) {
            r5 = rd32(param_1 + 0x70u);
            r6 = rd32(param_1 + 0xe0u);
            f0 = (f64)rdf32(r5 + 0x54u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            if (!((s32)px_f2b(f0) <= (s32)rd32(r6 + 0xe08u))) {
                wrf32d(r5 + 0x54u, (f64)(f32)(px_b2f((u64)(rd32(r6 + 0xe04u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80575ec0u)));
            }
            f0 = (f64)rdf32(0x80575ea0u);
            f1 = (f64)(f32)((f64)rdf32(param_1 + 0x360u) + (f64)rdf32(0x80575e98u));
            wrf32d(param_1 + 0x360u, f1);
            f0 = (f64)(f32)(f0 * (f64)rdf32(r6 + 0xdecu));
            if (!((f1 > f0) || (f1 == f0))) {
                return r31;
            }
            wr32(param_1 + 0x344u, 1u);
        } else {
            if (rd32(param_1 + 0x110u) != 0u) {
                r31 = 0u;
                a.r[0] = param_1;
                a.r[1] = (u32)param_2;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = 0.0;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0xd0u), &a);
                f1 = tc_lastf();
                a.r[0] = param_1;
                a.r[1] = r3;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(param_1) + 0xd4u), &a);
                wr32(param_1 + 0x3a4u, 0u);
            }
        }
    }
    return r31;
}
