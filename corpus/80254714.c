#include "tc_rt.h"

void fn_80254714(f64 param_1, f64 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f3 = 0.0;
    f3 = (f64)rdf32(0x80576d60u);
    r3 = rd32(0x80576c88u);
    f0 = (f64)(f32)((f64)rdf32(0x80576d54u) + (f64)(f32)(f3 * param_1));
    wrf32d(r3 + 0x55cu, (f64)(f32)(f3 * param_2));
    wrf32d(r3 + 0x560u, f0);
    wr32(r3 + 0x5fcu, rd32(r3 + 0x5fcu) | 0x10000000u);
    return;
}
