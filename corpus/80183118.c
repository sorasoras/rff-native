#include "tc_rt.h"

void fn_80183118(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x378u;
    a.r[2] = 0xffffffffu;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    wr32(param_1, r3);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x800510bcu, &a);
    wr32(param_1 + 4u, r3);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x379u;
    a.r[2] = 0xffffffffu;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    wr32(param_1 + 8u, r3);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x800510bcu, &a);
    wr32(param_1 + 0xcu, r3);
    return;
}
