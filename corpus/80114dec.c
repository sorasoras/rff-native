#include "tc_rt.h"

void fn_80114dec(u32 param_1)
{
    u32 c0eq = 0, lr = 0, r1 = 0, r3 = 0, r12 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    for (;;) {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        wr32(r1 + 0x1cu, r31);
        r31 = 0xffffffffu;
        wr32(r1 + 0x18u, 0u);
        wr32(r1 + 0x14u, r29);
        wr32(r1 + 0x10u, r28);
        r28 = 0u;
        r29 = rd32(r3);
        for (;;) {
            wr32(r29 + 0x40u, 0u);
            wr32(r29 + 0x44u, 0xffffffffu);
            wr32(r29 + 0x4cu, 0u);
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 0x40u;
            f1 = tc_callf(0x8000443cu, &a);
            r3 = tc_lastr();
            r3 = rd32(r29 + 0x48u);
            c0eq = r3 == 0u;
            if (!c0eq) {
                if (!c0eq) {
                    r12 = rd32(r3 + 0x30u);
                    r12 = rd32(r12 + 8u);
                    lr = 0x80114e58u;
                    if (r12 == 0x80114decu) break;
                    a.r[0] = r3;
                    a.r[1] = 1u;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                }
                wr32(r29 + 0x48u, 0u);
            }
            r28 = r28 + 1u;
            r29 = r29 + 0x50u;
            if ((s32)r28 >= 96) {
                return;
            }
        }
    }
}
