#include "tc_rt.h"

s32 fn_800f7ac8(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x84u;
        a.r[1] = 0x801e6158u;
        a.r[2] = 0x74u;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0x24u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x80163f08u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
