#include "tc_rt.h"

void fn_8004a914(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)rd8(0x803c6244u);
    wr8(0x803c6244u, (u8)(r31 + 1u));
    a.r[0] = (u32)param_1 + 0x198u;
    r3 = tc_call(0x80049874u, &a);
    r30 = r3;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8004a8c8u, &a);
    r29 = r3;
    a.r[0] = r31;
    a.r[1] = 0xfu;
    a.r[2] = 0u;
    a.r[3] = 8u;
    a.r[4] = 0xfu;
    (void)tc_call(0x802533f4u, &a);
    a.r[0] = r31;
    a.r[1] = 7u;
    a.r[2] = 7u;
    a.r[3] = 7u;
    a.r[4] = 0u;
    (void)tc_call(0x80253434u, &a);
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 1u;
    a.r[5] = 0u;
    (void)tc_call(0x80253474u, &a);
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 1u;
    a.r[5] = 0u;
    (void)tc_call(0x802534ccu, &a);
    a.r[0] = r31;
    a.r[1] = r29;
    a.r[2] = r30;
    a.r[3] = 0xffu;
    (void)tc_call(0x80253860u, &a);
    return;
}
