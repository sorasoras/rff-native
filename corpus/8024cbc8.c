#include "tc_rt.h"

void fn_8024cbc8(u32 param_1)
{
    wr16(0xcc005000u, (u16)((param_1 >> 0x10u) & 0xffffu));
    wr16(0xcc005002u, (u16)param_1);
    return;
}
