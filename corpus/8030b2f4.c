#include "tc_rt.h"

u32 fn_8030b2f4(s32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
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
    a.r[0] = (u32)param_1;
    a.r[1] = 0x8030b3c8u;
    a.r[2] = (u32)param_1;
    a.r[3] = (u32)param_3 + (u32)param_4;
    a.r[4] = (u32)param_4;
    a.r[5] = param_2;
    a.r[6] = 0u;
    r3 = tc_call(0x8022f550u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32((u32)param_1 + 0x318u, (u32)param_3);
        wr8((u32)param_1 + 0x31cu, 0u);
        wr8((u32)param_1 + 0x31du, 1u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8022fbb8u, &a);
        r3 = 1u;
    }
    return r3;
}
