#include "tc_rt.h"

void fn_80090d90(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r28 = 0u;
    r29 = (u32)param_1;
    do {
        r3 = rd32(r29 + 0xbf8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80090138u, &a);
            r30 = rd32(r29 + 0xbf8u);
            c0eq = r30 == 0u;
            if (!c0eq && !c0eq) {
                r3 = tc_call(0x8009000cu, &a);
                r6 = r3;
                if (rd32(r3 + 0x10u) != 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                } else {
                    if (rd32(r3 + 0x20u) != 0u) {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = r30;
                        (void)tc_call(0x80094ec0u, &a);
                    } else {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r30;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        (void)tc_call(0x80040e98u, &a);
                    }
                }
            }
            wr32(r29 + 0xbf8u, 0u);
        }
        r28 = r28 + 1u;
        r29 = r29 + 4u;
    } while ((s32)r28 < 20);
    wr32((u32)param_1 + 0xbf4u, 0x19u);
    return;
}
