#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_800dd368(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0;
    r3 = (u32)param_1;
    f3 = (f64)rdf32(0x80573a80u);
    r5 = 0u;
    f4 = f3;
    ctr = 2u;
    do {
        r4 = rd32(r3 + 4u);
        if (r4 != 0u) {
            f0 = (f64)rdf32(r4);
            f3 = (f64)(f32)(f3 + f0);
            f4 = ppc_fmadds((f64)rdf32(r4 + 4u), f0, f4);
        }
        r4 = rd32(r3 + 8u);
        if (r4 != 0u) {
            f0 = (f64)rdf32(r4);
            f3 = (f64)(f32)(f3 + f0);
            f4 = ppc_fmadds((f64)rdf32(r4 + 4u), f0, f4);
        }
        r4 = rd32(r3 + 0xcu);
        if (r4 != 0u) {
            f0 = (f64)rdf32(r4);
            f3 = (f64)(f32)(f3 + f0);
            f4 = ppc_fmadds((f64)rdf32(r4 + 4u), f0, f4);
        }
        r4 = rd32(r3 + 0x10u);
        if (r4 != 0u) {
            f0 = (f64)rdf32(r4);
            f3 = (f64)(f32)(f3 + f0);
            f4 = ppc_fmadds((f64)rdf32(r4 + 4u), f0, f4);
        }
        r4 = rd32(r3 + 0x14u);
        if (r4 != 0u) {
            f0 = (f64)rdf32(r4);
            f3 = (f64)(f32)(f3 + f0);
            f4 = ppc_fmadds((f64)rdf32(r4 + 4u), f0, f4);
        }
        r3 = r3 + 0x14u;
        r5 = r5 + 4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    f1 = (f64)rdf32(0x80573a80u);
    if (!((f64)(f32)ppc_fabs((f64)(f32)(f1 - f3)) < rdf64(0x80573a90u))) {
        return (f64)(f32)px_fdiv(f4, f3);
    }
    return f1;
}
