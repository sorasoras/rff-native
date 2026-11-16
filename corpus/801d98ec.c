#include "tc_rt.h"

void fn_801d98ec(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 1u;
        (void)tc_call(0x8007fa58u, &a);
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = 1u;
        (void)tc_call(0x8007fa58u, &a);
        a.r[0] = param_1;
        a.r[1] = 2u;
        a.r[2] = 1u;
        (void)tc_call(0x8007fa58u, &a);
    } else {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x8007fa58u, &a);
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = 0u;
        (void)tc_call(0x8007fa58u, &a);
        a.r[0] = param_1;
        a.r[1] = 2u;
        a.r[2] = 0u;
        (void)tc_call(0x8007fa58u, &a);
    }
    return;
}
