#include "tc_rt.h"

void fn_801b3f08(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32(rd32((u32)param_1 + 0x1cu) + 0xc40u);
    wr32((u32)param_1 + 0x24u, r4);
    a.r[0] = 0x80571250u;
    a.r[1] = r4;
    a.r[2] = 0x8033b6e0u;
    r3 = tc_call(0x80103258u, &a);
    r30 = r3;
    a.r[0] = 0x1ecu;
    r3 = tc_call(0x8018925cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 2u;
        a.r[2] = 3u;
        a.r[3] = 0x1cu;
        (void)tc_call(0x801892ccu, &a);
        wr32(r29 + 0x28u, 0x803726a8u);
        a.r[0] = r29 + 0xb8u;
        (void)tc_call(0x80163efcu, &a);
        a.r[0] = r29 + 0xc4u;
        (void)tc_call(0x80190604u, &a);
        a.r[0] = r29 + 0x19cu;
        f1 = tc_callf(0x801f0da4u, &a);
        r4 = tc_lastr4();
        wr32(r29 + 0x30u, r30);
        wr32(r29 + 0x18cu, 0u);
        wr32(r29 + 0x190u, 0u);
        wr32(r29 + 0x198u, 0u);
        wr32(r29 + 0x194u, 0u);
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
        wr32(r29, 0x803725ecu);
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
        wr32(r29, 0x80372658u);
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
        wr32(r29, 0x80372634u);
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
        wr32(r29, 0x80372610u);
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
        wr32(r29, 0x803725c8u);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r29;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = r30;
    (void)tc_call(0x800f832cu, &a);
    wr32((u32)param_1 + 0x1284u, 0x21u);
    r4 = rd32((u32)param_1 + 0x24u);
    wr32((u32)param_1 + 0x68u, 0xb7u);
    a.r[0] = 0x80571250u;
    a.r[1] = r4;
    a.r[2] = 0x8033b6ebu;
    r3 = tc_call(0x80103258u, &a);
    a.r[0] = (u32)param_1 + 0x6cu;
    a.r[1] = r3;
    (void)tc_call(0x80210c88u, &a);
    a.r[0] = 8u;
    r3 = tc_call(0x801bfb7cu, &a);
    a.r[0] = (u32)param_1 + 0x6cu;
    a.r[1] = r3;
    f1 = tc_callf(0x80210c90u, &a);
    a.r[0] = (u32)param_1 + 0x6cu;
    a.r[1] = 0xb7u;
    a.r[2] = 0x804890c8u;
    a.r[3] = 0x804890d4u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x6cu) + 0x48u), &a);
    wr32(rd32(0x80571398u) + 0xe4u, 0x21u);
    return;
}
