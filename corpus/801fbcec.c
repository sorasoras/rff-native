#include "tc_rt.h"

void fn_801fbcec(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x78u;
    a.r[1] = 0x8033c4b6u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x78u;
    f1 = tc_callf(0x801f10d8u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x804de14cu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801f43acu, &a);
    f1 = tc_lastf();
    wr32(rd32((u32)param_1 + 0x1cu) + 0x200u, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801f44f4u, &a);
    wr32(rd32((u32)param_1 + 0x1cu) + 0x274u, r3);
    return;
}
