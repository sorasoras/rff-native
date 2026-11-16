#include "tc_rt.h"

void fn_801b5c68(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32(rd32((u32)param_1 + 0x1cu) + 0xc40u);
    wr32((u32)param_1 + 0x24u, r4);
    a.r[0] = 0x80571250u;
    a.r[1] = r4;
    a.r[2] = 0x8033b728u;
    r3 = tc_call(0x80103258u, &a);
    r31 = r3;
    a.r[0] = 0x110u;
    r3 = tc_call(0x8018925cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[2] = 7u;
        a.r[3] = 0x1du;
        (void)tc_call(0x801892ccu, &a);
        wr32(r30 + 0x28u, 0x803727a0u);
        a.r[0] = r30 + 0x3cu;
        (void)tc_call(0x80163efcu, &a);
        a.r[0] = r30 + 0x48u;
        f1 = tc_callf(0x80190604u, &a);
        r4 = tc_lastr4();
        wr32(r30 + 0x30u, r31);
    }
    wr32((u32)param_1 + 0x28u, r30);
    a.r[0] = r30;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
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
        wr32(r30, 0x803726e4u);
    }
    r31 = r30;
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
        wr32(r30, 0x80372750u);
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
        wr32(r30, 0x8037272cu);
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
        wr32(r30, 0x80372708u);
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
        wr32(r30, 0x803726c0u);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r31;
    (void)tc_call(0x800f832cu, &a);
    return;
}
