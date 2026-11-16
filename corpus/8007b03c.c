#include "tc_rt.h"

void fn_8007b03c(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32(param_1 + 4u);
    a.r[2] = 0u;
    r3 = tc_call(0x8007aedcu, &a);
    wr32(r3 + 8u, param_2);
    r4 = rd32(param_1 + 4u);
    if (r4 != 0u) {
        wr32(r4, r3);
    } else {
        wr32(param_1, r3);
    }
    wr32(param_1 + 4u, r3);
    return;
}
