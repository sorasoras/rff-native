#include "tc_rt.h"

s32 fn_801366d0(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801f0de8u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
