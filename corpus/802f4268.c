#include "tc_rt.h"

void fn_802f4268(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r5 = rd32(param_1);
    if (r5 != 0u) {
        c0lt = param_2 < 2;
        if ((u32)param_2 == 2u) {
            wr16(r5 + 0x30u, 0u);
            wr16(rd32(param_1) + 0x32u, 0u);
        } else if (!c0lt) {
            c0lt = param_2 < 4;
            if ((u32)param_2 == 4u) {
                wr16(r5 + 0x30u, 0u);
                wr16(rd32(param_1) + 0x32u, 2u);
            } else if (c0lt) {
                wr16(r5 + 0x30u, 0u);
                wr16(rd32(param_1) + 0x32u, 1u);
            }
        } else {
            c0lt = param_2 < 0;
            if ((u32)param_2 == 0u) {
                wr16(r5 + 0x30u, 2u);
            } else if (!c0lt) {
                wr16(r5 + 0x30u, 1u);
            }
        }
        wr32(param_1 + 4u, rd32(param_1 + 4u) | 1u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
