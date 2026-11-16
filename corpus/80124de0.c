#include "tc_rt.h"

s32 fn_80124de0(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = 0x80124e48u;
        a.r[2] = 0x58u;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
