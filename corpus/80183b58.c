#include "tc_rt.h"

s32 fn_80183b58(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xcu;
    (void)tc_call(0x80163efcu, &a);
    a.r[0] = (u32)param_1 + 0x18u;
    (void)tc_call(0x801f0da4u, &a);
    return param_1;
}
