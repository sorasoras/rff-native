#include "tc_rt.h"

void fn_800b0d04(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
    wr32(0x817fdfe8u, r3);
    a.r[0] = 0x817fdfecu;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x80149ae0u, &a);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x80149ac8u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = r3;
    a.r[3] = 0x817fdfecu;
    (void)tc_call(0x800aeafcu, &a);
    return;
}
