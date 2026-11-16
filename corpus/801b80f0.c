#include "tc_rt.h"

s32 fn_801b80f0(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u && param_2 > 0) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800f8130u, &a);
    }
    return param_1;
}
