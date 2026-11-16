#include "tc_rt.h"

void fn_801652f8(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr16(0x817fdfe8u, 0x2e8u);
    wr8(0x817fdfeau, 1u);
    wr8(0x817fdfebu, 1u);
    a.r[0] = rd32(param_1 + 0x134u);
    a.r[1] = 0x817fdfe8u;
    f1 = tc_callf(0x80183794u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    a.r[0] = param_1;
    a.r[1] = (u32)rd16(0x817fdfe8u);
    a.r[2] = r3;
    a.r[3] = (u32)rd8(0x817fdfebu);
    a.r[4] = (u32)rd8(0x817fdfeau);
    (void)tc_call(0x800da5a8u, &a);
    return;
}
