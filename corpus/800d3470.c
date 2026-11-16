#include "tc_rt.h"

s32 fn_800d3470(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x738u, 0x80355c18u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800d52ecu, &a);
    a.r[0] = (u32)param_1 + 0x4bcu;
    (void)tc_call(0x800d3094u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800d3704u, &a);
    return param_1;
}
