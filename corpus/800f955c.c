#include "tc_rt.h"

void fn_800f955c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    if ((u32)(s8)rd8(0x80571240u) == 0u) {
        wr16(0x80571244u, 0x2e8u);
        wr8(0x80571246u, 1u);
        wr8(0x80571247u, 1u);
        wr8(0x80571240u, 1u);
    }
    r3 = (u32)rd8(0x80571246u);
    r0 = (u32)rd8(0x80571247u);
    r4 = ((u32)param_1 * 6u) - 0x7fb66fa0u;
    wr16(r4 + 0x11cu, rd16(0x80571244u));
    wr8(r4 + 0x11eu, (u8)r3);
    wr8(r4 + 0x11fu, (u8)r0);
    return;
}
