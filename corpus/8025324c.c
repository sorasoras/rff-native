#include "tc_rt.h"

void fn_8025324c(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x80576c88u);
    wr32(r4 + 0x254u, (rd32(r4 + 0x254u) & 0xfff8ffffu) | ((param_1 << 0x10u) & 0x70000u));
    wr32(r4 + 0x5fcu, rd32(r4 + 0x5fcu) | 6u);
    return;
}
