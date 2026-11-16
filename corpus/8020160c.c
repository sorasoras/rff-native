#include "tc_rt.h"

void fn_8020160c(s32 param_1, s32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r10 = rd32(0x8033c4f4u);
    r9 = rd32(0x8033c4f8u);
    r8 = rd32(0x8033c4fcu);
    r7 = rd32(0x8033c500u);
    r6 = rd32(0x8033c504u);
    r5 = rd32(0x8033c508u);
    wr32(0x817fdfd8u, rd32(0x8033c4f0u));
    wr32(0x817fdfdcu, r10);
    wr32(0x817fdfe0u, r9);
    wr32(0x817fdfe4u, r8);
    wr32(0x817fdfe8u, r7);
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r5);
    a.r[0] = (u32)param_1 + 0x40u;
    a.r[1] = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7e802028u);
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x40u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    return;
}
