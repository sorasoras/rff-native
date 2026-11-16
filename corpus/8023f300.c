#include "tc_rt.h"

void fn_8023f300(u32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    wr32(0x804e6270u, param_1);
    r10 = rd32(0x804e6284u);
    r5 = (u32)rd8(r10);
    r6 = (u32)rd16(r10 + 2u);
    r7 = (u32)rd16(r10 + 4u);
    r8 = (u32)rd16(r10 + 6u);
    r9 = (u32)rd16(r10 + 8u);
    r10 = (u32)rd16(r10 + 0xau);
    a.r[0] = (u32)rd16(0x804e623au);
    a.r[1] = (u32)rd16(0x804e6236u);
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    a.s[0] = param_1;
    (void)tc_call(0x8023e5b4u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
