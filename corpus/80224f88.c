#include "tc_rt.h"

s32 fn_80224f88(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x130u;
        a.r[1] = 0x80222f04u;
        a.r[2] = 0x90u;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x80222f04u;
        a.r[2] = 0x90u;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
