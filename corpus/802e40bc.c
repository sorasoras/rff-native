#include "tc_rt.h"

void fn_802e40bc(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = rd32(0x817fdfe0u);
    (void)tc_call(0x8022c2b0u, &a);
    (void)tc_call(0x8022eff0u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8023d8d0u, &a);
    a.r[0] = 0u;
    f1 = tc_callf(0x8023d914u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r30;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x802e4010u, &a);
    r3 = rd32(0x80571d30u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x8039cc20u;
        a.r[2] = param_1;
        a.r[3] = param_2;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802e3ea4u, &a);
        a.r[0] = rd32(0x80571d30u);
        a.r[1] = 0x80570f10u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802e3ea4u, &a);
        r30 = rd32(0x80571d30u);
        r31 = (u32)rd16(r30 + 0x20u);
        a.r[0] = r30;
        r3 = tc_call(0x802e3f0cu, &a);
        r0 = r3 - r31;
        if ((s32)r0 < 0) {
            r0 = 0u;
        }
        wr32(r30 + 0x18u, r0);
        wr8(rd32(0x80571d30u) + 0x22u, 1u);
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x8039cc20u;
        a.r[1] = param_1;
        a.r[2] = param_2;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80228554u, &a);
        a.r[0] = param_3;
        a.r[1] = param_4;
        f1 = tc_callf(0x802285e0u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80570f10u;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80228554u, &a);
    }
    if ((u32)param_5 != 0u) {
        (void)tc_call(0x802250a8u, &a);
    }
    return;
}
