#include "tc_rt.h"

void fn_800daed8(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f0 = (f64)rdf32(0x80573a14u);
    wr32(param_1, rd32(param_2));
    wr32(param_1 + 4u, rd32(param_2 + 4u));
    wr32(param_1 + 8u, rd32(param_2 + 8u));
    wrf32d(param_1 + 0xcu, (f64)rdf32(param_2 + 0xcu));
    wrf32d(param_1 + 0x10u, (f64)rdf32(param_2 + 0x10u));
    wrf32d(param_1 + 0x14u, (f64)rdf32(param_2 + 0x14u));
    wrf32d(param_1 + 0x18u, (f64)rdf32(param_2 + 0x18u));
    wrf32d(param_1 + 0x1cu, (f64)rdf32(param_2 + 0x1cu));
    wrf32d(param_1 + 0x20u, (f64)rdf32(param_2 + 0x20u));
    f1 = (f64)rdf32(param_2 + 0x24u);
    if (f0 < f1) {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573a18u));
    } else {
        f0 = (f64)rdf32(0x80573a1cu);
        if ((f0 > f1) || (f0 == f1)) {
            f1 = (f64)(f32)((f64)rdf32(0x80573a18u) + f1);
        }
    }
    wrf32d(param_1 + 0x24u, f1);
    f1 = (f64)rdf32(param_2 + 0x28u);
    if ((f64)rdf32(0x80573a14u) < f1) {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573a18u));
    } else {
        f0 = (f64)rdf32(0x80573a1cu);
        if ((f0 > f1) || (f0 == f1)) {
            f1 = (f64)(f32)((f64)rdf32(0x80573a18u) + f1);
        }
    }
    wrf32d(param_1 + 0x28u, f1);
    wrf32d(param_1 + 0x2cu, (f64)rdf32(param_2 + 0x2cu));
    wr32(param_1 + 0x30u, rd32(param_2 + 0x30u));
    return;
}
