#include "tc_rt.h"

void fn_80053974(f64 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r9 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    r9 = ((u32)param_2 * 0x70u) - 0x7fc2d850u;
    r0 = (u32)param_3 * 0x70u;
    f6 = (f64)rdf32(r9 + 4u);
    f9 = (f64)rdf32(r9);
    f8 = (f64)rdf32(r9 + 8u);
    r4 = r0 - 0x7fc2d850u;
    f7 = (f64)rdf32(r9 + 0xcu);
    f4 = ppc_fmadds(param_1, (f64)(f32)((f64)rdf32(r4 + 4u) - f6), f6);
    f6 = (f64)rdf32(r9 + 0x10u);
    f12 = (f64)rdf32(r9 + 0x14u);
    f5 = ppc_fmadds(param_1, (f64)(f32)((f64)rdf32(r0 - 0x7fc2d850u) - f9), f9);
    f2 = ppc_fmadds(param_1, (f64)(f32)((f64)rdf32(r4 + 0xcu) - f7), f7);
    f10 = (f64)rdf32(r9 + 0x18u);
    f0 = ppc_fmadds(param_1, (f64)(f32)((f64)rdf32(r4 + 0x10u) - f6), f6);
    f29 = ppc_fmadds(param_1, (f64)(f32)((f64)rdf32(r4 + 0x14u) - f12), f12);
    f31 = (f64)rdf32(r9 + 0x1cu);
    f3 = ppc_fmadds(param_1, (f64)(f32)((f64)rdf32(r4 + 8u) - f8), f8);
    f13 = (f64)rdf32(r9 + 0x20u);
    f11 = (f64)rdf32(r9 + 0x24u);
    f30 = ppc_fmadds(param_1, (f64)(f32)((f64)rdf32(r4 + 0x18u) - f10), f10);
    f10 = (f64)(f32)((f64)rdf32(r4 + 0x24u) - f11);
    f9 = (f64)rdf32(r9 + 0x28u);
    f31 = ppc_fmadds(param_1, (f64)(f32)((f64)rdf32(r4 + 0x1cu) - f31), f31);
    f7 = (f64)rdf32(r9 + 0x2cu);
    f8 = (f64)(f32)((f64)rdf32(r4 + 0x28u) - f9);
    f6 = (f64)rdf32(r4 + 0x2cu);
    f12 = ppc_fmadds(param_1, (f64)(f32)((f64)rdf32(r4 + 0x20u) - f13), f13);
    wrf32d(0x803d2780u, f5);
    f10 = ppc_fmadds(param_1, f10, f11);
    f8 = ppc_fmadds(param_1, f8, f9);
    f6 = (f64)(f32)(f6 - f7);
    wrf32d(0x803d2784u, f4);
    wrf32d(0x803d2788u, f3);
    wrf32d(0x803d278cu, f2);
    wrf32d(0x803d2790u, f0);
    wrf32d(0x803d2794u, f29);
    wrf32d(0x803d2798u, f30);
    wrf32d(0x803d279cu, f31);
    wrf32d(0x803d27a0u, f12);
    wrf32d(0x803d27a4u, f10);
    wrf32d(0x803d27a8u, f8);
    wrf32d(0x803d27acu, ppc_fmadds(param_1, f6, f7));
    return;
}
