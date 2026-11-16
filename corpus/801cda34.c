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

u32 fn_801cda34(u32 param_1, s32 param_2)
{
    u32 r5 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    if ((u32)param_2 == 0u) {
        a.r[0] = param_1;
        a.r[1] = 6u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80575ed4u);
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        f0 = (f64)rdf32(0x80575ea8u);
        wr32(param_1 + 0xd24u, 0u);
        wrf32d(param_1 + 0xe90u, f0);
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x801cf7b0u, &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0xbu;
        a.r[3] = 1u;
        (void)tc_call(0x801ce348u, &a);
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = 0xbu;
        a.r[3] = 1u;
        (void)tc_call(0x801ce348u, &a);
        r30 = 2u;
        do {
            a.r[0] = param_1;
            a.r[1] = r30;
            a.r[2] = 9u;
            a.r[3] = 1u;
            (void)tc_call(0x801ce368u, &a);
            r30 = r30 + 1u;
        } while (r30 < 0xau);
        wr32(param_1 + 0xd28u, 0u);
    } else {
        if ((u32)param_2 == 1u) {
            a.r[0] = param_1;
            a.r[1] = 3u;
            (void)tc_call(0x801ce5f4u, &a);
            if (rd32(param_1 + 0xd28u) == 0u) {
                r5 = rd32(param_1 + 0x70u);
                f0 = (f64)rdf32(r5 + 0x54u);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                if (!((s32)px_f2b(f0) <= (s32)rd32(param_1 + 0xe08u))) {
                    wrf32d(r5 + 0x54u, (f64)(f32)(px_b2f((u64)(rd32(param_1 + 0xe04u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80575ec0u)));
                    a.r[0] = param_1;
                    a.r[1] = 3u;
                    (void)tc_call(0x801ce388u, &a);
                }
                f1 = (f64)(f32)((f64)rdf32(param_1 + 0xe90u) + (f64)rdf32(0x80575e98u));
                f0 = (f64)(f32)((f64)rdf32(0x80575ea0u) * (f64)rdf32(param_1 + 0xdecu));
                wrf32d(param_1 + 0xe90u, f1);
                if (!((f1 > f0) || (f1 == f0))) {
                    return r31;
                }
                wr32(param_1 + 0xd28u, 1u);
                a.r[0] = param_1;
                a.r[1] = 3u;
                (void)tc_call(0x801ce724u, &a);
            } else {
                if (rd32(param_1 + 0x110u) != 0u) {
                    if (rd32(param_1 + 0xd44u) != 0u) {
                        a.r[0] = param_1;
                        a.r[1] = 1u;
                        (void)tc_call(0x801cf7b0u, &a);
                    }
                    r31 = 0u;
                }
            }
        }
    }
    return r31;
}
