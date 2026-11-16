#include "tc_rt.h"

void fn_802546ac(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, s32 param_7)
{
    u32 r3 = 0;
    f64 f2 = 0.0;
    f2 = param_2;
    if ((u32)param_7 == 0u) {
        f2 = (f64)(f32)(param_2 - (f64)rdf32(0x80576d58u));
    }
    r3 = rd32(0x80576c88u);
    wrf32d(r3 + 0x544u, param_1);
    wrf32d(r3 + 0x548u, f2);
    wrf32d(r3 + 0x54cu, param_3);
    wrf32d(r3 + 0x550u, param_4);
    wrf32d(r3 + 0x554u, param_5);
    wrf32d(r3 + 0x558u, param_6);
    wr32(r3 + 0x5fcu, rd32(r3 + 0x5fcu) | 0x10000000u);
    return;
}
