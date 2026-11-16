#include "tc_rt.h"

u32 fn_80037d9c(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    do {
        a.r[0] = param_2;
        a.r[1] = param_3;
        a.r[2] = (u32)param_4;
        r3 = tc_call(0x80271148u, &a);
        r31 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x800379c4u, &a);
    } while (r3 != 0u);
    if ((s32)r31 >= 0) {
        r31 = (u32)((s32)((r31 - (u32)param_4) | ((u32)param_4 - r31)) >> 31) & 0xffffffc0u;
    }
    if (param_1 != 0u) {
        wr32(param_1, r31);
    }
    return r31;
}
