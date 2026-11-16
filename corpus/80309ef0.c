#include "tc_rt.h"

void fn_80309ef0(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (param_2 >= 2) {
        if (param_2 < 4) {
            wr32((u32)param_3 + 4u, 0u);
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            return;
        }
    } else if (param_2 >= 0) {
        a.r[0] = param_1;
        (void)tc_call(0x8030bf80u, &a);
        wr32((u32)param_3 + 4u, 0u);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        return;
    }
    r3 = r3;
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
