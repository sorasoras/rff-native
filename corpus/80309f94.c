#include "tc_rt.h"

void fn_80309f94(f64 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_3;
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = (u32)param_2;
    r5 = 0u;
    while ((s32)r5 < (s32)rd32((u32)param_2 + 0x828u) && r31 != 0u) {
        if ((r31 & 1u) != 0u) {
            wrf32d(r4 + 0xba4u, param_1);
        }
        r31 = (r31 >> 1u) & 0x7fffffffu;
        r4 = r4 + 0x38u;
        r5 = r5 + 1u;
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
