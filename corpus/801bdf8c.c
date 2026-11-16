#include "tc_rt.h"

void fn_801bdf8c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32(rd32((u32)param_1 + 0x1cu) + 0xc40u);
    wr32((u32)param_1 + 0x24u, r4);
    a.r[0] = 0x80571250u;
    a.r[1] = r4;
    a.r[2] = 0x8033ba00u;
    r3 = tc_call(0x80103258u, &a);
    r30 = r3;
    a.r[0] = 0x154u;
    r3 = tc_call(0x8018925cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x53u;
        a.r[2] = 1u;
        a.r[3] = 0x53u;
        (void)tc_call(0x801892ccu, &a);
        wr32(r29 + 0x28u, 0x80372df0u);
        a.r[0] = r29 + 0x3cu;
        (void)tc_call(0x80163efcu, &a);
        a.r[0] = r29 + 0x48u;
        (void)tc_call(0x801f0da4u, &a);
        a.r[0] = r29 + 0xa4u;
        a.r[1] = 0x801f0da4u;
        a.r[2] = 0x801f0de8u;
        a.r[3] = 0x50u;
        a.r[4] = 2u;
        f1 = tc_callf(0x80255624u, &a);
        r4 = tc_lastr4();
        wr32(r29 + 0x30u, r30);
        wr32(r29 + 0x9cu, 0u);
        wr32(r29 + 0xa0u, 0u);
        wr32(r29 + 0x14cu, 0u);
    }
    wr32((u32)param_1 + 0x28u, r29);
    a.r[0] = r29;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r29 + 0x28u) + 0x14u), &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r29 + 0x1cu, (u32)param_1);
        wr32(r29, 0x80372d34u);
    }
    r30 = r29;
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r29;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r29 + 0x1cu, (u32)param_1);
        wr32(r29, 0x80372da0u);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r29;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r29 + 0x1cu, (u32)param_1);
        wr32(r29, 0x80372d7cu);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r29;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r29 + 0x1cu, (u32)param_1);
        wr32(r29, 0x80372d58u);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r29;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r29 + 0x1cu, (u32)param_1);
        wr32(r29, 0x80372d10u);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r29;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r30;
    (void)tc_call(0x800f832cu, &a);
    return;
}
