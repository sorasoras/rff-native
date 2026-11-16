#include "tc_rt.h"

u32 fn_8004bd34(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(0x803c62c8u);
    a.r[1] = param_2;
    a.r[2] = 0x20u;
    a.r[3] = 0x4e4f5320u;
    a.r[4] = param_3;
    r3 = tc_call(0x8003b16cu, &a);
    r31 = r3;
    if ((u32)param_1 != 0u) {
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        a.r[2] = param_2;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = r31;
        a.r[1] = param_2;
        (void)tc_call(0x80227768u, &a);
    }
    return r31;
}
