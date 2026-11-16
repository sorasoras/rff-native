#include "tc_rt.h"

void fn_802f4f74(s32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32(0x80571d80u));
    a.r[1] = (u32)param_1;
    a.r[2] = 4u;
    (void)tc_call(0x8026d0b8u, &a);
    r5 = rd32(0x80571d80u);
    wr32(r5 + 4u, rd32(r5 + 4u) + 1u);
    wr32(0x80571d84u, rd32(0x80571d84u) + (((u32)param_1 + 3u) & 0xfffffffcu));
    return;
}
