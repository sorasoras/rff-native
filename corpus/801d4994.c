#include "tc_rt.h"

void fn_801d4994(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    r7 = rd32(param_3);
    wr32(0x817fdfe8u, rd32(r3));
    r6 = rd32(param_3 + 4u);
    wr32(0x817fdfecu, r0);
    r0 = rd32(param_3 + 8u);
    wr32(0x817fdff0u, rd32(r3 + 8u));
    wr32(param_1, r7);
    wr32(param_1 + 4u, r6);
    wr32(param_1 + 8u, r0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = param_1;
    (void)tc_call(0x802343a4u, &a);
    return;
}
