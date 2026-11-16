#include "tc_rt.h"

void fn_80049e68(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0xfu;
    a.r[2] = 0xcu;
    a.r[3] = 8u;
    a.r[4] = 0xau;
    (void)tc_call(0x802533f4u, &a);
    a.r[0] = param_1;
    a.r[1] = 7u;
    a.r[2] = 5u;
    a.r[3] = 4u;
    a.r[4] = 7u;
    (void)tc_call(0x80253434u, &a);
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 1u;
    a.r[5] = 0u;
    (void)tc_call(0x80253474u, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 1u;
    a.r[5] = 0u;
    (void)tc_call(0x802534ccu, &a);
    return;
}
