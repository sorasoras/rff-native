#include "tc_rt.h"

s32 fn_8030b270(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        c0eq = (u32)rd8((u32)param_1 + 0x31du) == 0u;
        if (!c0eq && !c0eq) {
            wr8((u32)param_1 + 0x31cu, 1u);
            r3 = tc_call(0x8030abd4u, &a);
            a.r[0] = r3;
            (void)tc_call(0x8030b20cu, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            (void)tc_call(0x8022fa78u, &a);
            wr8((u32)param_1 + 0x31du, 0u);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
