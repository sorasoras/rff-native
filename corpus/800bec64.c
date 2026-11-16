#include "tc_rt.h"

s32 fn_800bec64(s32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x80037914u, &a);
    r4 = ppc_mulhw(1431655766, (s32)rd32(r3 + 8u));
    r28 = r3;
    r29 = (u32)param_1 + (((u32)param_3 << 4u) & 0xfffffff0u);
    r26 = 0u;
    r25 = 0u;
    r27 = r4 + ((r4 >> 0x1fu) & 1u);
    while ((s32)r25 < (s32)r27) {
        r24 = 0u;
        do {
            r4 = r26;
            r26 = r26 + 1u;
            a.r[0] = r28;
            a.r[1] = r4;
            r3 = tc_call(0x80037988u, &a);
            r4 = rd32(r3);
            c0lt = (s32)r4 < 1213745218;
            if (r4 == 0x48584842u) {
                a.r[0] = r3;
                r3 = tc_call(0x8003b444u, &a);
                wr32(r29 + 0x50u, r3);
            } else if (!c0lt) {
                if (r4 == 0x48584d42u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x8003e048u, &a);
                    wr32(r29 + 0x58u, r3);
                }
            } else if (r4 == 0x48584742u) {
                a.r[0] = r3;
                r3 = tc_call(0x80038ce4u, &a);
                wr32(r29 + 0x54u, r3);
            }
            r24 = r24 + 1u;
        } while ((s32)r24 < 3);
        r29 = r29 + 0x10u;
        r25 = r25 + 1u;
    }
    return (s32)r27;
}
