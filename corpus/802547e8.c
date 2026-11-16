#include "tc_rt.h"

void fn_802547e8(u32 param_1)
{
    u32 r4 = 0;
    wr8(0xcc008000u, 0x10u);
    r4 = rd32(0x80576c88u);
    wr32(0xcc008000u, 0x1005u);
    wr32(0xcc008000u, param_1);
    wr16(r4 + 2u, 1u);
    return;
}
