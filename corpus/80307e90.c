#include "tc_rt.h"

void fn_80307e90(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
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
    return;
}
