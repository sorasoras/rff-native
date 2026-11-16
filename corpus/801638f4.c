#include "tc_rt.h"

void fn_801638f4(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x74u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 3u;
    (void)tc_call(0x801630d0u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x66u;
    a.r[2] = 3u;
    (void)tc_call(0x80162e44u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80163020u, &a);
    return;
}
