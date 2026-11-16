#include "tc_rt.h"

void fn_801c56a0(s32 param_1)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    r30 = (u32)param_1 + 8u;
    r29 = 0u;
    do {
        if (rd32(r31 + 0x50u) != 0u) {
            a.r[0] = r30;
            (void)tc_call(0x80070068u, &a);
        }
        r29 = r29 + 1u;
        r30 = r30 + 0xe4u;
        r31 = r31 + 0xe4u;
    } while ((s32)r29 < 2);
    return;
}
