#include "tc_rt.h"

void fn_8004e640(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r7 = rd32((u32)param_1 + 0x14u);
    r31 = (u32)rd16(r7 + 8u);
    r30 = (u32)rd16(r7 + 0xau);
    r29 = rd32(r7);
    a.r[0] = r31;
    a.r[1] = r30;
    a.r[2] = (u32)rd8(r7 + 4u);
    a.r[3] = 0u;
    (void)tc_call(0x8004b820u, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = r31;
    a.r[3] = r30;
    (void)tc_call(0x8004b830u, &a);
    a.r[0] = r29;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x8004b844u, &a);
    (void)tc_call(0x8004b8acu, &a);
    return;
}
