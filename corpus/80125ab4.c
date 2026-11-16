#include "tc_rt.h"

s32 fn_80125ab4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8016172cu, &a);
    wr32((u32)param_1 + 0xccu, 0x803633c4u);
    return param_1;
}
