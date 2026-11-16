#include "tc_rt.h"

void fn_802e4c00(s32 param_1, u32 param_2)
{
    u32 lr = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = (u32)param_1;
    r4 = param_2;
    for (;;) {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        wr32(r1 + 0x1cu, r31);
        wr32(r1 + 0x18u, r30);
        r30 = r3 + 0x20u;
        wr32(r1 + 0x14u, r29);
        r29 = r4;
        wr32(r1 + 0x10u, r28);
        r28 = r3;
        r31 = rd32(r3 + 0x20u);
        for (;;) {
            if (r31 == r30) {
                if (((u32)rd8(r28 + 0xbbu) & 1u) != 0u || (r29 & 1u) == 0u) {
                    r3 = rd32(r28 + 0x28u);
                    if (r3 == 0u) {
                        return;
                    }
                    r12 = rd32(r3);
                    r12 = rd32(r12 + 0x1cu);
                    lr = 0x802e4c94u;
                    if (r12 == 0x802e4c00u) break;
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.f[0] = f1;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                    return;
                }
                return;
            }
            if ((u32)rd8(r31 + 0xeu) == 0u) {
                r3 = rd32(r31 + 8u);
                r5 = r28;
                r4 = (u32)rd16(r31 + 0xcu);
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x1cu);
                lr = 0x802e4c58u;
                if (r12 == 0x802e4c00u) break;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r28;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
                r4 = tc_lastr4();
                r5 = 0u;
            }
            r31 = rd32(r31);
        }
    }
}
