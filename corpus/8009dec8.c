#include "tc_rt.h"

void fn_8009dec8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r5 = rd32((u32)param_1 + 0x10u);
    r4 = rd32(r5 + 0x10u);
    a.r[0] = r4 + (((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu);
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
    wr32((u32)param_1 + 0x24u, rd32((u32)param_1 + 0x24u) + 4u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfecu;
    a.r[2] = 0x817fdfe8u;
    a.r[3] = r3 & 0xffffu;
    a.r[4] = 0u;
    (void)tc_call(0x8009db3cu, &a);
    return;
}
