#include "tc_rt.h"

void fn_802519fc(void)
{
    u32 r3 = 0;
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, 0x550003ffu);
    r3 = rd32(0x80576c88u);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, 0x560003ffu);
    wr16(r3 + 2u, 0u);
    return;
}
