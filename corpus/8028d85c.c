#include "tc_rt.h"

void fn_8028d85c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32(param_1 + 0xcu);
    (void)tc_call(0x8028b2f4u, &a);
    for (;;) {
        r31 = rd32(param_1);
        if (r31 == 0u || (s32)rd32(r31 + 0xcu) > 0) break;
        a.r[0] = param_1;
        a.r[1] = r31;
        f1 = tc_callf(0x8028b46cu, &a);
        r4 = tc_lastr4();
        r12 = rd32(r31 + 8u);
        if (r12 != 0u) {
            a.r[0] = r31;
            a.r[1] = r4;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        } else {
            if ((u32)rd16(r31 + 0x14u) != 0u) {
                a.r[0] = 8u;
                r3 = tc_call(0x8028a0d4u, &a);
                if (r3 != 0u) {
                    wr16(r3, rd16(r31 + 0x14u));
                    a.r[0] = r3;
                    (void)tc_call(0x8028d750u, &a);
                }
            }
        }
    }
    if (r31 == 0u) {
        a.r[0] = (u32)rd8(param_1 + 0x10u);
        (void)tc_call(0x8028b258u, &a);
    }
    return;
}
