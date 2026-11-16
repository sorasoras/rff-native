#include "tc_rt.h"

void fn_8020145c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x38u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fe9bcu, &a);
    }
    if (rd32((u32)param_1 + 0x34u) == 0u) {
        r3 = rd32((u32)param_1 + 0x30u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x802030a0u, &a);
        }
        r3 = rd32((u32)param_1 + 0x2cu);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = r3;
        (void)tc_call(0x80202494u, &a);
    } else {
        r3 = rd32((u32)param_1 + 0x2cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80202494u, &a);
        }
        r3 = rd32((u32)param_1 + 0x30u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x802030a0u, &a);
        }
    }
    return;
}
