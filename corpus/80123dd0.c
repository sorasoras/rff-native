#include "tc_rt.h"

void fn_80123dd0(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x10u);
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    r3 = rd32((u32)param_1 + 0x6cu);
    wr32((u32)param_1 + 0x6cu, r3 + 1u);
    if ((s32)r3 > 900) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801241a4u, &a);
    }
    a.r[0] = (u32)param_1 + 0x1cu;
    a.r[1] = 1u;
    (void)tc_call(0x800f857cu, &a);
    r31 = (u32)param_1 + 0x80u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = 1u;
        (void)tc_call(0x801f0fa0u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x58u;
    } while ((s32)r30 < 10);
    return;
}
