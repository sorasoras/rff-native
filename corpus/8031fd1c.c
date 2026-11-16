#include "tc_rt.h"

void fn_8031fd1c(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r28 = 0u;
    r27 = param_r4 + rd32(param_r4 + 0xcu) + rd32(param_r4 + 0x10u) + rd32(param_r4 + 0x14u) + 0x20u;
    if (rd32(param_r4 + 0x18u) != 0u) {
        r29 = r27;
        r25 = 0u;
        r26 = r27 + (((u32)rd16(r27) << 2u) & 0xfffffffcu) + 4u;
        while ((s32)r25 < (s32)rd16(r27)) {
            r24 = (u32)rd16(r26);
            r26 = r26 + 2u;
            a.r[0] = param_r3;
            a.r[1] = 0u;
            r3 = tc_call(0x802dea10u, &a);
            r30 = r3;
            for (;;) {
                if (r3 == 0u) {
                    r3 = 0u;
                    break;
                }
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = r26;
                r3 = tc_call(0x8031f7c0u, &a);
                if (r3 != 0u) break;
                a.r[0] = param_r3;
                a.r[1] = r30;
                r3 = tc_call(0x802dea10u, &a);
                r30 = r3;
            }
            wr32(r29 + 4u, r3);
            if (r3 == 0u) {
                r28 = r28 + 1u;
            }
            r26 = r26 + r24;
            r29 = r29 + 4u;
            r25 = r25 + 1u;
        }
    }
    return;
}
