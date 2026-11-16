#include "tc_rt.h"

void fn_80195b2c(s32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = 0x15u;
    (void)tc_call(0x80141274u, &a);
    r3 = rd32((u32)param_1 + 0x19cu);
    wr32((u32)param_1 + 0x150u, 0u);
    wr32((u32)param_1 + 0x1e4u, 0u);
    wr32((u32)param_1 + 0x278u, 0u);
    wr32((u32)param_1 + 0x30cu, 0u);
    wr32((u32)param_1 + 0x3a0u, 0u);
    wr32((u32)param_1 + 0x434u, 0u);
    a.r[0] = r3;
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x28u, 0u);
    r3 = rd32((u32)param_1 + 0x74u);
    wr32((u32)param_1 + 0x19cu, 0xffffffffu);
    a.r[0] = r3;
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x74u, 0xffffffffu);
    r3 = rd32((u32)param_1 + 0x514u);
    wr32((u32)param_1 + 0x4c8u, 0u);
    a.r[0] = r3;
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x514u, 0xffffffffu);
    r3 = rd32((u32)param_1 + 0x5a8u);
    wr32((u32)param_1 + 0x55cu, 0u);
    a.r[0] = r3;
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x5a8u, 0xffffffffu);
    r3 = rd32((u32)param_1 + 0x108u);
    wr32((u32)param_1 + 0x5f0u, 0u);
    wr32((u32)param_1 + 0x684u, 0u);
    wr32((u32)param_1 + 0x718u, 0u);
    wr32((u32)param_1 + 0xbcu, 0u);
    a.r[0] = r3;
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x108u, 0xffffffffu);
    r30 = rd32((u32)param_1 + 0x784u);
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
    wr32((u32)param_1 + 0x858u, 0u);
    wr32((u32)param_1 + 0x8ecu, 0u);
    wr32((u32)param_1 + 0x980u, 0u);
    wr32((u32)param_1 + 0xa14u, 0u);
    wr32((u32)param_1 + 0xaa8u, 0u);
    wr32((u32)param_1 + 0xb3cu, 0u);
    wr32((u32)param_1 + 0xbd0u, 0u);
    wr32((u32)param_1 + 0xc64u, 0u);
    wr32((u32)param_1 + 0xcf8u, 0u);
    wr32((u32)param_1 + 0xd8cu, 0u);
    wr32((u32)param_1 + 0xe20u, 0u);
    wr32((u32)param_1 + 0xeb4u, 0u);
    wr32((u32)param_1 + 0xf48u, 0u);
    wr32((u32)param_1 + 0xfdcu, 0u);
    wr32((u32)param_1 + 0x1070u, 0u);
    wr32((u32)param_1 + 0x1104u, 0u);
    wr32((u32)param_1 + 0x1198u, 0u);
    wr32((u32)param_1 + 0x122cu, 0u);
    wr32((u32)param_1 + 0x12c0u, 0u);
    wr32((u32)param_1 + 0x1354u, 0u);
    wr32((u32)param_1 + 0x13e8u, 0u);
    wr32((u32)param_1 + 0x147cu, 0u);
    wr32((u32)param_1 + 0x1510u, 0u);
    wr32((u32)param_1 + 0x15a4u, 0u);
    wr32((u32)param_1 + 0x1638u, 0u);
    wr32((u32)param_1 + 0x16ccu, 0u);
    wr32((u32)param_1 + 0x1760u, 0u);
    wr32((u32)param_1 + 0x17f4u, 0u);
    wr32((u32)param_1 + 0x1888u, 0u);
    wr32((u32)param_1 + 0x191cu, 0u);
    wr32((u32)param_1 + 0x19b0u, 0u);
    wr32((u32)param_1 + 0x1a44u, 0u);
    wr32((u32)param_1 + 0x1ad8u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x8a4u);
    (void)tc_call(0x8004bc54u, &a);
    wr32((u32)param_1 + 0x8a4u, 0xffffffffu);
    return;
}
