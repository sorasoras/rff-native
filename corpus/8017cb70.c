#include "tc_rt.h"

void fn_8017cb70(s32 param_1)
{
    u32 lr = 0, r1 = 0, r3 = 0, r4 = 0, r12 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = (u32)param_1;
    for (;;) {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        wr32(r1 + 0x1cu, r31);
        wr32(r1 + 0x18u, r30);
        wr32(r1 + 0x14u, r29);
        r29 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8017d1a0u, &a);
        f1 = tc_lastf();
        r30 = r29;
        r31 = 0u;
        for (;;) {
            if (rd32(r30 + 8u) != 0u) {
                a.r[0] = r30;
                r3 = tc_call(0x8007b09cu, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x18u);
                lr = 0x8017cbb4u;
                if (r12 == 0x8017cb70u) break;
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
            } else {
                r31 = r31 + 1u;
                r30 = r30 + 0x1cu;
                if (r31 >= 4u) {
                    a.r[0] = r29;
                    r3 = tc_call(0x8017bd64u, &a);
                    f1 = tc_lastf();
                    r3 = tc_call(0x8017e4bcu, &a);
                    f1 = tc_lastf();
                    a.r[0] = r29;
                    r3 = tc_call(0x8017dc34u, &a);
                    f1 = tc_lastf();
                    return;
                }
            }
        }
    }
}
