#include "tc_rt.h"

void fn_802fe850(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r5 = (u32)param_3;
    r6 = (u32)param_4;
    r7 = (u32)param_5;
    r30 = rd32(param_1 + 4u);
    wr32(param_1 + 0x298u, param_2);
    wr32(param_1 + 0x288u, (u32)param_3);
    wr32(param_1 + 0x28cu, (u32)param_4);
    wr32(param_1 + 0x290u, (u32)param_5);
    wr8(param_1 + 0x294u, 1u);
    if (r30 == 0u) {
        r0 = 0u;
    } else {
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.r[2] = (u32)param_3;
        a.r[3] = (u32)param_4;
        a.r[4] = (u32)param_5;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x40u), &a);
        f1 = tc_lastf();
        r31 = r3;
        a.r[0] = r30;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r30) + 0xcu), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        if (r3 == 0u) {
            r0 = 0u;
        } else {
            r0 = rd32(param_1 + 0x298u);
            wr32(param_1 + 0x4b0u, r3);
            wr32(param_1 + 0x4acu, r0);
            wr32(param_1 + 0x4b4u, r31);
            wr32(param_1 + 0x4b8u, 0x802fe944u);
            wr32(param_1 + 0x4bcu, param_1);
            r3 = tc_call(0x8030abd4u, &a);
            a.r[0] = r3;
            a.r[1] = param_1 + 0x49cu;
            a.r[2] = 1u;
            f1 = tc_callf(0x8030ad4cu, &a);
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r0 = 1u;
        }
    }
    if (r0 == 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
    }
    return;
}
