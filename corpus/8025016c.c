#include "tc_rt.h"

void fn_8025016c(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x80576c88u);
    wr32(r4 + 0x254u, (rd32(r4 + 0x254u) & 0xfffffff0u) | (param_1 & 0xfu));
    wr32(r4 + 0x5fcu, rd32(r4 + 0x5fcu) | 0x2000004u);
    return;
}
