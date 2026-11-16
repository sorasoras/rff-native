#include "tc_rt.h"

void fn_80251754(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x80576c88u);
    wr32(r4 + 0x23cu, (rd32(r4 + 0x23cu) & 0xfffffe7fu) | ((param_1 << 7u) & 0x180u));
    return;
}
