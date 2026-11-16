#include "tc_rt.h"

void fn_800b05f0(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
    wr32(0x817fdff8u, r3);
    a.r[0] = 0x817fdff8u;
    a.r[1] = 5u;
    (void)tc_call(0x8014969cu, &a);
    return;
}
