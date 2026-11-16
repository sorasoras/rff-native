#include "tc_rt.h"

void fn_8014007c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8013f288u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8013f718u, &a);
        r31 = r3;
        a.r[0] = param_1;
        r3 = tc_call(0x8013f438u, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        r3 = tc_call(0x80140568u, &a);
        if ((u32)(s8)r3 == 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x8013f718u, &a);
            r31 = r3;
            a.r[0] = param_1;
            r3 = tc_call(0x8013f438u, &a);
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = (u32)(s8)param_2;
            (void)tc_call(0x80140558u, &a);
        }
    }
    return;
}
