#include "tc_rt.h"

void fn_801dbde4(u32 param_1)
{
    TcArgs a = {0};
    wr32(param_1 + 0xa0u, 0u);
    wr32(param_1 + 0x2cu, 0u);
    wr32(param_1 + 0x1a4u, 0u);
    wr32(param_1 + 0x130u, 0u);
    wr32(param_1 + 0x2a8u, 0u);
    wr32(param_1 + 0x234u, 0u);
    wr32(param_1 + 0x3acu, 0u);
    wr32(param_1 + 0x338u, 0u);
    a.r[0] = rd32(param_1);
    (void)tc_call(0x8004bc54u, &a);
    wr32(param_1, 0xffffffffu);
    return;
}
