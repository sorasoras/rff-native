#include "tc_rt.h"

void fn_8009abd8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(param_1 + 0x14u, param_2);
    wr32(param_1 + 0x18u, param_3);
    wr32(param_1, 0x8009a8d0u);
    wr32(param_1 + 4u, 0x8009aa58u);
    wr32(param_1 + 8u, 0x8009ab48u);
    wr32(param_1 + 0xcu, 0x8009ab7cu);
    r3 = tc_call(0x800a3a04u, &a);
    wr32(param_1 + 0x10u, r3);
    return;
}
