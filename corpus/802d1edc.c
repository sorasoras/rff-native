#include "tc_rt.h"

void fn_802d1edc(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    r5 = (u32)(s16)rd16(param_2);
    if ((s32)r5 < 0) {
        r0 = 0u;
    } else {
        r0 = 0xffu;
        if ((s32)r5 <= 255) {
            r0 = r5;
        }
    }
    r5 = (u32)(s16)rd16(param_2 + 2u);
    wr8(0x817fdff8u, (u8)r0);
    if ((s32)r5 < 0) {
        r0 = 0u;
    } else {
        r0 = 0xffu;
        if ((s32)r5 <= 255) {
            r0 = r5;
        }
    }
    r5 = (u32)(s16)rd16(param_2 + 4u);
    wr8(0x817fdff9u, (u8)r0);
    if ((s32)r5 < 0) {
        r0 = 0u;
    } else {
        r0 = 0xffu;
        if ((s32)r5 <= 255) {
            r0 = r5;
        }
    }
    r4 = (u32)(s16)rd16(param_2 + 6u);
    wr8(0x817fdffau, (u8)r0);
    if ((s32)r4 < 0) {
        r0 = 0u;
    } else {
        r0 = 0xffu;
        if ((s32)r4 <= 255) {
            r0 = r4;
        }
    }
    wr8(0x817fdffbu, (u8)r0);
    wr32(param_1, rd32(0x817fdff8u));
    return;
}
