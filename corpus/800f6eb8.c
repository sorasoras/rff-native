#include "tc_rt.h"

void fn_800f6eb8(f64 param_1, s32 param_2, u32 param_3)
{
    u32 r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_2 + 0x58u;
    a.r[1] = 0u;
    a.r[2] = 0x28u;
    (void)tc_call(0x8000443cu, &a);
    f0 = (f64)rdf32(0x80573bd0u);
    wr32((u32)param_2 + 0x58u, 1u);
    wrf32d((u32)param_2 + 0x78u, f0);
    f1 = rdf64(0x80573bd8u);
    r6 = rd32(0x805710e0u);
    wr32(0x817fdfdcu, param_3 ^ 0x80000000u);
    wr32(0x817fdfd8u, 0x43300000u);
    f0 = (f64)(f32)(rdf64(0x817fdfd8u) - f1);
    wrf32d((u32)param_2 + 0x5cu, (f64)rdf32((r6 * 0x6d0u) - 0x7fc2e5ecu));
    wrf32d((u32)param_2 + 0x68u, param_1);
    wrf32d((u32)param_2 + 0x74u, f0);
    wr32((u32)param_2 + 0x7cu, 0x800f6380u);
    return;
}
