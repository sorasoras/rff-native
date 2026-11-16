#include "tc_rt.h"

void fn_801751f4(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((rd32(param_1 + 0x78u) != 0u && rd32(param_1 + 0x150u) == 0xffffffffu) && rd32(param_1 + 0x14cu) != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = rd32(param_1 + 0x14cu);
        a.r[2] = r3;
        r3 = tc_call(0x8010a85cu, &a);
        wr32(param_1 + 0x150u, r3);
    }
    return;
}
