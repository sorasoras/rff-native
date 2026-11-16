#include "tc_rt.h"

void fn_8004e86c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r5 = 0, r6 = 0, r8 = 0;
    TcArgs a = {0};
    r8 = rd32((u32)param_1 + 0x14u);
    r5 = (u32)rd16(r8 + 8u);
    r6 = (u32)rd16(r8 + 0xau);
    r8 = rd32(r8);
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = 0u;
    a.r[5] = r8;
    (void)tc_call(0x8004b72cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = param_2;
    a.r[3] = 0u;
    (void)tc_call(0x8004b7a0u, &a);
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x80252494u, &a);
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x802524b0u, &a);
    (void)tc_call(0x80252904u, &a);
    return;
}
