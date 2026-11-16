#include "tc_rt.h"

void fn_800d76c0(void)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800d74f0u, &a);
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
    a.r[1] = 0x38du;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r31 = r3;
    r3 = tc_call(0x800d74f0u, &a);
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
    a.r[1] = 0x38eu;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r30 = r3;
    r3 = tc_call(0x8031f650u, &a);
    r29 = r3;
    a.r[0] = r3;
    a.r[1] = r31;
    (void)tc_call(0x8031fa50u, &a);
    a.r[0] = r29;
    a.r[1] = r30;
    (void)tc_call(0x8031fb80u, &a);
    a.r[0] = r29;
    (void)tc_call(0x8031fe18u, &a);
    (void)tc_call(0x8024ff34u, &a);
    (void)tc_call(0x80252904u, &a);
    return;
}
