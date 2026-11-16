#include "tc_rt.h"

u32 fn_80306860(void)
{
    TcArgs a = {0};
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
    return 0x8055f9f0u;
}
