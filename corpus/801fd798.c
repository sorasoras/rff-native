#include "tc_rt.h"

void fn_801fd798(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x65fu;
    r3 = tc_call(0x800510acu, &a);
    r30 = r3;
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = r30;
    r3 = tc_call(0x801b39d8u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0xccu, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x65fu;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    a.r[7] = 0u;
    (void)tc_call(0x80050da4u, &a);
    a.r[0] = rd32((u32)param_1 + 0xccu);
    a.r[1] = 0u;
    a.r[2] = 0u;
    r3 = tc_call(0x800f9458u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x1cu, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fed0cu, &a);
    a.r[0] = (u32)param_1 + 0x40u;
    a.r[1] = rd32((u32)param_1 + 0x1cu);
    a.r[2] = 0x80571250u;
    (void)tc_call(0x80163f48u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = rd32(rd32((u32)param_1 + 8u) + 0x30u);
    f1 = tc_callf(0x80103564u, &a);
    wr32((u32)param_1 + 0x9dcu, 0u);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x80571250u;
    a.r[1] = rd32((u32)param_1 + 0x1cu);
    a.r[2] = 0x8033c49eu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801032a4u, &a);
    a.r[0] = (u32)param_1 + 0x9e0u;
    a.r[1] = 0x669u;
    a.r[2] = r3;
    (void)tc_call(0x801e61b4u, &a);
    (void)tc_call(0x801e5c20u, &a);
    if (rd32(rd32(0x805711ccu) + 0xfcu) != 2u) {
        a.r[0] = (u32)param_1 + 0x9e0u;
        a.r[1] = 0u;
        (void)tc_call(0x801e6354u, &a);
    } else {
        a.r[0] = (u32)param_1 + 0x9e0u;
        a.r[1] = 8u;
        (void)tc_call(0x801e6354u, &a);
    }
    a.r[0] = (u32)param_1 + 0x10cu;
    a.r[1] = 2u;
    (void)tc_call(0x80130b08u, &a);
    a.r[0] = (u32)param_1 + 0x10cu;
    a.r[1] = (u32)param_1 + 0x9c8u;
    f1 = tc_callf(0x80130f70u, &a);
    a.r[0] = (u32)param_1 + 0x10cu;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x134u) + 0x14u), &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80376f10u);
    }
    a.r[0] = (u32)param_1 + 0xd0u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80376eecu);
    }
    a.r[0] = (u32)param_1 + 0xd0u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80376ec8u);
    }
    a.r[0] = (u32)param_1 + 0xd0u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80376ea4u);
    }
    a.r[0] = (u32)param_1 + 0xd0u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80376e80u);
    }
    a.r[0] = (u32)param_1 + 0xd0u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80376e5cu);
    }
    a.r[0] = (u32)param_1 + 0xd0u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80376e38u);
    }
    a.r[0] = (u32)param_1 + 0xd0u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0xd0u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8544u, &a);
    return;
}
