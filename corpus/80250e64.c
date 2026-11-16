#include "tc_rt.h"

void fn_80250e64(u32 param_1)
{
    u32 r7 = 0;
    r7 = rd32(0x80576c88u);
    wr32(r7 + 0x254u, (rd32(r7 + 0x254u) & 0xfff7ffffu) | ((param_1 << 0x13u) & 0x80000u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, 0xfe080000u);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r7 + 0x254u));
    return;
}
