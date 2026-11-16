#include "tc_rt.h"

u32 fn_802fee5c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1, 0x8039d4e8u);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        a.r[0] = param_1;
        (void)tc_call(0x802ff570u, &a);
        r31 = rd32(param_1 + 0xf0u);
        while (r31 != 0u) {
            if ((u32)rd8(r31 + 0x36u) != 0u) {
                a.r[0] = r31;
                (void)tc_call(0x802f8000u, &a);
            }
            r31 = rd32(r31 + 0xf0u);
        }
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        r31 = rd32(param_1 + 0xf0u);
        while (r31 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x802f8588u, &a);
            r31 = rd32(r31 + 0xf0u);
        }
        wr32(param_1 + 0xf0u, 0u);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        wr8(param_1 + 5u, 0u);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
