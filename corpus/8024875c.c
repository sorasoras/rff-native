#include "tc_rt.h"

void fn_8024875c(u32 param_r3)
{
    u32 r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r26 = 0u;
    r31 = param_r3;
    r30 = param_r3;
    do {
        r3 = rd32(r31);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = (rd32(param_r3 + 0x14u) << 2u) & 0xfffffffcu;
            (void)tc_call(0x8000443cu, &a);
        }
        r3 = rd32(r31 + 0x1cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = (rd32(param_r3 + 0x30u) << 2u) & 0xfffffffcu;
            (void)tc_call(0x8000443cu, &a);
        }
        r28 = r30;
        r29 = param_r3;
        r27 = 0u;
        do {
            r3 = rd32(r28 + 0x34u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = (rd32(r29 + 0x5cu) << 2u) & 0xfffffffcu;
                (void)tc_call(0x8000443cu, &a);
            }
            r27 = r27 + 1u;
            r29 = r29 + 4u;
            r28 = r28 + 4u;
        } while (r27 < 2u);
        r29 = r30;
        r28 = param_r3;
        r27 = 0u;
        do {
            r3 = rd32(r29 + 0x6cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = (rd32(r28 + 0x94u) << 2u) & 0xfffffffcu;
                (void)tc_call(0x8000443cu, &a);
            }
            r27 = r27 + 1u;
            r28 = r28 + 4u;
            r29 = r29 + 4u;
        } while (r27 < 2u);
        r26 = r26 + 1u;
        r30 = r30 + 8u;
        r31 = r31 + 4u;
    } while (r26 < 3u);
    return;
}
