#include "tc_rt.h"

s32 fn_802c19e4(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    c0lt = param_1 < 23;
    do {
        if ((u32)param_1 == 0x17u) {
            r0 = 3u;
            r5 = rd32(0x80547478u) + 0xb8b0u;
        } else {
            if (!c0lt) {
                if ((u32)param_1 == 0x19u) {
                    r0 = 3u;
                    r5 = rd32(0x80547478u) + 0xb8b0u;
                    break;
                }
            } else if ((u32)param_1 == 4u) {
                r0 = 3u;
                r5 = rd32(0x80547478u) + 0xb8b0u;
                break;
            }
            r0 = 4u;
            r5 = rd32(0x80547478u);
        }
    } while (0);
    r4 = r5;
    r31 = 0u;
    r6 = 0u;
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            if ((u32)rd8(r4 + 0x2e1cu) == 0u) {
                r31 = r5 + (r6 * 0x2e2cu);
                wr8(r31 + 0x2e1cu, 1u);
                break;
            }
            r4 = r4 + 0x2e2cu;
            r6 = r6 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    if (r31 == 0u) {
        c0lt = param_1 < 23;
        do {
            if ((u32)param_1 == 0x17u) {
                r4 = rd32(0x80547478u);
                r3 = r4 + 0x1433cu;
            } else {
                if (!c0lt) {
                    if ((u32)param_1 == 0x19u) {
                        r4 = rd32(0x80547478u);
                        r3 = r4 + 0x1433cu;
                        break;
                    }
                } else if ((u32)param_1 == 4u) {
                    r4 = rd32(0x80547478u);
                    r3 = r4 + 0x1433cu;
                    break;
                }
                r4 = rd32(0x80547478u);
                r3 = r4 + 0x14334u;
            }
        } while (0);
        r31 = rd32(r3);
        r0 = rd32(r31 + 0x2e28u);
        c0lt = (s32)r0 < 23;
        do {
            if (r0 != 0x17u) {
                if (!c0lt) {
                    if (r0 == 0x19u) break;
                } else if (r0 == 4u) {
                    break;
                }
                r30 = r4 + 0x14334u;
                fl_ = 1u;
                break;
            }
        } while (0);
        if (fl_ == 1u) {
            fl_ = 0u;
        } else {
            r30 = r4 + 0x1433cu;
        }
        a.r[0] = r31;
        a.r[1] = 0u;
        (void)tc_call(0x802dde6cu, &a);
        a.r[0] = r31;
        (void)tc_call(0x802dddd4u, &a);
        wr8(r31 + 0x2e1cu, 0u);
        r3 = rd32(r31 + 0x2e24u);
        if (r3 != 0u) {
            wr32(r3 + 0x2e20u, rd32(r31 + 0x2e20u));
        } else {
            wr32(r30, rd32(r31 + 0x2e20u));
        }
        r3 = rd32(r31 + 0x2e20u);
        if (r3 != 0u) {
            wr32(r3 + 0x2e24u, rd32(r31 + 0x2e24u));
        } else {
            wr32(r30 + 4u, rd32(r31 + 0x2e24u));
        }
        wr32(r31 + 0x2e20u, 0u);
        wr32(r31 + 0x2e24u, 0u);
        wr8(r31 + 0x2e1cu, 1u);
    }
    return (s32)r31;
}
