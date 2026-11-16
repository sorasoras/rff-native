#include "tc_rt.h"

void fn_80194990(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x801945d0u, &a);
    wrf32d((u32)param_1 + 0x90u, (f64)rdf32(param_4));
    wrf32d((u32)param_1 + 0x94u, (f64)rdf32(param_4 + 4u));
    a.r[0] = (u32)param_1;
    a.r[1] = 3u;
    (void)tc_call(0x80194634u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_3;
    (void)tc_call(0x801949fcu, &a);
    return;
}
