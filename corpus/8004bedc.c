#include "tc_rt.h"

void fn_8004bedc(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    TcArgs a = {0};
    r10 = rd32(param_2 + 4u);
    r9 = rd32(param_2 + 8u);
    r8 = rd32(param_2 + 0xcu);
    r7 = rd32(param_2 + 0x10u);
    wr32(param_1, rd32(param_2));
    wr32(param_1 + 4u, r10);
    wr32(param_1 + 8u, r9);
    wr32(param_1 + 0xcu, r8);
    wr32(param_1 + 0x10u, r7);
    wr32(param_1 + 0x14u, param_3);
    wr32(param_1 + 0x40u, param_3);
    wr32(param_1 + 0x18u, param_4);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0x44u, param_4);
    a.r[0] = param_1 + 0x20u;
    a.r[1] = param_3;
    a.r[2] = param_4;
    (void)tc_call(0x8004b5e8u, &a);
    return;
}
