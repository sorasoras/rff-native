#include "tc_rt.h"

void fn_80057470(s32 param_1, s32 param_2)
{
    u32 r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    r8 = (u32)param_2 * 0x30u;
    f5 = (f64)rdf32(0x803369c0u);
    r7 = (u32)param_1 + r8;
    wrf32d(r7 + 4u, (f64)rdf32(0x804890c8u));
    f4 = (f64)rdf32(0x803369c4u);
    f3 = (f64)rdf32(0x803369c8u);
    wrf32d(r7 + 8u, (f64)rdf32(0x804890ccu));
    f2 = (f64)rdf32(0x803369ccu);
    f1 = (f64)rdf32(0x80572394u);
    wrf32d(r7 + 0xcu, (f64)rdf32(0x804890d0u));
    f0 = (f64)rdf32(0x80572398u);
    wrf32d(r7 + 0x10u, f5);
    wrf32d(r7 + 0x14u, f4);
    wrf32d(r7 + 0x18u, f3);
    wrf32d(r7 + 0x1cu, f2);
    wr32(r7 + 0x20u, 0u);
    wrf32d(r7 + 0x24u, f1);
    wrf32d(r7 + 0x28u, f0);
    wr32(r7 + 0x2cu, 0u);
    wr32((u32)param_1 + r8, (u32)param_2);
    return;
}
