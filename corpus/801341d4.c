#include "tc_rt.h"

void fn_801341d4(u32 param_1, s32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r11 = 0, r12 = 0, r31 = 0;
    (void)param_1;
    r5 = param_3;
    wr32(0x817fdfd0u, 0x817fe000u);
    r12 = 0u;
    wr32(0x817fdffcu, 0u);
    r11 = 0x817fdfd8u;
    r31 = 0u;
    r8 = rd32(0x8033a244u);
    r7 = rd32(0x8033a248u);
    r6 = rd32(0x8033a24cu);
    r3 = rd32(0x8033a250u);
    r0 = rd32(0x8033a254u);
    wr32(0x817fdfd8u, rd32(0x8033a240u));
    wr32(0x817fdfdcu, r8);
    wr32(0x817fdfe0u, r7);
    wr32(0x817fdfe4u, r6);
    wr32(0x817fdfe8u, r3);
    wr32(0x817fdfecu, r0);
    do {
        r7 = (u32)param_2;
        r3 = 0u;
        r8 = 0u;
        do {
            if ((u32)rd16(r5) == rd32(r7 + 0xcu)) {
                r6 = 0x817fdfd8u;
                r3 = 1u;
                ctr = r12;
                if ((s32)r12 > 0) {
                    do {
                        if (r8 == rd32(r6)) {
                            r3 = 0u;
                            break;
                        }
                        r6 = r6 + 4u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
                if (r3 != 0u) {
                    wr32(r11, r8);
                    r11 = r11 + 4u;
                    r12 = r12 + 1u;
                    break;
                }
            }
            r8 = r8 + 1u;
            r7 = r7 + 4u;
        } while ((s32)r8 < 6);
        if (r3 == 0u) break;
        r31 = r31 + 1u;
        r5 = r5 + 4u;
    } while ((s32)r31 < 6);
    return;
}
