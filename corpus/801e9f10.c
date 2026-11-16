#include "tc_rt.h"

void fn_801e9f10(s32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = 0x15u;
    (void)tc_call(0x80141274u, &a);
    a.r[0] = rd32((u32)param_1 + 0x15a8u);
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x15a8u, 0xffffffffu);
    r3 = rd32((u32)param_1 + 0x108u);
    wr32((u32)param_1 + 0xbcu, 0u);
    a.r[0] = r3;
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x108u, 0xffffffffu);
    r3 = rd32((u32)param_1 + 0x230u);
    wr32((u32)param_1 + 0x1e4u, 0u);
    a.r[0] = r3;
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x230u, 0xffffffffu);
    r3 = rd32((u32)param_1 + 0x418u);
    wr32((u32)param_1 + 0x318u, 0u);
    wr32((u32)param_1 + 0x3acu, 0u);
    wr32((u32)param_1 + 0x28u, 0u);
    a.r[0] = r3;
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x418u, 0xffffffffu);
    a.r[0] = rd32((u32)param_1 + 0x1308u);
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x1308u, 0xffffffffu);
    r3 = rd32((u32)param_1 + 0x11fcu);
    wr32((u32)param_1 + 0x1228u, 0u);
    a.r[0] = r3;
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x11fcu, 0xffffffffu);
    r3 = rd32((u32)param_1 + 0x19cu);
    wr32((u32)param_1 + 0x27cu, 0u);
    wr32((u32)param_1 + 0x150u, 0u);
    a.r[0] = r3;
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x19cu, 0xffffffffu);
    r30 = rd32((u32)param_1 + 0x2e8u);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x80094ec0u, &a);
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
    }
    return;
}
