#include "tc_rt.h"

void fn_801900ec(u32 param_1)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = param_1 + 0x24cu;
    r29 = 0u;
    r31 = param_1;
    do {
        a.r[0] = param_1;
        a.r[1] = r30;
        a.r[2] = 0u;
        a.f[0] = (f64)rdf32(r31 + 0x4b0u);
        (void)tc_call(rd32(rd32(param_1) + 0x2cu), &a);
        r29 = r29 + 1u;
        r30 = r30 + 0x94u;
        r31 = r31 + 0x18u;
    } while ((s32)r29 < 4);
    return;
}
