#include "tc_rt.h"

void fn_8007ae84(u32 param_1)
{
    u32 r4 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(param_1 + 8u, 0u);
    r4 = rd32(param_1 + 0x14u);
    wr32(param_1 + 0xcu, 0u);
    r5 = rd32(param_1 + 0x18u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1, 0u);
    a.r[0] = rd32(param_1 + 0x10u);
    a.r[1] = r4;
    a.r[2] = r5;
    (void)tc_call(0x8007ad9cu, &a);
    wr32(param_1 + 0x10u, 0u);
    return;
}
