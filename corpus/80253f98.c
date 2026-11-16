#include "tc_rt.h"

void fn_80253f98(u32 param_1)
{
    u32 r7 = 0;
    r7 = rd32(0x80576c88u);
    wr32(r7 + 0x22cu, (rd32(r7 + 0x22cu) & 0xffffffbfu) | ((param_1 << 6u) & 0x40u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r7 + 0x22cu));
    wr16(r7 + 2u, 0u);
    return;
}
