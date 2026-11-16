#include "tc_rt.h"

s32 fn_80096ce0(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r3 = tc_call(0x800a7488u, &a);
    if ((r3 == 0x14u && param_1 == 0xcu) && param_2 == 1u) {
        r3 = 0x16u;
        return (s32)r3;
    }
    if ((r3 == 0x16u && param_1 == 0xcu) && param_2 == 3u) {
        r3 = 0x15u;
        return (s32)r3;
    }
    if ((r3 == 0x26u && param_1 == 0x15u) && param_2 == 0u) {
        r3 = 0x25u;
        return (s32)r3;
    }
    r3 = 0x51u;
    r4 = 0x803517a2u;
    ctr = 0x29u;
    do {
        if (param_1 == (u32)rd8(r4)) {
            r31 = r3;
            if (param_2 == (u32)rd8(r4 + 1u)) {
                return (s32)r3;
            }
        }
        r3 = r3 - 1u;
        if (param_1 == (u32)rd8(r4 - 2u)) {
            r31 = r3;
            if (param_2 == (u32)rd8(r4 - 1u)) {
                return (s32)r3;
            }
        }
        r4 = r4 - 4u;
        r3 = r3 - 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = r31;
    return (s32)r3;
}
