#include "tc_rt.h"

void fn_80037258(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    if (param_1 >= 0) {
        r30 = rd32(0x803a4bacu);
        if ((((u32)rd16(r30 + 0x22u) >> 0xeu) & 1u) == 0u) {
            r29 = rd32(r30 + 0xcu);
            if ((((u32)rd8(0x803acbccu) >> 5u) & 1u) != 0u) {
                a.r[0] = rd32(r29 + 0x10u);
                a.r[1] = rd32(r30 + 0x14u);
                (void)tc_call(0x80227768u, &a);
            }
            if (rd32(r29 + 4u) != 0u) {
                a.r[0] = rd32(r29 + 0x30u);
                (void)tc_call(0x80234b88u, &a);
            }
            a.r[0] = r29;
            (void)tc_call(0x80036a0cu, &a);
            wr32(0x803a4bb4u, rd32(0x803a4bb4u) + rd32(r30 + 0x18u));
            r3 = (u32)(s16)rd16(r30 + 0x20u) - 1u;
            wr16(r30 + 0x20u, (u16)r3);
            if ((s32)(s16)r3 > 0) {
                a.r[0] = r29;
                a.r[1] = rd32(r30 + 0x10u);
                (void)tc_call(0x80037238u, &a);
                wr32(r30 + 0xcu, rd32(r30 + 0xcu) + 0x34u);
                a.r[0] = r30;
                (void)tc_call(0x800373f0u, &a);
            } else {
                wr32(r30 + 0xcu, 0u);
                a.r[0] = r30;
                (void)tc_call(0x80036900u, &a);
                a.r[0] = r29;
                a.r[1] = rd32(r30 + 0x10u);
                (void)tc_call(0x80037238u, &a);
            }
        }
    }
    return;
}
