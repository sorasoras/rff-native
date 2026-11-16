#include "tc_rt.h"

void fn_801bf570(s32 param_1)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = (u32)param_1;
    a.r[0] = (u32)param_1 + 0x48u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    r31 = (u32)param_1 + 0xa4u;
    r30 = 0u;
    do {
        if (rd32(r29 + 0x9cu) != 0u) {
            a.r[0] = r31;
            a.r[1] = 1u;
            (void)tc_call(0x801f0fa0u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x50u;
        r29 = r29 + 4u;
    } while ((s32)r30 < 2);
    return;
}
