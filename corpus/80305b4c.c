#include "tc_rt.h"

void fn_80305b4c(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    f1 = tc_lastf();
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    r3 = tc_call(0x8022d56cu, &a);
    f1 = tc_lastf();
    r31 = rd32((u32)param_1 + 4u);
    r30 = (u32)param_1 + 4u;
    while (r31 != r30) {
        r3 = r31;
        r31 = rd32(r31);
        r3 = r3 - 0xe8u;
        a.r[0] = r3;
        r3 = tc_call(0x802f6560u, &a);
        f1 = tc_lastf();
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80305d58u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x80306860u, &a);
    f1 = tc_lastf();
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    r3 = tc_call(0x8022d648u, &a);
    f1 = tc_lastf();
    return;
}
