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

u32 fn_801cd10c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 1u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)param_2 == 0u) {
        wr32(param_1 + 0xd18u, 0u);
        wr32(param_1 + 0xd28u, 0u);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xfbeu;
        (void)tc_call(0x8010a74cu, &a);
        a.r[0] = param_1;
        a.r[1] = 7u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80575ed4u);
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 6u;
        a.r[3] = 1u;
        (void)tc_call(0x801ce348u, &a);
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = 6u;
        a.r[3] = 1u;
        (void)tc_call(0x801ce348u, &a);
        r30 = 2u;
        do {
            a.r[0] = param_1;
            a.r[1] = r30;
            a.r[2] = 3u;
            a.r[3] = 1u;
            (void)tc_call(0x801ce368u, &a);
            r30 = r30 + 1u;
        } while (r30 < 0xau);
        a.r[0] = param_1;
        a.r[1] = 2u;
        (void)tc_call(0x801ce388u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xfc1u;
        (void)tc_call(0x8010a74cu, &a);
        wr32(param_1 + 0xec8u, 0u);
    } else {
        if ((u32)param_2 == 1u) {
            f0 = (f64)rdf32(rd32(param_1 + 0x70u) + 0x54u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfe8u, f0);
            if ((s32)rd32(0x817fdfecu) >= 25) {
                r4 = rd32(param_1 + 0xec8u);
                if ((r4 & 1u) == 0u) {
                    wr32(param_1 + 0xec8u, r4 | 1u);
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = 0.0;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    f0 = (f64)rdf32(0x80575ea0u);
                    wr32(0x817fdfd8u, rd32(r3));
                    wr32(0x817fdfdcu, r0);
                    wr32(0x817fdfe0u, rd32(r3 + 8u));
                    a.f[0] = (f64)(f32)(f0 * (f64)rdf32(param_1 + 0xdb8u));
                    a.r[0] = param_1;
                    a.r[1] = 0x817fdfd8u;
                    (void)tc_call(0x801cf5a4u, &a);
                }
            }
            if (rd32(param_1 + 0x110u) != 0u) {
                r31 = 0u;
            }
        }
    }
    return r31;
}
