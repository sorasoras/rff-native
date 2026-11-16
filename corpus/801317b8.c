#include "tc_rt.h"

s32 fn_801317b8(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = 0x817fdfb8u;
    r28 = 1u;
    r27 = 0u;
    r30 = 0u;
    do {
        r3 = rd32((u32)param_1 + 0x458u);
        wr32(r29, 0u);
        r3 = rd32(r3 + 0x2cu);
        r31 = rd32(r3 + r30);
        if ((u32)rd16(r31 + 0xbcu) != 0x2e8u && r28 != 0u) {
            r20 = 0u;
            r21 = 0u;
            for (;;) {
                r3 = rd32((u32)param_1 + 0x454u);
                if ((s32)r20 >= (s32)rd32(r3 + 0xcu)) break;
                r3 = rd32(r3 + 0x2cu);
                r22 = rd32(r3 + r21);
                if ((u32)rd16(r22 + 0xbcu) != 0x2e8u) {
                    a.r[0] = r22;
                    a.r[1] = r31;
                    a.r[2] = 0xffffffffu;
                    r3 = tc_call(0x801621e4u, &a);
                    if (r3 != 0u && (u32)rd16(r31 + 0xbcu) == 0x2e8u) {
                        a.r[0] = r31;
                        (void)tc_call(0x80161ac4u, &a);
                        wr16(r31 + 0xbcu, 0x2e8u);
                        wr8(r31 + 0xbeu, 0u);
                        wr8(r31 + 0xbfu, 0u);
                        wr32(r29, r22);
                        break;
                    }
                }
                r21 = r21 + 4u;
                r20 = r20 + 1u;
            }
            if (rd32(r29) == 0u) {
                r20 = 0u;
                r21 = 0u;
                for (;;) {
                    r3 = rd32((u32)param_1 + 0x454u);
                    if ((s32)r20 >= (s32)rd32(r3 + 0xcu)) break;
                    r3 = rd32(r3 + 0x2cu);
                    r22 = rd32(r3 + r21);
                    a.r[0] = r22;
                    a.r[1] = r31;
                    a.r[2] = 0xffffffffu;
                    r3 = tc_call(0x801621e4u, &a);
                    if (r3 != 0u && (u32)rd16(r31 + 0xbcu) == 0x2e8u) {
                        a.r[0] = r31;
                        (void)tc_call(0x80161ac4u, &a);
                        wr16(r31 + 0xbcu, 0x2e8u);
                        wr8(r31 + 0xbeu, 0u);
                        wr8(r31 + 0xbfu, 0u);
                        wr32(r29, r22);
                        break;
                    }
                    r21 = r21 + 4u;
                    r20 = r20 + 1u;
                }
                if (rd32(r29) == 0u) {
                    r28 = 0u;
                }
            }
        }
        r27 = r27 + 1u;
        r29 = r29 + 4u;
        r30 = r30 + 4u;
    } while ((s32)r27 < 6);
    if ((u32)param_2 != 0u && r28 != 0u) {
        r5 = rd32((u32)param_1 + 0x454u);
        r28 = 0u;
        r4 = 0u;
        r0 = rd32(r5 + 0xcu);
        ctr = r0;
        if ((s32)r0 > 0) {
            do {
                if ((u32)rd16(rd32(rd32(r5 + 0x2cu) + r4) + 0xbcu) == 0x2e8u) {
                    r28 = 1u;
                    break;
                }
                r4 = r4 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r22 = 0x817fdfb8u;
    r20 = 0u;
    r23 = 0u;
    do {
        r4 = rd32(r22);
        if (r4 != 0u) {
            a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x458u) + 0x2cu) + r23);
            a.r[1] = r4;
            a.r[2] = 1u;
            (void)tc_call(0x801621e4u, &a);
        }
        r20 = r20 + 1u;
        r23 = r23 + 4u;
        r22 = r22 + 4u;
    } while ((s32)r20 < 6);
    return (s32)r28;
}
