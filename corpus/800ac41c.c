#include "tc_rt.h"

void fn_800ac41c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = tc_call(0x800ac3d4u, &a);
    r31 = r3;
    r3 = tc_call(0x800ac3f8u, &a);
    r0 = r3 + 1u;
    if ((s32)r0 > 30) {
        r31 = r31 + 1u;
        r0 = 1u;
        if ((s32)r31 >= 4) {
            r31 = 0u;
        }
    }
    if (param_2 != 0u) {
        wr32(param_2, r31);
    }
    if (param_3 != 0u) {
        wr32(param_3, r0);
    }
    return;
}
