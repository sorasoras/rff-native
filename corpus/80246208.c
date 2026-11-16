#include "tc_rt.h"

void fn_80246208(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    c0lt = param_2 < 2;
    if ((u32)param_2 == 2u) {
        wr16((u32)param_1 + 0x30u, 0u);
        wr16((u32)param_1 + 0x32u, 0u);
    } else if (!c0lt) {
        c0lt = param_2 < 4;
        if ((u32)param_2 == 4u) {
            wr16((u32)param_1 + 0x30u, 0u);
            wr16((u32)param_1 + 0x32u, 2u);
        } else if (c0lt) {
            wr16((u32)param_1 + 0x30u, 0u);
            wr16((u32)param_1 + 0x32u, 1u);
        }
    } else {
        c0lt = param_2 < 0;
        if ((u32)param_2 == 0u) {
            wr16((u32)param_1 + 0x30u, 2u);
        } else if (!c0lt) {
            wr16((u32)param_1 + 0x30u, 1u);
        }
    }
    wr32((u32)param_1 + 0x1cu, rd32((u32)param_1 + 0x1cu) | 1u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
