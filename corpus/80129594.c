#include "tc_rt.h"

void fn_80129594(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r7 = rd32((u32)param_1 + 0x1cu);
    r4 = rd32(0x80339e6cu);
    r3 = rd32(0x80339e70u);
    r0 = rd32(0x80339e74u);
    wr32(0x817fdfe8u, rd32(0x80339e68u));
    r31 = rd32(r7 + 0x634u);
    wr32(0x817fdfecu, r4);
    wr32(0x817fdff0u, r3);
    wr32(0x817fdff4u, r0);
    do {
        r3 = tc_call(0x80040b64u, &a);
        r5 = (r3 >> 4u) & 3u;
    } while (r5 == r31);
    wr32(rd32((u32)param_1 + 0x1cu) + 0x634u, r5);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x638u;
    a.r[1] = rd32(((r5 << 2u) & 0xfffffffcu) - 0x7e802018u);
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x638u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    return;
}
