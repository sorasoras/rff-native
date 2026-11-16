#include "tc_rt.h"

u32 fn_800efdf4(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f3 = (f64)rdf32(0x80573ad8u);
    f2 = (f64)rdf32(0x80573adcu);
    f1 = (f64)rdf32(0x80573ae0u);
    f0 = (f64)rdf32(0x80573ae4u);
    wrf32d(param_1 + 8u, f3);
    wrf32d(param_1 + 4u, f3);
    wrf32d(param_1, f3);
    wrf32d(param_1 + 0x14u, f3);
    wrf32d(param_1 + 0x10u, f3);
    wrf32d(param_1 + 0xcu, f3);
    wr32(param_1 + 0x18u, param_2);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0x28u, ppc_single_bits(f3));
    wr32(param_1 + 0x2cu, ppc_single_bits(f3));
    wr32(param_1 + 0x30u, ppc_single_bits(f3));
    wrf32d(param_1 + 0x34u, f2);
    wrf32d(param_1 + 0x38u, f1);
    wrf32d(param_1 + 0x3cu, f0);
    wrf32d(param_1 + 0x50u, f3);
    wrf32d(param_1 + 0x4cu, f3);
    wrf32d(param_1 + 0x48u, f3);
    wrf32d(param_1 + 0x5cu, f3);
    wrf32d(param_1 + 0x58u, f3);
    wrf32d(param_1 + 0x54u, f3);
    wr16(param_1 + 0x6au, 0u);
    wr16(param_1 + 0x6cu, 0u);
    wrf32d(param_1 + 0x70u, f3);
    wrf32d(param_1 + 0x74u, f3);
    f1 = tc_callf(0x80040a00u, &a);
    f31 = (f64)(f32)((f64)rdf32(0x80573ae8u) * f1);
    a.f[0] = f31;
    f1 = tc_callf(0x80262704u, &a);
    f2 = (f64)(f32)f1;
    f1 = f31;
    f31 = (f64)(f32)((f64)rdf32(param_1 + 0x38u) * f2);
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f2 = (f64)(f32)f1;
    f1 = (f64)rdf32(param_1 + 0x38u);
    wrf32d(param_1 + 0x2cu, (f64)rdf32(0x80573ad8u));
    f1 = (f64)(f32)(f1 * f2);
    wrf32d(param_1 + 0x30u, f31);
    wrf32d(param_1 + 0x28u, f1);
    return param_1;
}
