#include "tc_rt.h"

s32 fn_8016df14(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80574cd8u);
    wrf32d((u32)param_1 + 0x80u, f0);
    wrf32d((u32)param_1 + 0x7cu, f0);
    wrf32d((u32)param_1 + 0x78u, f0);
    a.r[0] = (u32)param_1 + 0x8cu;
    a.r[1] = 0x80079efcu;
    a.r[2] = 0x80079f14u;
    a.r[3] = 0x74u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    return param_1;
}
