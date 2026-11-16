#include "tc_rt.h"

u32 fn_8020bc2c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = (u32)param_3;
    r3 = tc_call(0x8020bbacu, &a);
    if (r3 != 0u) {
        r3 = rd32(rd32((u32)param_1 + 4u) + ((u32)param_2 * 0x370u) + ((u32)param_3 * 0x2cu) + 4u);
    } else {
        r3 = 0xffffffffu;
    }
    return r3;
}
