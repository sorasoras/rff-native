#include "tc_rt.h"

s32 fn_80207ffc(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    a.r[0] = 0x8049c500u;
    a.r[1] = rd32(param_1 + 4u);
    r3 = tc_call(0x800c87e4u, &a);
    f1 = tc_lastf();
    r31 = r3;
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0xcu), &a);
    f1 = tc_lastf();
    r30 = (u32)param_3 + r3;
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 8u), &a);
    f1 = tc_lastf();
    if ((s32)r3 < (s32)r30) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 8u), &a);
        r30 = r3;
    }
    wr32(r31 + 0x1cu, r30);
    return (s32)r30;
}
