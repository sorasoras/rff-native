#include "tc_rt.h"

void fn_802539bc(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x80576c88u);
    wr32(r4 + 0x254u, (rd32(r4 + 0x254u) & 0xffffc3ffu) | ((((u32)param_1 - 1u) << 0xau) & 0x3c00u));
    wr32(r4 + 0x5fcu, rd32(r4 + 0x5fcu) | 4u);
    return;
}
