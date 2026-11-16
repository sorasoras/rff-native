#include "tc_rt.h"

s32 fn_8021d9f8(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x2cu;
        a.r[1] = 0x8021d90cu;
        a.r[2] = 0x5cu;
        a.r[3] = 0x20u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80189440u, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80189294u, &a);
        }
    }
    return param_1;
}
