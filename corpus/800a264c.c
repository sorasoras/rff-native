#include "tc_rt.h"

void fn_800a264c(s32 param_1)
{
    u32 r0 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r29 = 0u;
    for (;;) {
        r0 = rd32((u32)param_1 + 0xcu);
        if ((s32)r29 >= (s32)r0) break;
        if ((s32)r29 < (s32)r0) {
            r31 = rd32((u32)param_1 + 4u) + r30;
        } else {
            r31 = rd32((u32)param_1 + 4u);
        }
        if (rd32(r31 + 0x48u) != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x8007020cu, &a);
            a.r[0] = r31;
            (void)tc_call(0x8006ff00u, &a);
        }
        r30 = r30 + 0xe4u;
        r29 = r29 + 1u;
    }
    if (rd32((u32)param_1 + 0x10u) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800a26f4u, &a);
    }
    return;
}
