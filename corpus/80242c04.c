#include "tc_rt.h"

void fn_80242c04(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr16(0xcc005030u, (u16)(((u32)rd16(0xcc005030u) & 0xffffe000u) | ((param_1 >> 0x10u) & 0xffffu)));
    wr16(0xcc005032u, (u16)(((u32)rd16(0xcc005032u) & 0xffff001fu) | (param_1 & 0xffffu)));
    wr16(0xcc005036u, (u16)(((u32)rd16(0xcc005036u) & 0xffff8000u) | ((param_2 >> 5u) & 0xffffu)));
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
