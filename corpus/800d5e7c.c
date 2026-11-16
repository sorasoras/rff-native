#include "tc_rt.h"

void fn_800d5e7c(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x98u) == 1u && rd32(param_1 + 0x7cu) != 0u) {
        r4 = rd32(param_1 + 0xa4u);
        if (r4 != 0u) {
            wr32(r4 + 0xcu, 1u);
        }
    }
    if (rd32(param_1 + 0x98u) != 2u) {
        if (rd32(param_1 + 0xa4u) != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r4 = rd32(param_1 + 0xa4u);
            wrf32d(r4 + 0x2cu, (f64)rdf32(r3));
            wrf32d(r4 + 0x30u, (f64)rdf32(r3 + 4u));
            wrf32d(r4 + 0x34u, (f64)rdf32(r3 + 8u));
        } else {
            r4 = rd32(param_1 + 0x9cu);
            wr32(param_1 + 0x98u, 1u);
            if (r4 != 0u && rd32(r4 + 0xb8u) == 0u) {
                a.r[0] = r4;
                a.r[1] = 0x2e8u;
                a.r[2] = 1u;
                a.r[3] = 1u;
                (void)tc_call(0x800c494cu, &a);
                wr32(param_1 + 0x9cu, 0u);
            }
        }
    }
    return;
}
