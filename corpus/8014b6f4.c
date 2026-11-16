#include "tc_rt.h"

s32 fn_8014b6f4(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    r3 = tc_call(0x800cd6e4u, &a);
    r4 = r3 & 0xffu;
    if ((s32)r4 >= 0 && (s32)r4 <= 4) {
        r3 = 2u;
    } else {
        if ((s32)r4 >= 5 && (s32)r4 <= 16) {
            r3 = 3u;
        } else {
            if ((s32)r4 >= 19 && (s32)r4 <= 20) {
                r3 = 4u;
            } else {
                r3 = (u32)((s32)~((r4 - 0x15u) | (0x15u - r4)) >> 31) + 6u;
            }
        }
    }
    return (s32)r3;
}
