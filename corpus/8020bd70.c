#include "tc_rt.h"

s32 fn_8020bd70(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = (u32)param_3;
    r3 = tc_call(0x8020bbacu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r31 = (u32)param_3 * 0x2cu;
        r30 = rd32((u32)param_1 + 4u) + ((u32)param_2 * 0x370u) + 0x14u;
        a.r[0] = r30 + r31;
        r3 = tc_call(0x802550d4u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r3 = r30 + r31;
        }
    }
    return (s32)r3;
}
