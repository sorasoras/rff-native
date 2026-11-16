#include "tc_rt.h"

void fn_802c220c(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    if (rd32(0x80547478u) != 0u) {
        r27 = 0u;
        r28 = 0u;
        do {
            r3 = rd32(0x80547478u);
            r26 = r3 + r28;
            if ((u32)rd8(r26 + 0x2e1cu) != 0u) {
                r0 = rd32(r26 + 0x2e28u);
                c0lt = (s32)r0 < 23;
                if (r0 == 0x17u) {
                    r29 = r3 + 0x1433cu;
                } else if (!c0lt) {
                    if (r0 == 0x19u) {
                        r29 = r3 + 0x1433cu;
                    } else {
                        r29 = r3 + 0x14334u;
                    }
                } else if (r0 == 4u) {
                    r29 = r3 + 0x1433cu;
                } else {
                    r29 = r3 + 0x14334u;
                }
                a.r[0] = r26;
                a.r[1] = 0u;
                (void)tc_call(0x802dde6cu, &a);
                a.r[0] = r26;
                (void)tc_call(0x802dddd4u, &a);
                wr8(r26 + 0x2e1cu, 0u);
                r3 = rd32(r26 + 0x2e24u);
                if (r3 != 0u) {
                    wr32(r3 + 0x2e20u, rd32(r26 + 0x2e20u));
                } else {
                    wr32(r29, rd32(r26 + 0x2e20u));
                }
                r3 = rd32(r26 + 0x2e20u);
                if (r3 != 0u) {
                    wr32(r3 + 0x2e24u, rd32(r26 + 0x2e24u));
                } else {
                    wr32(r29 + 4u, rd32(r26 + 0x2e24u));
                }
                wr32(r26 + 0x2e20u, 0u);
                wr32(r26 + 0x2e24u, 0u);
            }
            r27 = r27 + 1u;
            r28 = r28 + 0x2e2cu;
        } while ((s32)r27 < 4);
        r26 = 0u;
        r28 = 0u;
        do {
            r4 = rd32(0x80547478u);
            r3 = r4 + 0x10000u + r28;
            r27 = r3 - 0x4750u;
            if ((u32)rd8(r3 - 0x1934u) != 0u) {
                r0 = rd32(r27 + 0x2e28u);
                c0lt = (s32)r0 < 23;
                if (r0 == 0x17u) {
                    r29 = r4 + 0x1433cu;
                } else if (!c0lt) {
                    if (r0 == 0x19u) {
                        r29 = r4 + 0x1433cu;
                    } else {
                        r29 = r4 + 0x14334u;
                    }
                } else if (r0 == 4u) {
                    r29 = r4 + 0x1433cu;
                } else {
                    r29 = r4 + 0x14334u;
                }
                a.r[0] = r27;
                a.r[1] = 0u;
                (void)tc_call(0x802dde6cu, &a);
                a.r[0] = r27;
                (void)tc_call(0x802dddd4u, &a);
                wr8(r27 + 0x2e1cu, 0u);
                r3 = rd32(r27 + 0x2e24u);
                if (r3 != 0u) {
                    wr32(r3 + 0x2e20u, rd32(r27 + 0x2e20u));
                } else {
                    wr32(r29, rd32(r27 + 0x2e20u));
                }
                r3 = rd32(r27 + 0x2e20u);
                if (r3 != 0u) {
                    wr32(r3 + 0x2e24u, rd32(r27 + 0x2e24u));
                } else {
                    wr32(r29 + 4u, rd32(r27 + 0x2e24u));
                }
                wr32(r27 + 0x2e20u, 0u);
                wr32(r27 + 0x2e24u, 0u);
            }
            r26 = r26 + 1u;
            r28 = r28 + 0x2e2cu;
        } while ((s32)r26 < 3);
    }
    return;
}
