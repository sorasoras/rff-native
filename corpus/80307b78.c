#include "tc_rt.h"

u32 fn_80307b78(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1, 0x8039d618u);
        wr32(param_1 + 0xd8u, 0x8039d63cu);
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(0x8039d628u), &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        if ((u32)rd8(param_1 + 0x11cu) == 0u) {
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
        } else {
            wr32(param_1 + 0x820u, 0u);
            a.r[0] = param_1 + 0x19cu;
            a.r[1] = param_1 + 0x1a0u;
            a.r[2] = 0x680u;
            (void)tc_call(0x802fabdcu, &a);
            wr8(param_1 + 0x11cu, 0u);
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
        }
        a.r[0] = param_1 + 0x1a0u;
        a.r[1] = 0x80307b20u;
        a.r[2] = 0x34u;
        a.r[3] = 0x20u;
        (void)tc_call(0x8025571cu, &a);
        r3 = param_1 + 0x190u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x802dea2cu, &a);
        }
        r3 = param_1 + 0x170u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x8030ab94u, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
