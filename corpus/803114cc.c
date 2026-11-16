#include "tc_rt.h"

s32 fn_803114cc(s32 param_1, s32 param_2)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r31 = (u32)param_1 + 0x10000u;
        r30 = 0u;
        while (r30 < rd32(r31 - 0x3fecu)) {
            a.r[0] = (u32)param_1;
            a.r[1] = r30;
            (void)tc_call(0x80311838u, &a);
            r30 = r30 + 1u;
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
