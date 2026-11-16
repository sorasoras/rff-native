#include "tc_rt.h"

s32 fn_80201940(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8016172cu, &a);
    wr32((u32)param_1 + 0xccu, 0x8037746cu);
    return param_1;
}
