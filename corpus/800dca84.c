#include "tc_rt.h"

void fn_800dca84(u32 param_1, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    a.r[0] = 0xcu;
    a.r[1] = param_r4;
    r3 = tc_call(0x8014d88cu, &a);
    if (r3 != 0u) {
        r5 = rd32(param_1);
        wr32(r3 + 4u, 0x803569ecu);
        r0 = rd32(param_1 + 8u);
        wr32(r3, r5);
        wr32(r3 + 4u, 0x803569d0u);
        wr32(r3 + 8u, r0);
    }
    return;
}
