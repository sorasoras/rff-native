#include "tc_rt.h"

void fn_80306994(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_1 + 0x394u) != 0u) {
        return;
    }
    wr32(param_1 + 0x350u, (u32)param_3);
    wr8(param_1 + 0x394u, 1u);
    if ((u32)(s8)rd8(0x80571dc8u) == 0u) {
        wr32(0x8055fd6cu, 0u);
        wr32(0x8055fd70u, 0u);
        wr32(0x8055fd78u, 0u);
        wr32(0x8055fd7cu, 0u);
        wr32(0x8055fd40u, 0u);
        wr32(0x8055fd5cu, 0u);
        wr32(0x8055fd60u, 0u);
        wr32(0x8055fd68u, 0u);
        wr32(0x8055fd6cu, 0x8055fd6cu);
        wr32(0x8055fd70u, 0x8055fd6cu);
        wr32(0x8055fd74u, 0u);
        wr32(0x8055fd78u, 0x8055fd78u);
        wr32(0x8055fd7cu, 0x8055fd78u);
        wr8(0x8055fd84u, 0u);
        a.r[0] = 0x8055fd10u;
        a.r[1] = 0x8055fd30u;
        a.r[2] = 4u;
        (void)tc_call(0x8022ca4cu, &a);
        a.r[0] = 0x8055fd08u;
        (void)tc_call(0x8022efd4u, &a);
        a.r[0] = 0x8055fd44u;
        (void)tc_call(0x8022d534u, &a);
        a.r[0] = 0x8055f9f0u;
        a.r[1] = 0x80306924u;
        a.r[2] = 0x8055f9e0u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571dc8u, 1u);
    }
    a.r[0] = param_1;
    a.r[1] = 0x80306bd8u;
    a.r[2] = 0x8055f9f0u;
    a.r[3] = (u32)param_3 + (u32)param_4;
    a.r[4] = (u32)param_4;
    a.r[5] = param_2;
    a.r[6] = 0u;
    r3 = tc_call(0x8022f550u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x8022fbb8u, &a);
    }
    return;
}
