#include "tc_rt.h"

u32 fn_801cbc6c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = rd32(rd32((u32)param_1 + 0x20u) + 0x2b8u);
    r3 = tc_call(0x801cbb88u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = rd32(rd32((u32)param_1 + 0x20u) + 0x2b8u);
        (void)tc_call(0x801cc164u, &a);
        r5 = rd32((u32)param_1 + 0x20u);
        r4 = rd32(r5 + 0x2b8u);
        r5 = rd32(r5);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = r4;
        a.r[2] = r5;
        (void)tc_call(0x801cbd84u, &a);
        a.r[0] = rd32((u32)param_1 + 0x20u) + 4u;
        a.r[1] = 1u;
        (void)tc_call(0x8011e5a0u, &a);
    }
    return 1u;
}
