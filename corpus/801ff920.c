#include "tc_rt.h"

void fn_801ff920(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)tc_call(0x800f95b4u, &a);
    r4 = rd32(rd32((u32)param_1 + 0x1cu) + 0xc40u);
    wr32((u32)param_1 + 0x24u, r4);
    a.r[0] = 0x80571250u;
    a.r[1] = r4;
    a.r[2] = 0x8033c510u;
    r3 = tc_call(0x80103258u, &a);
    r29 = r3;
    a.r[0] = 0x2e8u;
    r3 = tc_call(0x8018925cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r29;
        f1 = tc_callf(0x8020054cu, &a);
        r4 = tc_lastr4();
    }
    wr32((u32)param_1 + 0x68u, r30);
    a.r[0] = r30;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r30 + 0x28u) + 0x14u), &a);
    a.r[0] = 0x80571250u;
    a.r[1] = rd32((u32)param_1 + 0x24u);
    a.r[2] = 0x8033c51bu;
    r3 = tc_call(0x80103258u, &a);
    r29 = r3;
    a.r[0] = 0x98u;
    r3 = tc_call(0x8018925cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r29;
        f1 = tc_callf(0x8020106cu, &a);
        r4 = tc_lastr4();
    }
    wr32((u32)param_1 + 0x28u, r30);
    a.r[0] = r30;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r30 + 0x28u) + 0x14u), &a);
    a.r[0] = 0x20u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x8037730cu);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
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
        wr32(r30, 0x80377378u);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x64u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80377354u);
        a.r[0] = r30 + 0x28u;
        (void)tc_call(0x800f82d0u, &a);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
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
        wr32(r30, 0x80377330u);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
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
        wr32(r30, 0x803772e8u);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = 0u;
    (void)tc_call(0x800f8348u, &a);
    wr32((u32)param_1 + 0x6cu, 0u);
    return;
}
