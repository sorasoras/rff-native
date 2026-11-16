#include "tc_rt.h"

s32 fn_801852b4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8016172cu, &a);
    wr32((u32)param_1 + 0xccu, 0x8036f430u);
    return param_1;
}
