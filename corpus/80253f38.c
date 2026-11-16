#include "tc_rt.h"

void fn_80253f38(u32 param_1)
{
    u32 r6 = 0, r7 = 0;
    r7 = rd32(0x80576c88u);
    r6 = (rd32(r7 + 0x220u) & 0xffffffefu) | ((param_1 << 4u) & 0x10u);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r6);
    wr32(r7 + 0x220u, r6);
    wr16(r7 + 2u, 0u);
    return;
}
