#include "tc_rt.h"

s32 fn_802f8628(s32 param_1, s32 param_2)
{
    u32 c0eq = 0;
    TcArgs a = {0};
    c0eq = (u32)param_1 == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            (void)tc_call(0x802dea2cu, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
