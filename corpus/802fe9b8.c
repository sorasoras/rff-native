#include "tc_rt.h"

void fn_802fe9b8(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8(param_1 + 0x294u) != 0u) {
        r3 = tc_call(0x8030abd4u, &a);
        a.r[0] = r3;
        a.r[1] = param_1 + 0x49cu;
        f1 = tc_callf(0x8030b0acu, &a);
        r4 = tc_lastr4();
    }
    r3 = rd32(param_1 + 0x298u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
        wr32(param_1 + 0x298u, 0u);
    }
    a.r[0] = param_1;
    (void)tc_call(0x802f6f30u, &a);
    r30 = rd32(param_1 + 0x284u);
    r31 = r30 + 0x10u;
    a.r[0] = r31;
    (void)tc_call(0x8022d56cu, &a);
    if (rd32(r30 + 4u) == 0u) {
        a.r[0] = r31;
        (void)tc_call(0x8022d648u, &a);
    } else {
        a.r[0] = r30 + 4u;
        a.r[1] = param_1 + 0xe0u;
        f1 = tc_callf(0x802debd0u, &a);
        a.r[0] = param_1;
        a.r[1] = 0xffffffffu;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
        a.r[0] = r30;
        a.r[1] = param_1;
        (void)tc_call(0x802fad08u, &a);
        a.r[0] = r31;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
