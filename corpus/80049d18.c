#include "tc_rt.h"

void fn_80049d18(s32 param_1)
{
    TcArgs a = {0};
    if ((u32)param_1 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xfu;
        a.r[2] = 0xau;
        a.r[3] = 8u;
        a.r[4] = 0xfu;
        (void)tc_call(0x802533f4u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 7u;
        a.r[2] = 7u;
        a.r[3] = 7u;
        a.r[4] = 5u;
        (void)tc_call(0x80253434u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xfu;
        a.r[2] = 0u;
        a.r[3] = 8u;
        a.r[4] = 0xfu;
        (void)tc_call(0x802533f4u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 7u;
        a.r[2] = 7u;
        a.r[3] = 7u;
        a.r[4] = 0u;
        (void)tc_call(0x80253434u, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 1u;
    a.r[5] = 0u;
    (void)tc_call(0x80253474u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 1u;
    a.r[5] = 0u;
    (void)tc_call(0x802534ccu, &a);
    return;
}
