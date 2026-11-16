#include "tc_rt.h"

void fn_8031072c(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = (u32)param_2 + 0x90u;
    r4 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = r4;
        r3 = tc_call(0x802dea10u, &a);
        r4 = r3;
        if (r3 == 0u) break;
        r3 = (u32)rd8(r3 + 0x89u);
    } while (r3 > (u32)rd8((u32)param_3 + 0x89u));
    a.r[0] = r31;
    a.r[1] = r4;
    r3 = tc_call(0x802de9f0u, &a);
    a.r[0] = r31;
    a.r[1] = r3;
    a.r[2] = (u32)param_3;
    (void)tc_call(0x802de864u, &a);
    return;
}
