#include "tc_rt.h"

void fn_8025333c(void)
{
    u32 r5 = 0;
    wr8(0xcc008000u, 0x61u);
    r5 = rd32(0x80576c88u);
    wr32(0xcc008000u, rd32(r5 + 0x174u));
    wr16(r5 + 2u, 0u);
    return;
}
