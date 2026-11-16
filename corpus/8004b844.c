#include "tc_rt.h"

void fn_8004b844(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8003c9d0u, &a);
    r6 = r3;
    r3 = (u32)rd8(r3 + 0x19u);
    r4 = r6 + 0x1au;
    r6 = r6 + 0x32u;
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = param_3 & 0xffu;
    a.r[3] = r6;
    (void)tc_call(0x80251570u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2 & 0xffu;
    (void)tc_call(0x802518a4u, &a);
    return;
}
