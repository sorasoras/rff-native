#include "tc_rt.h"

void fn_80163944(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x74u, 0u);
    r31 = rd32(0x8049b738u);
    a.r[0] = (u32)param_1;
    a.r[1] = 3u;
    (void)tc_call(0x801630d0u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x65u;
    a.r[2] = 3u;
    (void)tc_call(0x80162e44u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x2au;
    a.r[2] = 3u;
    (void)tc_call(0x80162e44u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r31;
    (void)tc_call(0x80163818u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80163020u, &a);
    return;
}
