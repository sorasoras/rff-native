#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

f64 fn_801f82dc(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d56bcu, &a);
    if (r3 == 0u) {
        f1 = (f64)rdf32(0x8057663cu);
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801f8428u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800d56bcu, &a);
            r30 = r3;
            f1 = tc_callf(0x800d3b08u, &a);
            f31 = (f64)(f32)((f64)(f32)(px_b2f((u64)((r30 - 1u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576648u)) * f1);
            a.r[0] = (u32)param_1;
            f1 = tc_callf(0x800d3b00u, &a);
            r4 = tc_lastr4();
            f2 = rdf64(0x80576648u);
            f31 = ppc_fmadds((f64)(f32)(px_b2f((u64)(r30 ^ 0x80000000u) | 0x4330000000000000ull) - f2), f1, f31);
        } else {
            a.r[0] = (u32)param_1;
            f1 = tc_callf(0x800d3b00u, &a);
            r4 = tc_lastr4();
            f2 = 0.0;
            f31 = f1;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        a.f[1] = f2;
        f1 = tc_callf(rd32(rd32((u32)param_1 + 0x738u) + 0x20u), &a);
        f31 = ppc_fmadds((f64)rdf32(0x80576644u), f1, f31);
        f1 = f31;
    }
    return f1;
}
