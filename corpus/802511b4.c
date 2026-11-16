#include "tc_rt.h"

void fn_802511b4(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x80576c88u);
    wr32(r4 + 0x23cu, (rd32(r4 + 0x23cu) & 0xffffcfffu) | ((param_1 << 0xcu) & 0x3000u));
    wr32(r4 + 0x24cu, rd32(r4 + 0x24cu) & 0xffffcfffu);
    return;
}
