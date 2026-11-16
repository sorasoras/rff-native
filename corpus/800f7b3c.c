#include "tc_rt.h"

s32 fn_800f7b3c(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x50u;
        a.r[1] = 0x80163f08u;
        a.r[2] = 0xcu;
        a.r[3] = 0xeu;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8014af6cu, &a);
        }
    }
    return param_1;
}
