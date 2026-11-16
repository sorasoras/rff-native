#include "tc_rt.h"

void fn_801628b4(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
    r3 = rd32(r31 + 4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80163c10u, &a);
        a.r[0] = rd32(r31 + 4u);
        (void)tc_call(0x80163c10u, &a);
        r30 = rd32(r31 + 4u);
        if (r30 != 0u) {
            r3 = tc_call(0x800545e4u, &a);
            r6 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    (void)tc_call(0x80094ec0u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
        }
        wr32(r31 + 4u, 0u);
    }
    return;
}
