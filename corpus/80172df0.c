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

void fn_80172df0(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r6 = (u32)param_1;
    f0 = (f64)rdf32((u32)param_1 + 0x1d38u);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r5 = (u32)px_f2b(f0);
    ctr = 3u;
    do {
        wr8(r6 + 0x1864u, 0xffu);
        wr8(r6 + 0x1865u, 0xffu);
        wr8(r6 + 0x1866u, 0xffu);
        wr8(r6 + 0x1867u, (u8)r5);
        wr8(r6 + 0x1868u, 0xffu);
        wr8(r6 + 0x1869u, 0xffu);
        wr8(r6 + 0x186au, 0xffu);
        wr8(r6 + 0x186bu, (u8)r5);
        wr8(r6 + 0x186cu, 0xffu);
        wr8(r6 + 0x186du, 0xffu);
        wr8(r6 + 0x186eu, 0xffu);
        wr8(r6 + 0x186fu, (u8)r5);
        wr8(r6 + 0x1870u, 0xffu);
        wr8(r6 + 0x1871u, 0xffu);
        wr8(r6 + 0x1872u, 0xffu);
        wr8(r6 + 0x1873u, (u8)r5);
        wr8(r6 + 0x18f4u, 0xffu);
        wr8(r6 + 0x18f5u, 0xffu);
        wr8(r6 + 0x18f6u, 0xffu);
        wr8(r6 + 0x18f7u, (u8)r5);
        wr8(r6 + 0x18f8u, 0xffu);
        wr8(r6 + 0x18f9u, 0xffu);
        wr8(r6 + 0x18fau, 0xffu);
        wr8(r6 + 0x18fbu, (u8)r5);
        wr8(r6 + 0x18fcu, 0xffu);
        wr8(r6 + 0x18fdu, 0xffu);
        wr8(r6 + 0x18feu, 0xffu);
        wr8(r6 + 0x18ffu, (u8)r5);
        wr8(r6 + 0x1900u, 0xffu);
        wr8(r6 + 0x1901u, 0xffu);
        wr8(r6 + 0x1902u, 0xffu);
        wr8(r6 + 0x1903u, (u8)r5);
        wr8(r6 + 0x1984u, 0xffu);
        wr8(r6 + 0x1985u, 0xffu);
        wr8(r6 + 0x1986u, 0xffu);
        wr8(r6 + 0x1987u, (u8)r5);
        wr8(r6 + 0x1988u, 0xffu);
        wr8(r6 + 0x1989u, 0xffu);
        wr8(r6 + 0x198au, 0xffu);
        wr8(r6 + 0x198bu, (u8)r5);
        wr8(r6 + 0x198cu, 0xffu);
        wr8(r6 + 0x198du, 0xffu);
        wr8(r6 + 0x198eu, 0xffu);
        wr8(r6 + 0x198fu, (u8)r5);
        wr8(r6 + 0x1990u, 0xffu);
        wr8(r6 + 0x1991u, 0xffu);
        wr8(r6 + 0x1992u, 0xffu);
        wr8(r6 + 0x1993u, (u8)r5);
        r6 = r6 + 0x1b0u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if ((s32)rd32((u32)param_1 + 0x1d2cu) >= 3) {
        a.r[0] = (u32)param_1 + 0x1818u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1840u, 1u);
        a.r[0] = (u32)param_1 + 0x18a8u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x18d0u, 1u);
        a.r[0] = (u32)param_1 + 0x1938u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1960u, 1u);
    }
    if ((s32)rd32((u32)param_1 + 0x1d30u) >= 3) {
        a.r[0] = (u32)param_1 + 0x19c8u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x19f0u, 1u);
        a.r[0] = (u32)param_1 + 0x1a58u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1a80u, 1u);
        a.r[0] = (u32)param_1 + 0x1ae8u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1b10u, 1u);
    }
    if ((s32)rd32((u32)param_1 + 0x1d34u) >= 3) {
        a.r[0] = (u32)param_1 + 0x1b78u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1ba0u, 1u);
        a.r[0] = (u32)param_1 + 0x1c08u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1c30u, 1u);
        a.r[0] = (u32)param_1 + 0x1c98u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1cc0u, 1u);
    }
    r3 = tc_call(0x80059e38u, &a);
    if (r3 != 0u) {
        r3 = (u32)rd8((u32)param_1 + 0x16f0u);
        if (r3 == 0u) {
            f0 = (f64)rdf32(0x80574e68u);
            f1 = (f64)(f32)((f64)rdf32(0x80574d6cu) + (f64)rdf32((u32)param_1 + 0x1d38u));
            if (f1 < f0) {
                wrf32d((u32)param_1 + 0x1d38u, f1);
                return;
            }
            wrf32d((u32)param_1 + 0x1d38u, f0);
        } else {
            if (((r3 + 0xfeu) & 0xffu) <= 1u) {
                f0 = (f64)rdf32(0x80574cd8u);
                f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x1d38u) - (f64)rdf32(0x80574d6cu));
                if (f1 > f0) {
                    wrf32d((u32)param_1 + 0x1d38u, f1);
                } else {
                    wrf32d((u32)param_1 + 0x1d38u, f0);
                }
            }
        }
    }
    return;
}
