#include "tc_rt.h"

u32 fn_80270908(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0xfffffffcu;
    r3 = tc_call(0x8022c2b0u, &a);
    if (param_2 != 0u) {
        if (param_1 >= 0 && param_1 < 8) {
            r0 = ((u32)param_1 << 4u) & 0xfffffff0u;
            r5 = r0 - 0x7fafcd60u;
            r4 = rd32(r0 - 0x7fafcd60u);
            if (r4 != 0u) {
                if (param_2 < (r4 + 0x10u) || param_2 > (r4 + rd32(r5 + 8u))) {
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    return r31;
                }
                r6 = param_2 - 0x10u;
                if ((rd32(param_2 - 0x10u) + 0x45420000u) == 2u) {
                    r6 = rd32(r6 + 8u);
                }
                if ((rd32(r6) + 0x45420000u) != 1u) {
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    return r31;
                }
                wr32(r6, 0xbabe0000u);
                r4 = rd32(r5 + 0xcu);
                r7 = r4;
                while (r7 != 0u) {
                    r0 = rd32(r7 + 0xcu);
                    if (r0 == 0u || r0 > r6) break;
                    r7 = r0;
                }
                if (r7 == 0u || r6 <= r7) {
                    wr32(r6 + 0xcu, r4);
                    wr32(r5 + 0xcu, r6);
                    wr32(r6 + 8u, 0u);
                    r4 = rd32(r6 + 0xcu);
                    if (r4 != 0u) {
                        wr32(r4 + 8u, r6);
                    }
                } else {
                    wr32(r6 + 8u, r7);
                    wr32(r6 + 0xcu, rd32(r7 + 0xcu));
                    wr32(r7 + 0xcu, r6);
                    r4 = rd32(r6 + 0xcu);
                    if (r4 != 0u) {
                        wr32(r4 + 8u, r6);
                    }
                }
                if (r6 != 0u) {
                    r5 = rd32(r6 + 0xcu);
                    if (r5 == (r6 + rd32(r6 + 4u) + 0x10u)) {
                        r4 = rd32(r5 + 0xcu);
                        wr32(r6 + 0xcu, r4);
                        if (r4 != 0u) {
                            wr32(r4 + 8u, r6);
                        }
                        wr32(r6 + 4u, rd32(r5 + 4u) + rd32(r6 + 4u) + 0x10u);
                    }
                }
                r5 = rd32(r6 + 8u);
                if (r5 != 0u) {
                    r6 = rd32(r5 + 0xcu);
                    if (r6 == (r5 + rd32(r5 + 4u) + 0x10u)) {
                        r4 = rd32(r6 + 0xcu);
                        wr32(r5 + 0xcu, r4);
                        if (r4 != 0u) {
                            wr32(r4 + 8u, r5);
                        }
                        wr32(r5 + 4u, rd32(r6 + 4u) + rd32(r5 + 4u) + 0x10u);
                    }
                }
                r31 = 0u;
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                return r31;
            }
        }
        r31 = 0xfffffffcu;
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return r31;
}
