#include "tc_rt.h"

void fn_801374fc(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_2 + 0x3e8u);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x28u) + 0x10u), &a);
    r6 = rd32((u32)param_2 + 0x3e8u);
    if (r31 == r6) {
        r31 = rd32((u32)param_2 + 0x3ecu);
        do {
            if ((rd32(0x803541ccu) & 8u) == 0u) {
                if ((rd32(0x803541c8u) & 2u) != 0u) break;
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x8035416cu);
                        }
                    } else {
                        r4 = rd32(0x80354138u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r4 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r0 = r4 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) break;
            }
            r4 = rd32((u32)param_2 + 0x3ecu);
            wr32((u32)param_2 + 0x3f8u, r6);
            wr32((u32)param_2 + 0x3fcu, r4);
            a.r[0] = (u32)param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            (void)tc_call(0x80119fb0u, &a);
            wr32((u32)param_2 + 0x3e8u, 0u);
            if ((s32)r31 >= 5) {
                r31 = 0x1du;
            } else {
                r31 = (r31 * 6u) + 5u;
            }
        } while (0);
        a.r[0] = (u32)param_2;
        a.r[1] = r31;
        a.r[2] = rd32((u32)param_2 + 0x3e8u);
        (void)tc_call(0x80119fb0u, &a);
        wr32((u32)param_2 + 0x3ecu, r31);
    }
    return;
}
