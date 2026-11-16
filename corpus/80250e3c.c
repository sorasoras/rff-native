#include "tc_rt.h"

void fn_80250e3c(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x80576c88u);
    wr32(r4 + 0x254u, (rd32(r4 + 0x254u) & 0xffff3fffu) | (((((param_1 >> 1u) & 1u) | ((param_1 << 1u) & 2u)) << 0xeu) & 0xc000u));
    wr32(r4 + 0x5fcu, rd32(r4 + 0x5fcu) | 4u);
    return;
}
