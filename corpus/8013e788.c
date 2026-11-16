#include "tc_rt.h"

void fn_8013e788(s32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 4u);
    if (r31 != 0u) {
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r31;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r31;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        wr32((u32)param_1 + 4u, 0u);
    }
    wr32((u32)param_1 + 8u, 0x40u);
    wr32((u32)param_1 + 0xcu, 0x40u);
    wr32((u32)param_1 + 0x10u, 0x40u);
    wr32((u32)param_1 + 0x14u, 0x40u);
    wr32((u32)param_1 + 0x18u, 0x40u);
    wr32((u32)param_1 + 0x1cu, 0x40u);
    wr32((u32)param_1 + 0x20u, 0x40u);
    wr32((u32)param_1 + 0x24u, 0x40u);
    wr32((u32)param_1 + 0x28u, 0x40u);
    wr32((u32)param_1 + 0x2cu, 0x40u);
    wr32((u32)param_1 + 0x30u, 0x40u);
    wr32((u32)param_1 + 0x34u, 0x40u);
    wr32((u32)param_1 + 0x38u, 0x40u);
    wr32((u32)param_1 + 0x3cu, 0x40u);
    wr32((u32)param_1 + 0x40u, 0x40u);
    wr32((u32)param_1 + 0x44u, 0x40u);
    wr32((u32)param_1 + 0x48u, 0x40u);
    wr32((u32)param_1 + 0x4cu, 0x40u);
    wr32((u32)param_1 + 0x50u, 0x40u);
    wr32((u32)param_1 + 0x54u, 0x40u);
    return;
}
