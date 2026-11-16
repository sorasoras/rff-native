#include "tc_rt.h"

void fn_802a3000(u32 param_r3)
{
    u32 c0eq = 0, c1gt = 0, c6eq = 0, r4 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    c6eq = (u32)rd8(0x80540a18u) == 0u;
    if (!c6eq) {
        c1gt = param_r3 > 0x10u;
        if (!c1gt) {
            r28 = param_r3 * 0x34u;
            r29 = r28 - 0x7fabf9e8u;
            c0eq = (u32)rd8(r28 - 0x7fabf9e8u) == 0u;
            if (!c0eq) {
                if (!c6eq && !c1gt && !c0eq) {
                    wr8(r29 + 0xcu, 1u);
                    a.r[0] = r29 + 0x1cu;
                    f1 = tc_callf(0x8028d290u, &a);
                    if ((u32)rd8(r29 + 0xau) == 1u) {
                        wr8(r29 + 0xcu, 1u);
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = param_r3;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802a368cu, &a);
                    }
                }
                wr8(r29, 0u);
                r4 = r28 - 0x7fabf9e8u;
                wr8(r4 + 0x10u, 0u);
                wr16(r4 + 0x16u, 0u);
                wr16(r4 + 0x14u, 0u);
            }
        }
    }
    return;
}
