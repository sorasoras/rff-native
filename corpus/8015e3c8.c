#include "tc_rt.h"

void fn_8015e3c8(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80574a1cu);
    wrf32d(rd32((u32)param_1 + 0x78u) + 0x58u, (f64)rdf32(0x80574a18u));
    wrf32d(rd32((u32)param_1 + 0x78u) + 0x54u, f0);
    a.r[0] = rd32((u32)param_1 + 0x78u);
    a.r[1] = 0u;
    (void)tc_call(0x800355acu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x8015dfecu, &a);
    return;
}
