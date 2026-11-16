#include "tc_rt.h"

s32 fn_802bffc8(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    while (r31 < (u32)rd16((u32)param_1 + 0x10u)) {
        a.r[0] = (u32)param_1 + 0x18u;
        a.r[1] = r31 & 0xffffu;
        r3 = tc_call(0x802d7bccu, &a);
        if (rd32(r3) == (u32)param_2) {
            r3 = rd32(r3 + 4u);
            return (s32)r3;
        }
        r31 = r31 + 1u;
    }
    r3 = 0u;
    return (s32)r3;
}
