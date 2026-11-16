#include "tc_rt.h"

void fn_8025330c(u32 param_1)
{
    u32 r7 = 0;
    r7 = rd32(0x80576c88u);
    wr32(r7 + 0x174u, (rd32(r7 + 0x174u) & 0xffffff00u) | (param_1 & 0xffu));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r7 + 0x174u));
    wr16(r7 + 2u, 0u);
    return;
}
