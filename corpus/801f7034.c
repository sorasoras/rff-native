#include "tc_rt.h"

void fn_801f7034(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0xc4u;
    r3 = tc_call(0x8018925cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r30 = r3;
    if (r3 != 0u) {
        r29 = rd32(rd32((u32)param_1 + 0x1cu) + 0x80u);
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[2] = 1u;
        a.r[3] = 1u;
        (void)tc_call(0x801892ccu, &a);
        wr32(r30 + 0x28u, 0x80363558u);
        wr32(r30 + 0x2cu, r29);
        a.r[0] = r30 + 0x30u;
        (void)tc_call(0x801f0da4u, &a);
        a.r[0] = r30 + 0x80u;
        f1 = tc_callf(0x800f82d0u, &a);
        r4 = tc_lastr4();
        wr32(r30 + 0x28u, 0x80376cd8u);
        wr32(r30 + 0xc0u, 0u);
    }
    wr32((u32)param_1 + 0x24u, r30);
    a.r[0] = r30;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r30 + 0x28u) + 0x14u), &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x804de14cu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x801f4574u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x1ccu;
    a.r[1] = 0x19u;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x204u;
    a.r[1] = 0x19u;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x23cu;
    a.r[1] = 0x19u;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x274u;
    a.r[1] = 0x1au;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x274u;
    a.r[1] = 0u;
    (void)tc_call(0x8020f178u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x274u;
    a.r[1] = 7u;
    (void)tc_call(0x8020f164u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2acu;
    a.r[1] = 0x1au;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2acu;
    a.r[1] = 5u;
    (void)tc_call(0x8020f178u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2acu;
    a.r[1] = 0u;
    (void)tc_call(0x8020f164u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2e4u;
    a.r[1] = 0x19u;
    (void)tc_call(0x8020f18cu, &a);
    r28 = 1u;
    if (rd32((u32)param_1 + 0x2cu) != 0u) {
        r28 = 0u;
    }
    r3 = rd32((u32)param_1 + 0x1cu);
    wr32((u32)param_1 + 0x2cu, 0u);
    if (rd32(r3 + 0x84u) == 2u) {
        a.r[0] = 0x24u;
        r3 = tc_call(0x800f80f8u, &a);
        r30 = r3;
        if (r3 != 0u) {
            r29 = rd32((u32)param_1 + 0x24u);
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x800f8170u, &a);
            wr32(r30 + 0x1cu, r29);
            wr32(r30 + 0x20u, r29);
            wr32(r30, 0x80376cb4u);
        }
        a.r[0] = rd32((u32)param_1 + 0x24u);
        a.r[1] = r30;
        a.r[2] = r28;
        (void)tc_call(0x8012b0b4u, &a);
    } else {
        a.r[0] = 0x24u;
        r3 = tc_call(0x800f80f8u, &a);
        r30 = r3;
        if (r3 != 0u) {
            r29 = rd32((u32)param_1 + 0x24u);
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x800f8170u, &a);
            wr32(r30 + 0x1cu, r29);
            wr32(r30 + 0x20u, r29);
            wr32(r30, 0x80376c90u);
        }
        a.r[0] = rd32((u32)param_1 + 0x24u);
        a.r[1] = r30;
        a.r[2] = r28;
        (void)tc_call(0x8012b0b4u, &a);
    }
    wr32((u32)param_1 + 0x28u, 0u);
    r3 = tc_call(0x8012aafcu, &a);
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
    a.r[1] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80119edcu, &a);
    return;
}
