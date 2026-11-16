#include "tc_rt.h"

u32 fn_800876ac(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0, r21 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r21 = param_3;
    if (rd32((u32)param_2 + 0x30u) == 0u && rd32((u32)param_2 + 0x34u) == 0u) {
        r3 = param_3;
    } else {
        r29 = (u32)param_2;
        r28 = (u32)param_1;
        r26 = 0u;
        do {
            if (rd32(r29 + 0x30u) != 0u) {
                a.r[0] = r21;
                r3 = tc_call(0x80037914u, &a);
                r25 = rd32(r3 + 8u);
                r21 = r3;
                r27 = r28;
                r24 = 0u;
                do {
                    if ((s32)r24 >= (s32)r25) {
                        wr32(r27 + 0x24u, 0u);
                        wr32(r27 + 0x28u, 0u);
                    } else {
                        a.r[0] = r21;
                        a.r[1] = r24;
                        r3 = tc_call(0x80037988u, &a);
                        a.r[0] = r3;
                        r3 = tc_call(0x8003bc04u, &a);
                        wr32(r27 + 0x24u, r3);
                        wr32(r27 + 0x28u, 1u);
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
                wr32(r28 + 0x24u, 0u);
                wr32(r28 + 0x28u, 0u);
                wr32(r28 + 0x2cu, 0u);
                wr32(r28 + 0x30u, 0u);
                wr32(r28 + 0x34u, 0u);
                wr32(r28 + 0x38u, 0u);
                wr32(r28 + 0x3cu, 0u);
                wr32(r28 + 0x40u, 0u);
                wr32(r28 + 0x44u, 0u);
                wr32(r28 + 0x48u, 0u);
                wr32(r28 + 0x4cu, 0u);
                wr32(r28 + 0x50u, 0u);
                wr32(r28 + 0x54u, 0u);
                wr32(r28 + 0x58u, 0u);
                wr32(r28 + 0x5cu, 0u);
                wr32(r28 + 0x60u, 0u);
                wr32(r28 + 0x64u, 0u);
                wr32(r28 + 0x68u, 0u);
                wr32(r28 + 0x6cu, 0u);
                wr32(r28 + 0x70u, 0u);
                wr32(r28 + 0x74u, 0u);
                wr32(r28 + 0x78u, 0u);
                wr32(r28 + 0x7cu, 0u);
                wr32(r28 + 0x80u, 0u);
                wr32(r28 + 0x84u, 0u);
                wr32(r28 + 0x88u, 0u);
                wr32(r28 + 0x8cu, 0u);
                wr32(r28 + 0x90u, 0u);
                wr32(r28 + 0x94u, 0u);
                wr32(r28 + 0x98u, 0u);
                wr32(r28 + 0x9cu, 0u);
                wr32(r28 + 0xa0u, 0u);
                wr32(r28 + 0xa4u, 0u);
                wr32(r28 + 0xa8u, 0u);
                wr32(r28 + 0xacu, 0u);
                wr32(r28 + 0xb0u, 0u);
                wr32(r28 + 0xb4u, 0u);
                wr32(r28 + 0xb8u, 0u);
                wr32(r28 + 0xbcu, 0u);
                wr32(r28 + 0xc0u, 0u);
            }
            r26 = r26 + 1u;
            r28 = r28 + 0xa0u;
            r29 = r29 + 4u;
        } while ((s32)r26 < 2);
        r3 = r21;
    }
    return r3;
}
