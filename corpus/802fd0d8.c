#include "tc_rt.h"

void fn_802fd0d8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = rd32(param_1);
    r28 = rd32(r3 + 0x18u) + r3;
    if (r28 == 0u) {
        return;
    }
    a.r[0] = param_2;
    r3 = tc_call(0x802550d4u, &a);
    r30 = rd32(r28 + 8u);
    r27 = r3;
    r29 = r28;
    r26 = 0u;
    while (r26 < r30) {
        r31 = r28 + rd32(r29 + 0xcu);
        if (r27 == rd32(r31 + 0xcu)) {
            a.r[0] = param_2;
            a.r[1] = r31 + 0x10u;
            a.r[2] = r27;
            r3 = tc_call(0x8025bfccu, &a);
            if (r3 == 0u) {
                wr32(param_3, rd32(r31 + 8u));
                return;
            }
        }
        r29 = r29 + 4u;
        r26 = r26 + 1u;
    }
    return;
}
