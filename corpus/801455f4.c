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

void fn_801455f4(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r3 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    if ((f64)rdf32(param_1 + 0x484u) < (f64)rdf32(0x80574550u)) {
        wrf32d(param_1 + 0x484u, (f64)(f32)((f64)rdf32(param_1 + 0x84u) * px_fdiv((f64)(f32)(px_b2f((u64)(param_2 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805745b8u)), rdf64(0x805745c0u))));
    }
    f4 = (f64)rdf32(param_1);
    f2 = (f64)rdf32(param_1 + 0x468u);
    f1 = (rdf64(0x80574568u) * f4) + (f64)rdf32(param_1 + 0x47cu);
    f0 = (f64)rdf32(0x80574550u);
    wr32(param_1 + 0x48cu, 0u);
    f3 = (f64)(f32)(f2 + f4);
    c0lt = f4 < f0;
    wrf32d(param_1 + 0x468u, f3);
    wrf32d(param_1 + 0x47cu, (f64)(f32)f1);
    if (f4 > f0) {
        if (!((f64)(f32)(f3 + (f64)rdf32(param_1 + 0x474u)) > (f64)(f32)((f64)rdf32(param_1 + 0x78u) + (f64)rdf32(param_1 + 0x484u)))) {
            return;
        }
        f0 = (f64)rdf32(0x805745b0u);
        wr32(param_1 + 0x48cu, 1u);
        f0 = (f64)(f32)(f0 * f4);
        wrf32d(param_1, f0);
    } else {
        if (c0lt) {
            f0 = (f64)rdf32(param_1 + 0x78u);
            if ((f3 < f0) || (f3 == f0)) {
                r3 = tc_call(0x80040b64u, &a);
                r6 = (u32)param_3 - param_2;
                f1 = (f64)rdf32(0x805745b0u);
                f0 = (f64)rdf32(param_1);
                wr32(param_1 + 0x488u, rd32(param_1 + 0x488u) + 1u);
                f0 = (f64)(f32)(f1 * f0);
                f4 = rdf64(0x805745c8u);
                f3 = (f64)rdf32(0x805745b4u);
                f2 = (f64)rdf32(param_1 + 0x84u);
                wrf32d(param_1, f0);
                wrf32d(param_1 + 0x484u, (f64)(f32)(f2 * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(param_2 + (r3 - (ppc_divwu(r3, r6) * r6))) | 0x4330000000000000ull) - f4), f3)));
            }
        }
    }
    return;
}
