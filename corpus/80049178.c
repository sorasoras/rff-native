#include "tc_rt.h"

u32 fn_80049178(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    r25 = 0u;
    r5 = rd32(param_1);
    r24 = r5 + 8u;
    r23 = r5 + ((rd32(0x803c1dacu) << 2u) & 0xfffffffcu) + 8u;
    r3 = tc_call(0x800492b0u, &a);
    r27 = r3;
    r28 = 0x803c1d40u;
    r26 = 0u;
    while (r26 < rd32(0x803c1dacu)) {
        if ((u32)rd8(r28 + 0x70u) == 0u) {
            a.r[0] = r23;
            a.r[1] = rd32(r27);
            a.r[2] = rd32(r27 + 4u);
            a.r[3] = rd32(r27 + 8u);
            a.r[4] = rd32(0x803c1ddcu);
            r3 = tc_call(0x802bb488u, &a);
            wr32(0x803c1decu, r3);
            if (r3 != 0u) {
                if (rd32(0x8057106cu) != 0u) {
                    a.r[0] = 0u;
                    (void)tc_call(0x80046720u, &a);
                    wr32(0x8057106cu, 0u);
                }
                a.r[0] = 0x803c3b48u;
                (void)tc_call(0x8022fe50u, &a);
            }
            wr32(r27 + 0xcu, rd32(param_1 + 4u));
            a.r[0] = r27;
            (void)tc_call(0x8004933cu, &a);
            r5 = rd32(0x803c1e18u);
            r6 = rd32(0x803c1e30u) + 1u;
            wr32(0x803c1e18u, r5 + 1u);
            r25 = (r6 - r5) & (u32)((u64)~((r5 >> 0x1fu) & 1u) + (u64)((r6 >> 0x1fu) & 1u) + (u64)(r6 <= r5));
        }
        r0 = rd32(r24);
        r24 = r24 + 4u;
        r28 = r28 + 1u;
        r26 = r26 + 1u;
        r23 = r23 + r0;
    }
    if (rd32(0x8057106cu) != 0u) {
        a.r[0] = 1u;
        (void)tc_call(0x80046720u, &a);
        wr32(0x8057106cu, 0u);
    }
    return r25;
}
