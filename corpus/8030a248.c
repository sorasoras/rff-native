#include "tc_rt.h"

void fn_8030a248(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    a.r[0] = rd32(param_1 + 0x10u) + 0x190u;
    a.r[1] = param_1 + 0x2cu;
    f1 = tc_callf(0x802debd0u, &a);
    r30 = rd32(param_1 + 0x10u) + 0x19cu;
    if (param_1 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0xffffffffu;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 8u), &a);
        a.r[0] = r30;
        a.r[1] = param_1;
        (void)tc_call(0x802fad08u, &a);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
