#include "tc_rt.h"

void fn_80242c80(void)
{
    wr16(0xcc005036u, (u16)((u32)rd16(0xcc005036u) | 0x8000u));
    return;
}
