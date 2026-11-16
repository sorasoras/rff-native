#include "tc_rt.h"

u32 fn_8026ce0c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_2;
    if ((u32)param_2 == 0u) {
        r30 = 1u;
    }
    r30 = (r30 + 3u) & 0xfffffffcu;
    if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        (void)tc_call(0x8022d56cu, &a);
    }
    if (param_3 >= 0) {
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = (u32)param_3;
        r3 = tc_call(0x8026ca20u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = 0u - (u32)param_3;
        r3 = tc_call(0x8026cafcu, &a);
    }
    r31 = r3;
    if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        (void)tc_call(0x8022d648u, &a);
    }
    return r31;
}
