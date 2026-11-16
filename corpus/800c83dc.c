#include "tc_rt.h"

s32 fn_800c83dc(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_2;
    a.r[1] = (u32)param_1 + 0x20u;
    a.r[2] = 0x1a40u;
    (void)tc_call(0x80004338u, &a);
    return (s32)((u32)param_2 + 0x1a40u);
}
