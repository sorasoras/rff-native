#include "tc_rt.h"

void fn_801dd9ec(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x1cu);
    c0eq = r0 == 0u;
    if (!c0eq && !c0eq) {
        a.r[0] = r0;
        a.r[1] = 1u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r0 + 0x24u) + 8u), &a);
    }
    a.r[0] = param_2;
    r3 = tc_call(0x801ddb88u, &a);
    wr32((u32)param_1 + 0x1cu, r3);
    return;
}
