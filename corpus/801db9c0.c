#include "tc_rt.h"

s32 fn_801db9c0(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0x80079efcu;
    a.r[2] = 0x80079f14u;
    a.r[3] = 0x74u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    f0 = (f64)rdf32(0x805761a8u);
    wrf32d((u32)param_1 + 0xf0u, f0);
    wrf32d((u32)param_1 + 0xecu, f0);
    wrf32d((u32)param_1 + 0xe8u, f0);
    return param_1;
}
