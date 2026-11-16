#include "tc_rt.h"

u32 fn_80087404(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0, r20 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r20 = param_3;
    if (rd32((u32)param_2 + 0x48u) != 0u || rd32((u32)param_2 + 0x4cu) != 0u) {
        r29 = (u32)param_2;
        r28 = (u32)param_1;
        r26 = 0u;
        do {
            r25 = 0u;
            r24 = 0u;
            if (rd32(r29 + 0x48u) != 0u) {
                a.r[0] = r20;
                r3 = tc_call(0x80037914u, &a);
                r4 = rd32(param_5);
                r25 = r3;
                r24 = rd32(r3 + 8u);
                wr32(param_5, r4 + 1u);
                a.r[0] = param_4;
                a.r[1] = r4;
                r3 = tc_call(0x80037988u, &a);
                r20 = r3;
            }
            r27 = r28;
            r23 = 0u;
            do {
                if (r25 == 0u) {
                    wr32(r27 + 0x2a4u, 0u);
                    wr32(r27 + 0x2a8u, 0u);
                } else if ((s32)r23 >= (s32)r24) {
                    wr32(r27 + 0x2a4u, 0u);
                    wr32(r27 + 0x2a8u, 0u);
                } else {
                    a.r[0] = r25;
                    a.r[1] = r23;
                    r3 = tc_call(0x80037988u, &a);
                    a.r[0] = r3;
                    r3 = tc_call(0x8004ffecu, &a);
                    wr32(r27 + 0x2a4u, r3);
                    wr32(r27 + 0x2a8u, 1u);
                }
                r23 = r23 + 1u;
                r27 = r27 + 8u;
            } while ((s32)r23 < 20);
            r26 = r26 + 1u;
            r28 = r28 + 0xa0u;
            r29 = r29 + 4u;
        } while ((s32)r26 < 2);
        r3 = r20;
    } else {
        r3 = param_3;
    }
    return r3;
}
