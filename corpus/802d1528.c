#include "tc_rt.h"

void fn_802d1528(u32 param_r3, u32 param_r4)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r11 = 0, r12 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_r3;
    for (;;) {
        wr32(r1 - 0x30u, r1);
        r1 = r1 - 0x30u;
        wr32(r1 + 0x34u, lr);
        r11 = r1 + 0x30u;
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, 0u);
        wr32(r11 - 0xcu, 0u);
        wr32(r11 - 8u, 0u);
        wr32(r11 - 4u, 0u);
        r0 = rd32(r3 + 0x28u);
        r26 = r3;
        r27 = param_r4;
        if (r0 == 0u) break;
        r3 = r0;
        r12 = rd32(r0);
        r12 = rd32(r12 + 0x14u);
        lr = 0x802d1564u;
        if (r12 != 0x802d1528u) {
            a.r[0] = r0;
            a.r[1] = param_r4;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            break;
        }
    }
    r31 = rd32(r26 + 0x20u);
    r30 = r26 + 0x20u;
    while (r31 != r30) {
        r28 = r31;
        r31 = rd32(r31);
        if (param_r4 == 0u || rd32(r28 + 8u) == param_r4) {
            wr32(r1 + 8u, r28);
            a.r[0] = r26 + 0x1cu;
            a.r[1] = r1 + 8u;
            r3 = tc_call(0x802d7a44u, &a);
            f1 = tc_lastf();
            wr32(r28 + 8u, 0u);
            wr16(r28 + 0xcu, 0u);
        }
    }
    return;
}
