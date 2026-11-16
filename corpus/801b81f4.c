#include "tc_rt.h"

void fn_801b81f4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32(rd32((u32)param_1 + 0x1cu) + 0xc40u);
    wr32((u32)param_1 + 0x24u, r4);
    a.r[0] = 0x80571250u;
    a.r[1] = r4;
    a.r[2] = 0x8033b798u;
    r3 = tc_call(0x80103258u, &a);
    r30 = r3;
    a.r[0] = 0x1fcu;
    r3 = tc_call(0x8018925cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[2] = 5u;
        a.r[3] = 5u;
        (void)tc_call(0x801892ccu, &a);
        wr32(r29 + 0x28u, 0x803729a8u);
        a.r[0] = r29 + 0x38u;
        (void)tc_call(0x80163efcu, &a);
        r28 = r29 + 0x48u;
        a.r[0] = r28;
        a.r[1] = 2u;
        a.r[2] = 1u;
        a.r[3] = 2u;
        (void)tc_call(0x801b98a0u, &a);
        r27 = r29 + 0x84u;
        wr32(r28 + 0x28u, 0x80372aa0u);
        a.r[0] = r27;
        a.r[1] = 1u;
        a.r[2] = 1u;
        a.r[3] = 1u;
        (void)tc_call(0x801b98a0u, &a);
        wr32(r27 + 0x28u, 0x80372a68u);
        a.r[0] = r27 + 0x3cu;
        (void)tc_call(0x801e6108u, &a);
        r28 = r29 + 0x134u;
        a.r[0] = r28;
        a.r[1] = 1u;
        a.r[2] = 1u;
        a.r[3] = 1u;
        (void)tc_call(0x801b98a0u, &a);
        r27 = r29 + 0x170u;
        wr32(r28 + 0x28u, 0x80372a30u);
        a.r[0] = r27;
        a.r[1] = 5u;
        a.r[2] = 1u;
        a.r[3] = 5u;
        (void)tc_call(0x801b98a0u, &a);
        r28 = r29 + 0x1acu;
        wr32(r27 + 0x28u, 0x803729f8u);
        a.r[0] = r28;
        a.r[1] = 5u;
        a.r[2] = 1u;
        a.r[3] = 5u;
        f1 = tc_callf(0x801b98a0u, &a);
        r4 = tc_lastr4();
        wr32(r28 + 0x28u, 0x803729c0u);
        wr32(r29 + 0x30u, r30);
    }
    wr32((u32)param_1 + 0x28u, r29);
    a.r[0] = r29;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
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
        wr32(r29, 0x803728ecu);
    }
    r27 = r29;
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
        wr32(r29, 0x80372958u);
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
        wr32(r29, 0x80372934u);
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
        wr32(r29, 0x80372910u);
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
        wr32(r29, 0x803728c8u);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r29;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r27;
    (void)tc_call(0x800f832cu, &a);
    wr32(rd32(0x80571398u) + 0x1c0u, 0u);
    return;
}
