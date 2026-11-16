#include "tc_rt.h"

void fn_8022d838(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    (void)tc_call(0x8022c2b0u, &a);
    a.r[0] = 0x81280000u;
    (void)tc_call(0x80227208u, &a);
    a.r[0] = 0x812f0000u;
    (void)tc_call(0x802271f0u, &a);
    wr32(0x817fdfe8u, 0u);
    wr32(0x805714b0u, rd32(0x80003194u));
    a.r[0] = param_2;
    a.r[1] = param_1 | 0x80000000u;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x8022a118u, &a);
    return;
}
