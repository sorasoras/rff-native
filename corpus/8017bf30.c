#include "tc_rt.h"

void fn_8017bf30(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = param_1 + 0x10000u;
    r31 = param_1;
    r30 = 0x3e8u;
    r0 = rd32(r4 + 0x5b0u) - 1u;
    wr32(r4 + 0x5b0u, r0);
    if ((s32)r0 < 0) {
        r3 = tc_call(0x80040b64u, &a);
        f1 = tc_lastf();
        r4 = param_1 + 0x10000u;
        wr32(r4 + 0x5b0u, 0xb4u);
        r5 = (ppc_mulhwu(0x4ec4ec4fu, r3) >> 2u) & 0x3fffffffu;
        r3 = r3 - (r5 * 0xdu);
        r30 = r3 + 5u;
    }
    r29 = r30;
    r28 = 0u;
    do {
        r27 = rd32(r31);
        while (r27 != 0u) {
            r3 = r27;
            r27 = rd32(r27);
            r3 = rd32(r3 + 8u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
            r4 = tc_lastr4();
            r5 = 0u;
            if ((rd32(0x8057118cu) & 0x20u) != 0u) {
                r29 = r29 - 1u;
                if (r29 == 0u) {
                    r29 = r30;
                }
            }
        }
        r28 = r28 + 1u;
        r31 = r31 + 0x1cu;
    } while (r28 < 4u);
    return;
}
