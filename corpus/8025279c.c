#include "tc_rt.h"

void fn_8025279c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = rd32(0x80576c88u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = r5;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(r5 + 0x51cu), &a);
    r31 = r3;
    (void)tc_call(0x8025333cu, &a);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(param_1 + 4u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r31));
    (void)tc_call(0x8025333cu, &a);
    r4 = (rd32(param_1) & 0xfffffc00u) | (rd32(r31) & 0x3ffu);
    r3 = rd32(param_1 + 4u);
    wr32(r31 + 4u, r4);
    r0 = rd32(param_1 + 8u);
    wr32(r31 + 8u, r3);
    wr32(r31 + 0xcu, r0);
    wr32(param_1, r4);
    return;
}
