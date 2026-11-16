#include "tc_rt.h"

void fn_802c34d8(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r8 = 0u;
    r9 = 0u;
    r10 = 0u;
    r11 = rd32(rd32((u32)param_1 + 4u) + 8u);
    r7 = 0u;
    r6 = r11;
    for (;;) {
        r0 = (u32)rd16(r6);
        if (r0 == 0u) break;
        if (r0 == 0x22u) {
            if (r10 != 0u) {
                r10 = 0u;
            } else {
                r4 = r9 * 0x18u;
                r9 = r9 + 1u;
                r10 = 1u;
                r4 = r4 + (r7 + (u32)param_1);
                wr32(r4 + 0xbcu, r11 + (((r8 + 1u) << 1u) & 0xfffffffeu));
                if (r9 == 0xau) {
                    r9 = 0u;
                    r7 = r7 + 4u;
                }
            }
        }
        r6 = r6 + 2u;
        r8 = r8 + 1u;
    }
    return;
}
