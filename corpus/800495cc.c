#include "tc_rt.h"

void fn_800495cc(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x803c1d40u;
    r3 = rd32(param_1);
    r29 = r3 + 8u;
    r28 = r3 + ((rd32(0x803c1dacu) << 2u) & 0xfffffffcu) + 8u;
    r3 = tc_call(0x800496a0u, &a);
    r0 = rd32(0x803c1dacu);
    r30 = r3;
    ctr = r0;
    if (r0 > 0u) {
        while ((u32)rd8(r31 + 0x70u) != 1u) {
            r0 = rd32(r29);
            r29 = r29 + 4u;
            r31 = r31 + 1u;
            r28 = r28 + r0;
            ctr = ctr - 1u;
            if (ctr == 0u) {
                return;
            }
        }
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = r28 + (rd32(r29) * rd32(0x803c1e2cu));
        a.r[2] = 0u;
        r3 = tc_call(0x802be858u, &a);
        wr32(r30 + 8u, r3);
        wr32(r30 + 4u, rd32(r30));
        a.r[0] = r30;
        (void)tc_call(0x8004972cu, &a);
    }
    return;
}
