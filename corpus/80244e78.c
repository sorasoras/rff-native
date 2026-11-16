#include "tc_rt.h"

void fn_80244e78(s32 param_1)
{
    u32 c0eq = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x80571890u, 0u);
    r5 = 0x804e9fe0u;
    wr32(0x8057188cu, 0u);
    wr32(0x80571868u, (u32)param_1);
    wr32(0x80571878u, 0u);
    ctr = 0x20u;
    do {
        wr32(r5, 0u);
        wr32(r5 + 4u, 0u);
        wr32(r5 + 8u, 0u);
        wr32(r5 + 0xcu, 0u);
        wr32(r5 + 0x10u, 0u);
        wr32(r5 + 0x14u, 0u);
        wr32(r5 + 0x18u, 0u);
        wr32(r5 + 0x1cu, 0u);
        wr32(r5 + 0x20u, 0u);
        r5 = r5 + 0x24u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    a.r[0] = 0x804e9fe0u;
    a.r[1] = 0x480u;
    (void)tc_call(0x80227738u, &a);
    r4 = 0x804e9ce0u;
    ctr = 0x18u;
    do {
        wr32(r4, 0u);
        wr32(r4 + 4u, 0u);
        wr32(r4 + 8u, 0u);
        wr32(r4 + 0xcu, 0u);
        wr32(r4 + 0x10u, 0u);
        wr32(r4 + 0x14u, 0u);
        wr32(r4 + 0x18u, 0u);
        wr32(r4 + 0x1cu, 0u);
        r4 = r4 + 0x20u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    a.r[0] = 0x804e9ce0u;
    a.r[1] = 0x300u;
    (void)tc_call(0x80227738u, &a);
    r4 = 0x804e9740u;
    ctr = 0x24u;
    do {
        wr32(r4, 0u);
        wr32(r4 + 4u, 0u);
        wr32(r4 + 8u, 0u);
        wr32(r4 + 0xcu, 0u);
        wr32(r4 + 0x10u, 0u);
        wr32(r4 + 0x14u, 0u);
        wr32(r4 + 0x18u, 0u);
        wr32(r4 + 0x1cu, 0u);
        wr32(r4 + 0x20u, 0u);
        wr32(r4 + 0x24u, 0u);
        r4 = r4 + 0x28u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    a.r[0] = 0x804e9740u;
    a.r[1] = 0x5a0u;
    (void)tc_call(0x80227738u, &a);
    (void)tc_call(0x80244d88u, &a);
    a.r[0] = 0x80244c64u;
    (void)tc_call(0x80242bc0u, &a);
    c0eq = rd32(0x80571868u) == 1u;
    wr32(0x817fdfe8u, 0x804e9740u);
    wr32(0x817fdfecu, 0x804e98a8u);
    wr32(0x817fdff0u, 0x804e9a10u);
    wr32(0x817fdff4u, 0x804e9b78u);
    wr32(0x8057185cu, 0x12u);
    wr32(0x80571860u, 0x12u);
    wr32(0x80571864u, 0xb4u);
    if (c0eq) {
        a.r[0] = 0x804e9ce0u;
        a.r[1] = 0x804ea2e0u;
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x80243fb4u, &a);
    } else {
        a.r[0] = 0x804e9ce0u;
        a.r[1] = 0x804ea160u;
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x80243fb4u, &a);
    }
    r0 = rd32(0x80571868u);
    wr32(0x80571888u, 1u);
    wr32(0x80571884u, 0u);
    if (r0 == 1u) {
        a.r[0] = (rd32(0x8057188cu) * 0x180u) - 0x7fb16020u;
        a.r[1] = 0x180u;
        (void)tc_call(0x80242c04u, &a);
        wr32(0x8057188cu, rd32(0x8057188cu) + 1u);
    } else {
        a.r[0] = (rd32(0x80571890u) * 0x180u) - 0x7fb16020u;
        a.r[1] = 0x180u;
        (void)tc_call(0x80242c04u, &a);
    }
    (void)tc_call(0x80242c80u, &a);
    wr32(0x80571858u, 0u);
    return;
}
