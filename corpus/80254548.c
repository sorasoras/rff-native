#include "tc_rt.h"

void fn_80254548(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x80576c88u);
    wr32(r4 + 0x80u, (rd32(r4 + 0x80u) & 0xffffffc0u) | (param_1 & 0x3fu));
    wr32(r4 + 0x5fcu, rd32(r4 + 0x5fcu) | 0x4000000u);
    return;
}
