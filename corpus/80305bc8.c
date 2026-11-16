#include "tc_rt.h"

void fn_80305bc8(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    f1 = tc_lastf();
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    r3 = tc_call(0x8022d56cu, &a);
    f1 = tc_lastf();
    r30 = (u32)param_1 + 4u;
    r31 = rd32(r30);
    while (r31 != r30) {
        r3 = r31;
        r31 = rd32(r31);
        r3 = r3 - 0xe8u;
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = param_3;
        r3 = tc_call(0x802f61c0u, &a);
        f1 = tc_lastf();
    }
    r3 = tc_call(0x80306860u, &a);
    f1 = tc_lastf();
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    r3 = tc_call(0x8022d648u, &a);
    f1 = tc_lastf();
    return;
}
