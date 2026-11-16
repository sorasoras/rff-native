#include "tc_rt.h"

void fn_802ef5a4(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    r3 = (((u32)param_2 << 5u) & 0xffffffe0u) + rd32((u32)param_1 + 4u);
    wrf32d(param_3, (f64)rdf32(r3));
    wrf32d(param_3 + 4u, (f64)rdf32(r3 + 4u));
    wrf32d(param_3 + 8u, (f64)rdf32(r3 + 8u));
    wrf32d(param_3 + 0xcu, (f64)rdf32(r3 + 0xcu));
    wrf32d(param_3 + 0x10u, (f64)rdf32(r3 + 0x10u));
    wrf32d(param_3 + 0x14u, (f64)rdf32(r3 + 0x14u));
    wrf32d(param_3 + 0x18u, (f64)rdf32(r3 + 0x18u));
    wrf32d(param_3 + 0x1cu, (f64)rdf32(r3 + 0x1cu));
    return;
}
