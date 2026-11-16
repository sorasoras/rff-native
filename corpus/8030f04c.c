#include "tc_rt.h"

u32 fn_8030f04c(u32 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    wr32(param_1, 0u);
    if (param_2 != 0u) {
        r30 = rd32(param_2);
        c0eq = r30 == 0u;
        if (!c0eq) {
            if (c0eq) {
                r30 = 0u;
            } else {
                a.r[0] = r30;
                a.r[1] = param_2;
                a.f[0] = 0.0;
                r3 = tc_call(rd32(rd32(r30) + 8u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                for (;;) {
                    if (r3 == 0u) {
                        r0 = 0u;
                        break;
                    }
                    if (r3 == 0x80571df0u) {
                        r0 = 1u;
                        break;
                    }
                    r3 = rd32(r3);
                }
                if (r0 == 0u) {
                    r30 = 0u;
                }
            }
            if (r30 != 0u) {
                wr32(param_1, r30);
                a.r[0] = r30;
                a.r[1] = r4;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r30) + 0x18u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 != 0u) {
                    r3 = rd32(param_1);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 0x1cu), &a);
                }
                wr32(rd32(param_1) + 0x234u, param_1);
            }
        }
    }
    return param_1;
}
