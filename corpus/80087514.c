#include "tc_rt.h"

u32 fn_80087514(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0, r21 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r21 = param_3;
    if (rd32((u32)param_2 + 0x38u) == 0u && rd32((u32)param_2 + 0x3cu) == 0u) {
        r3 = param_3;
    } else {
        r29 = (u32)param_2;
        r28 = (u32)param_1;
        r26 = 0u;
        do {
            if (rd32(r29 + 0x38u) != 0u) {
                a.r[0] = r21;
                r3 = tc_call(0x80037914u, &a);
                r25 = rd32(r3 + 8u);
                r21 = r3;
                r27 = r28;
                r24 = 0u;
                do {
                    if ((s32)r24 >= (s32)r25) {
                        wr32(r27 + 0x164u, 0u);
                        wr32(r27 + 0x168u, 0u);
                    } else {
                        a.r[0] = r21;
                        a.r[1] = r24;
                        r3 = tc_call(0x80037988u, &a);
                        a.r[0] = r3;
                        r3 = tc_call(0x80044d1cu, &a);
                        wr32(r27 + 0x164u, r3);
                        wr32(r27 + 0x168u, 1u);
                    }
                    r24 = r24 + 1u;
                    r27 = r27 + 8u;
                } while ((s32)r24 < 20);
                r4 = rd32(param_5);
                wr32(param_5, r4 + 1u);
                a.r[0] = param_4;
                a.r[1] = r4;
                r3 = tc_call(0x80037988u, &a);
                r21 = r3;
            } else {
                wr32(r28 + 0x164u, 0u);
                wr32(r28 + 0x168u, 0u);
                wr32(r28 + 0x16cu, 0u);
                wr32(r28 + 0x170u, 0u);
                wr32(r28 + 0x174u, 0u);
                wr32(r28 + 0x178u, 0u);
                wr32(r28 + 0x17cu, 0u);
                wr32(r28 + 0x180u, 0u);
                wr32(r28 + 0x184u, 0u);
                wr32(r28 + 0x188u, 0u);
                wr32(r28 + 0x18cu, 0u);
                wr32(r28 + 0x190u, 0u);
                wr32(r28 + 0x194u, 0u);
                wr32(r28 + 0x198u, 0u);
                wr32(r28 + 0x19cu, 0u);
                wr32(r28 + 0x1a0u, 0u);
                wr32(r28 + 0x1a4u, 0u);
                wr32(r28 + 0x1a8u, 0u);
                wr32(r28 + 0x1acu, 0u);
                wr32(r28 + 0x1b0u, 0u);
                wr32(r28 + 0x1b4u, 0u);
                wr32(r28 + 0x1b8u, 0u);
                wr32(r28 + 0x1bcu, 0u);
                wr32(r28 + 0x1c0u, 0u);
                wr32(r28 + 0x1c4u, 0u);
                wr32(r28 + 0x1c8u, 0u);
                wr32(r28 + 0x1ccu, 0u);
                wr32(r28 + 0x1d0u, 0u);
                wr32(r28 + 0x1d4u, 0u);
                wr32(r28 + 0x1d8u, 0u);
                wr32(r28 + 0x1dcu, 0u);
                wr32(r28 + 0x1e0u, 0u);
                wr32(r28 + 0x1e4u, 0u);
                wr32(r28 + 0x1e8u, 0u);
                wr32(r28 + 0x1ecu, 0u);
                wr32(r28 + 0x1f0u, 0u);
                wr32(r28 + 0x1f4u, 0u);
                wr32(r28 + 0x1f8u, 0u);
                wr32(r28 + 0x1fcu, 0u);
                wr32(r28 + 0x200u, 0u);
            }
            r26 = r26 + 1u;
            r28 = r28 + 0xa0u;
            r29 = r29 + 4u;
        } while ((s32)r26 < 2);
        r3 = r21;
    }
    return r3;
}
