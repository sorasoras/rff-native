#include "tc_rt.h"

void fn_801a6e14(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x30u), &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_2;
        a.r[1] = 0x25u;
        (void)tc_call(0x800b31a0u, &a);
    } else {
        if ((rd32((u32)param_2 + 0xe88u) & 0x40u) != 0u) {
            a.r[0] = (u32)param_2;
            a.r[1] = 0x25u;
            (void)tc_call(0x800b31a0u, &a);
        }
    }
    return;
}
