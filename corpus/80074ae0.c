#include "tc_rt.h"

void fn_80074ae0(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = 0x80470000u;
    r31 = rd32(0x8046adc4u);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r30 = rd32(r3 + 8u);
        r3 = 0u;
        r0 = rd32(r30 + 0x88u);
        if (r0 == 0u) {
            r3 = 1u;
        } else {
            if ((u32)param_1 != 0u && r0 == 1u) {
                r3 = 1u;
            }
        }
        if (r3 != 0u && ((rd32(r30 + 0x84u) != 0u || (u32)param_1 != 0u) || rd32(r30 + 0x98u) != 0u)) {
            a.r[0] = r30;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r30) + 0x18u), &a);
            r4 = tc_lastr4();
            if (r30 != 0u) {
                a.r[0] = r30;
                a.r[1] = 1u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r30) + 8u), &a);
                r4 = tc_lastr4();
            }
        }
    }
    return;
}
