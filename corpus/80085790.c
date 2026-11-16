#include "tc_rt.h"

void fn_80085790(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80089874u, &a);
    wr32(param_1, param_2);
    r3 = tc_call(0x80081034u, &a);
    r0 = r3 & 0xffu;
    r3 = rd32(param_1);
    wr32(param_1 + 4u, r0);
    a.r[0] = r3;
    r3 = tc_call(0x8007d150u, &a);
    r31 = r3;
    r3 = tc_call(0x800545e4u, &a);
    a.r[0] = r3;
    a.r[1] = rd32(r31 + ((rd32(param_1 + 4u) << 3u) & 0xfffffff8u) + 0x14u);
    a.r[2] = 0u;
    a.r[3] = 0u;
    r3 = tc_call(0x80050edcu, &a);
    wr32(param_1 + 0x2290u, r3);
    a.r[0] = 1u;
    (void)tc_call(0x80050b14u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x8008584cu, &a);
    r3 = tc_call(0x80083e38u, &a);
    a.r[0] = r3;
    a.r[1] = rd32(r31 + ((rd32(param_1 + 4u) << 3u) & 0xfffffff8u) + 0x10u);
    a.r[2] = 0u;
    a.r[3] = 0u;
    r3 = tc_call(0x80050edcu, &a);
    wr32(param_1 + 0x228cu, r3);
    a.r[0] = 1u;
    (void)tc_call(0x80050b14u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x80085908u, &a);
    return;
}
