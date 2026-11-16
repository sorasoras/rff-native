#include "tc_rt.h"

void fn_8024f870(void)
{
    u32 r5 = 0;
    r5 = rd32(0x80576c88u);
    wr32(r5 + 0x14u, 0x200u);
    wr32(r5 + 0x18u, 0u);
    wr8(r5 + 0x524u, 0u);
    wr8(r5 + 0x525u, 0u);
    wr32(r5 + 0x5fcu, rd32(r5 + 0x5fcu) | 8u);
    return;
}
