#include "tc_rt.h"

void fn_801d9bfc(u32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32(param_1 + 0x260u);
    if ((s32)r4 >= 0) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80576128u);
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        wr32(param_1 + 0x260u, 0xffffffffu);
    } else {
        a.r[0] = param_1;
        a.r[1] = rd32(param_1 + 0xd0cu);
        (void)tc_call(0x801da3a8u, &a);
    }
    return;
}
