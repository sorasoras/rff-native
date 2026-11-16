#include "tc_rt.h"

void fn_8016c878(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    if ((rd32((u32)param_2 + 0xe88u) & 0x8000u) == 0u) {
        a.r[0] = (u32)param_2;
        a.r[1] = rd32((u32)param_2 + 0xed0u);
        (void)tc_call(0x800b31a0u, &a);
    }
    if ((rd32((u32)param_2 + 0xe88u) & 0x40u) != 0u) {
        a.r[0] = (u32)param_2;
        a.r[1] = 0x13u;
        (void)tc_call(0x800b31a0u, &a);
    }
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x800b2ea8u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_2;
        a.r[1] = 0x13u;
        (void)tc_call(0x800b31a0u, &a);
    }
    return;
}
