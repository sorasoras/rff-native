#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801909dc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f9 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0xc4u) != 0u) {
        a.r[0] = rd32(param_1 + 4u);
        r3 = tc_call(0x80100d88u, &a);
        r31 = r3;
        a.r[0] = rd32(param_1 + 8u);
        r3 = tc_call(0x80100d88u, &a);
        r0 = rd32(param_1);
        if ((s32)r0 > 1) {
            r4 = r0 ^ 0x80000000u;
            r0 = rd32(param_1 + 0xc0u) ^ 0x80000000u;
            f7 = rdf64(0x805753a0u);
            f6 = (f64)rdf32(0x80575398u);
            f9 = (f64)rdf32(r3);
            f3 = (f64)rdf32(r3 + 4u);
            f2 = (f64)(f32)((f64)rdf32(r31 + 4u) - f3);
            f5 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(r31) - f9), (f64)(f32)((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f7) - f6));
            wrf32d(0x817fdfe0u, (f64)rdf32(r3 + 8u));
            f2 = (f64)(f32)px_fdiv(f2, (f64)(f32)((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f7) - f6));
            wrf32d(0x817fdfd8u, ppc_fmadds(f5, (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f7), f9));
            wrf32d(0x817fdfdcu, ppc_fmadds(f2, (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f7), f3));
        } else {
            f1 = (f64)rdf32(r3 + 4u);
            f0 = (f64)rdf32(r3 + 8u);
            wrf32d(0x817fdfd8u, (f64)rdf32(r3));
            wrf32d(0x817fdfdcu, f1);
            wrf32d(0x817fdfe0u, f0);
        }
        r31 = rd32(rd32(param_1 + 0xcu) + 0x10u);
        f1 = (f64)rdf32(0x817fdfdcu);
        wrf32d(r31 + 0x2cu, (f64)rdf32(0x817fdfd8u));
        f0 = (f64)rdf32(0x817fdfe0u);
        wrf32d(r31 + 0x30u, f1);
        wrf32d(r31 + 0x34u, f0);
        a.r[0] = rd32(param_1 + 4u);
        r3 = tc_call(0x801010c4u, &a);
        wr8(r31 + 0xbbu, (u8)(((u32)rd8(r31 + 0xbbu) & 0xfdu) | 2u));
        wr8(r31 + 0xb8u, (u8)r3);
        a.r[0] = rd32(param_1 + 0xcu);
        (void)tc_call(0x800fe6e4u, &a);
    }
    return;
}
