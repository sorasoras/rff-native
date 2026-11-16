#include "tc_rt.h"

void fn_802c0040(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = 0u;
    while (r28 < (u32)rd16(param_r3 + 0x10u)) {
        a.r[0] = param_r3 + 0x18u;
        a.r[1] = r28 & 0xffffu;
        r3 = tc_call(0x802d7bccu, &a);
        f1 = tc_lastf();
        r30 = rd32(r3);
        r31 = r3;
        a.r[0] = r30;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r30) + 0xcu), &a);
        f1 = tc_lastf();
        for (;;) {
            if (r3 == 0u) {
                r0 = 0u;
                break;
            }
            if (r3 == 0x805474b0u) {
                r0 = 1u;
                break;
            }
            r3 = rd32(r3);
        }
        if (r0 == 0u) {
            r30 = 0u;
        }
        if (r30 != 0u) {
            r3 = rd32(r31 + 4u);
            a.r[0] = r3;
            a.r[1] = param_r4;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x50u), &a);
        }
        r28 = r28 + 1u;
    }
    return;
}
