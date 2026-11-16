#include "tc_rt.h"

void fn_8014d3e4(u32 param_1)
{
    u32 c0gt = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = rd32(param_1 + 0x50u);
    r3 = tc_call(0x803014dcu, &a);
    r4 = 0u;
    r29 = 0u;
    if ((r3 & 0x20000u) != 0u) {
        r4 = 1u;
    }
    if ((r3 & 0x2000000u) != 0u) {
        r29 = 1u;
    }
    f1 = (f64)(f32)((f64)rdf32(param_1 + 0x70u) + (f64)rdf32(param_1 + 0x68u));
    c0gt = f1 > (f64)rdf32(0x80574740u);
    wrf32d(param_1 + 0x70u, f1);
    if (c0gt) {
        r30 = (r4 << 2u) & 0xfffffffcu;
        wrf32d(param_1 + 0x70u, (f64)rdf32(0x80574744u));
        f1 = tc_callf(0x80040a00u, &a);
        wrf32d(param_1 + 0x58u, (f64)(f32)((f64)rdf32(r30 - 0x7fa8b8f8u) * f1));
        f1 = tc_callf(0x80040a00u, &a);
        wrf32d(param_1 + 0x5cu, (f64)(f32)((f64)rdf32(r30 - 0x7fa8b8f0u) * f1));
        f1 = tc_callf(0x80040a00u, &a);
        wrf32d(param_1 + 0x68u, ppc_fmadds((f64)rdf32(r30 - 0x7fa8b8e8u), f1, (f64)rdf32(r30 - 0x7fa8b8f0u)));
    }
    f1 = (f64)(f32)((f64)rdf32(param_1 + 0x74u) + (f64)rdf32(param_1 + 0x6cu));
    c0gt = f1 > (f64)rdf32(0x80574740u);
    wrf32d(param_1 + 0x74u, f1);
    if (c0gt) {
        r30 = (r29 << 2u) & 0xfffffffcu;
        wrf32d(param_1 + 0x74u, (f64)rdf32(0x80574744u));
        f1 = tc_callf(0x80040a00u, &a);
        wrf32d(param_1 + 0x60u, (f64)(f32)((f64)rdf32(r30 - 0x7fa8b8e0u) * f1));
        f1 = tc_callf(0x80040a00u, &a);
        wrf32d(param_1 + 0x64u, (f64)(f32)(-(f64)rdf32(r30 - 0x7fa8b8d8u) * f1));
        f1 = tc_callf(0x80040a00u, &a);
        wrf32d(param_1 + 0x6cu, ppc_fmadds((f64)rdf32(r30 - 0x7fa8b8d0u), f1, (f64)rdf32(r30 - 0x7fa8b8c8u)));
    }
    return;
}
