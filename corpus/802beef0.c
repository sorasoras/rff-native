#include "tc_rt.h"

void fn_802beef0(u32 param_1)
{
    u32 lr = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    for (;;) {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        wr32(r1 + 0x1cu, r31);
        wr32(r1 + 0x18u, r30);
        wr32(r1 + 0x14u, r29);
        wr32(r1 + 0x10u, r28);
        r28 = r3;
        if (rd32(r3 + 0x14u) != 1u) {
            r29 = 0u;
        } else {
            r12 = rd32(r3);
            r12 = rd32(r12 + 0xcu);
            lr = 0x802bef2cu;
            if (r12 == 0x802beef0u) continue;
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(r12, &a);
            r3 = tc_lastr();
            f0 = (f64)rdf32(r28 + 0xcu);
            r29 = 1u;
            wrf32d(rd32(r28 + 0x24u) + 0x10u, f0);
        }
        r3 = rd32(r28 + 0x20u);
        r31 = rd32(r3 + 0x10u);
        r30 = r3 + 0x10u;
        for (;;) {
            if (r31 == r30) {
                return;
            }
            r3 = rd32(r31 + 8u);
            r5 = r29;
            r4 = rd32(r28 + 0x24u);
            r12 = rd32(r3);
            r12 = rd32(r12 + 0x58u);
            lr = 0x802bef74u;
            if (r12 == 0x802beef0u) break;
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r29;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(r12, &a);
            r3 = tc_lastr();
            r31 = rd32(r31);
        }
    }
}
