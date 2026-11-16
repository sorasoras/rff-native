#include "tc_rt.h"

void fn_80254100(u32 param_1, u32 param_2)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = rd32(0x80576c88u);
    wr32(r5 + 0x7cu, (rd32(r5 + 0x7cu) & 0xffbfffffu) | ((param_2 << 0x16u) & 0x400000u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r5 + 0x7cu));
    (void)tc_call(0x8025333cu, &a);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, param_1 | 0x68000000u);
    (void)tc_call(0x8025333cu, &a);
    return;
}
