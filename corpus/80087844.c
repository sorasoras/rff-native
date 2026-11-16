#include "tc_rt.h"

u32 fn_80087844(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0, r21 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r21 = param_3;
    if (rd32((u32)param_2 + 0x40u) == 0u && rd32((u32)param_2 + 0x44u) == 0u) {
        r3 = param_3;
    } else {
        r29 = (u32)param_2;
        r28 = (u32)param_1;
        r26 = 0u;
        do {
            if (rd32(r29 + 0x40u) != 0u) {
                a.r[0] = r21;
                r3 = tc_call(0x80037914u, &a);
                r25 = rd32(r3 + 8u);
                r21 = r3;
                r27 = r28;
                r24 = 0u;
                do {
                    if ((s32)r24 >= (s32)r25) {
                        wr32(r27 + 0x3e4u, 0u);
                        wr32(r27 + 0x3e8u, 0u);
                    } else {
                        a.r[0] = r21;
                        a.r[1] = r24;
                        r3 = tc_call(0x80037988u, &a);
                        a.r[0] = r3;
                        r3 = tc_call(0x8004ff24u, &a);
                        wr32(r27 + 0x3e4u, r3);
                        wr32(r27 + 0x3e8u, 1u);
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
                wr32(r28 + 0x3e4u, 0u);
                wr32(r28 + 0x3e8u, 0u);
                wr32(r28 + 0x3ecu, 0u);
                wr32(r28 + 0x3f0u, 0u);
                wr32(r28 + 0x3f4u, 0u);
                wr32(r28 + 0x3f8u, 0u);
                wr32(r28 + 0x3fcu, 0u);
                wr32(r28 + 0x400u, 0u);
                wr32(r28 + 0x404u, 0u);
                wr32(r28 + 0x408u, 0u);
                wr32(r28 + 0x40cu, 0u);
                wr32(r28 + 0x410u, 0u);
                wr32(r28 + 0x414u, 0u);
                wr32(r28 + 0x418u, 0u);
                wr32(r28 + 0x41cu, 0u);
                wr32(r28 + 0x420u, 0u);
                wr32(r28 + 0x424u, 0u);
                wr32(r28 + 0x428u, 0u);
                wr32(r28 + 0x42cu, 0u);
                wr32(r28 + 0x430u, 0u);
                wr32(r28 + 0x434u, 0u);
                wr32(r28 + 0x438u, 0u);
                wr32(r28 + 0x43cu, 0u);
                wr32(r28 + 0x440u, 0u);
                wr32(r28 + 0x444u, 0u);
                wr32(r28 + 0x448u, 0u);
                wr32(r28 + 0x44cu, 0u);
                wr32(r28 + 0x450u, 0u);
                wr32(r28 + 0x454u, 0u);
                wr32(r28 + 0x458u, 0u);
                wr32(r28 + 0x45cu, 0u);
                wr32(r28 + 0x460u, 0u);
                wr32(r28 + 0x464u, 0u);
                wr32(r28 + 0x468u, 0u);
                wr32(r28 + 0x46cu, 0u);
                wr32(r28 + 0x470u, 0u);
                wr32(r28 + 0x474u, 0u);
                wr32(r28 + 0x478u, 0u);
                wr32(r28 + 0x47cu, 0u);
                wr32(r28 + 0x480u, 0u);
            }
            r26 = r26 + 1u;
            r28 = r28 + 0xa0u;
            r29 = r29 + 4u;
        } while ((s32)r26 < 2);
        r3 = r21;
    }
    return r3;
}
