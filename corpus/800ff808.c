#include "tc_rt.h"

void fn_800ff808(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r3 = 0xffffu;
    r6 = (u32)(s8)rd8(param_1);
    r5 = (u32)(s8)rd8(param_1 + 1u);
    r4 = (u32)(s8)rd8(param_1 + 2u);
    r0 = (u32)(s8)rd8(param_1 + 3u);
    r9 = 0x80339230u;
    r11 = 0u;
    ctr = 7u;
    for (;;) {
        r10 = rd32(r9);
        r8 = (u32)(s8)r6;
        if (r8 == (u32)(s8)rd8(r10) && r8 != 0u) {
            r8 = (u32)(s8)r5;
            if (r8 == (u32)(s8)rd8(r10 + 1u) && r8 != 0u) {
                r8 = (u32)(s8)r4;
                if (r8 == (u32)(s8)rd8(r10 + 2u) && r8 != 0u && (u32)(s8)r0 == (u32)(s8)rd8(r10 + 3u)) {
                    r3 = r11;
                }
            }
        }
        if (r3 != 0xffffu) break;
        r9 = r9 + 4u;
        r11 = r11 + 1u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            return;
        }
    }
    return;
}
