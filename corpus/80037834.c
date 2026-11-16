#include "tc_rt.h"

void fn_80037834(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr16((u32)param_1 + 0x22u, (u16)((u32)rd16((u32)param_1 + 0x22u) | 0x4000u));
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800368ccu, &a);
        if (r3 != 0u) {
            if ((((u32)rd16((u32)param_1 + 0x22u) >> 0xfu) & 1u) == 0u) {
                r31 = rd32((u32)param_1 + 0xcu);
                if (r31 != 0u) {
                    a.r[0] = r31;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    r3 = tc_call(0x80036aa4u, &a);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        (void)tc_call(0x8023961cu, &a);
                    }
                    if (rd32(r31 + 4u) != 0u) {
                        r3 = rd32(r31 + 0x30u);
                        if (r3 != 0u) {
                            a.r[0] = r3;
                            (void)tc_call(0x80234b88u, &a);
                        }
                    }
                    a.r[0] = r31;
                    (void)tc_call(0x80036a0cu, &a);
                    wr32(0x803a4bb4u, rd32(0x803a4bb4u) + rd32((u32)param_1 + 0x18u));
                }
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80036900u, &a);
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80036968u, &a);
    }
    return;
}
