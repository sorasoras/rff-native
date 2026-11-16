#include "tc_rt.h"

void fn_80251e90(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x80576c88u);
    wr32(r4 + 0x254u, (rd32(r4 + 0x254u) & 0xffffff8fu) | ((param_1 << 4u) & 0x70u));
    wr32(r4 + 0x5fcu, rd32(r4 + 0x5fcu) | 0x1000004u);
    return;
}
