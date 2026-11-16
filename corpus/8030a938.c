#include "tc_rt.h"

void fn_8030a938(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x802f6f30u, &a);
    r30 = rd32(param_1 + 0xe38u);
    r31 = r30 + 0x10u;
    a.r[0] = r31;
    (void)tc_call(0x8022d56cu, &a);
    if (rd32(r30 + 4u) == 0u) {
        a.r[0] = r31;
        (void)tc_call(0x8022d648u, &a);
    } else {
        a.r[0] = r30 + 4u;
        a.r[1] = param_1 + 0xe0u;
        f1 = tc_callf(0x802debd0u, &a);
        a.r[0] = param_1;
        a.r[1] = 0xffffffffu;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
        a.r[0] = r30;
        a.r[1] = param_1;
        (void)tc_call(0x802fad08u, &a);
        a.r[0] = r31;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
