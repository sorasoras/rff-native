#include "tc_rt.h"

void fn_800fe6e4(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    do {
        r12 = rd32(param_1);
        r4 = param_1 + 0x20u;
        r12 = rd32(r12 + 0x30u);
    } while (r12 == 0x800fe6e4u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
