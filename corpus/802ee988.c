#include "tc_rt.h"

void fn_802ee988(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(param_2 + 0x10u);
    r30 = param_2 + 0x10u;
    r29 = 0u;
    while (r31 != r30) {
        a.r[0] = param_1;
        a.r[1] = rd32(r31 + 8u);
        a.r[2] = param_3;
        r3 = tc_call(0x802ee8b0u, &a);
        f1 = tc_lastf();
        r29 = r29 + r3;
        r31 = rd32(r31);
    }
    return;
}
