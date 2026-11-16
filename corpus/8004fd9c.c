#include "tc_rt.h"

s32 fn_8004fd9c(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u && param_2 > 0) {
        (void)tc_call(0x80040cd4u, &a);
    }
    return param_1;
}
