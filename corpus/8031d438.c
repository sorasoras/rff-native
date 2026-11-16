#include "tc_rt.h"

void fn_8031d438(u32 param_r3)
{
    u32 c0eq = 0, r0 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = rd32(param_r3 + 0x38u);
    r30 = 0u;
    while (r29 != 0u) {
        c0eq = rd32(r29 + 0xcu) == 1u;
        r28 = rd32(r29 + (u32)rd16(param_r3 + 0x42u) + 4u);
        if (c0eq) {
            if (!c0eq) {
                r0 = 0u;
            } else {
                r4 = (u32)rd16(param_r3 + 0x50u);
                wr16(param_r3 + 0x50u, (u16)(r4 - 1u));
                a.r[0] = r29;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r29 + 0x1cu) + 0xcu), &a);
                r4 = tc_lastr4();
                wr32(r29 + 0xcu, 2u);
                if (rd32(r29 + 0x10u) == 0u) {
                    a.r[0] = r29;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r29 + 0x1cu) + 8u), &a);
                }
                r0 = 1u;
            }
            r30 = r30 + r0;
        }
        r29 = r28;
    }
    return;
}
