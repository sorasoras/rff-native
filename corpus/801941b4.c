#include "tc_rt.h"

void fn_801941b4(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(rd32((u32)param_1 + 0x1cu) + 0x10u, 1u);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = 0x8033ad49u;
    a.r[2] = 1u;
    (void)tc_call(0x80193a00u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = 0x8033ad49u;
    a.r[2] = 1u;
    (void)tc_call(0x80193a4cu, &a);
    r5 = rd32((u32)param_1 + 0x1cu);
    r4 = rd32(r5 + 0x16cu);
    r5 = rd32(r5 + 0x170u);
    a.r[0] = rd32((u32)param_1 + 0x20u);
    a.r[1] = r4;
    a.r[2] = r5;
    (void)tc_call(0x801940fcu, &a);
    return;
}
