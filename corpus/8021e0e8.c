#include "tc_rt.h"

u32 fn_8021e0e8(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r31 + 0x14d8u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x1588u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x1530u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    a.r[0] = r31 + 0x14d8u;
    r3 = tc_call(0x801f1144u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
