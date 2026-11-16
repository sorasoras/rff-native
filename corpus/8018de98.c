#include "tc_rt.h"

u32 fn_8018de98(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x3cu), &a);
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
    a.r[1] = 0x6c1u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r31 = r3;
    a.r[0] = 1u;
    (void)tc_call(0x80050b14u, &a);
    if (r31 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r31;
        a.r[1] = 0u;
        r3 = tc_call(0x800510bcu, &a);
        wr32(param_1 + 0x248u, r3);
        wr32(param_1 + 0x244u, r31);
        a.r[0] = param_1;
        (void)tc_call(0x8019016cu, &a);
        r3 = 1u;
    }
    return r3;
}
