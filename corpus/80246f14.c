#include "tc_rt.h"

void fn_80246f14(u32 param_r3)
{
    u32 r3 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r25 = 0u;
    r31 = param_r3;
    r30 = param_r3;
    r29 = param_r3;
    do {
        r3 = rd32(r31);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = (rd32(param_r3 + 0x1cu) << 2u) & 0xfffffffcu;
            (void)tc_call(0x8000443cu, &a);
        }
        r3 = rd32(r31 + 0x2cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = (rd32(param_r3 + 0x40u) << 2u) & 0xfffffffcu;
            (void)tc_call(0x8000443cu, &a);
        }
        r27 = r30;
        r28 = param_r3;
        r26 = 0u;
        do {
            r3 = rd32(r27 + 0x44u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = (rd32(r28 + 0x80u) << 2u) & 0xfffffffcu;
                (void)tc_call(0x8000443cu, &a);
            }
            r26 = r26 + 1u;
            r28 = r28 + 4u;
            r27 = r27 + 4u;
        } while (r26 < 3u);
        r28 = r29;
        r27 = param_r3;
        r26 = 0u;
        do {
            r3 = rd32(r28 + 0x98u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = (rd32(r27 + 0xc0u) << 2u) & 0xfffffffcu;
                (void)tc_call(0x8000443cu, &a);
            }
            r26 = r26 + 1u;
            r27 = r27 + 4u;
            r28 = r28 + 4u;
        } while (r26 < 2u);
        r3 = rd32(r31 + 0xc8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = (rd32(r31 + 0xecu) << 2u) & 0xfffffffcu;
            (void)tc_call(0x8000443cu, &a);
        }
        r25 = r25 + 1u;
        r30 = r30 + 0xcu;
        r29 = r29 + 8u;
        r31 = r31 + 4u;
    } while (r25 < 3u);
    return;
}
