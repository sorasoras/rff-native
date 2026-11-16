#include "tc_rt.h"

void fn_800dc730(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x38u;
    a.r[1] = (u32)param_1 + 0x82cu;
    r3 = tc_call(0x8014d88cu, &a);
    if (r3 != 0u) {
        f0 = (f64)rdf32(0x80573a48u);
        wr32(r3 + 0x34u, 0x80356a60u);
        r5 = r3;
        r4 = 0u;
        wr32(r3, (u32)param_1 + 0x82cu);
        wrf32d(r3 + 0x2cu, f0);
        wrf32d(r3 + 0x30u, f0);
        while ((s32)r4 < 10) {
            r4 = r4 + 5u;
            wr32(r5 + 4u, 0u);
            wr32(r5 + 8u, 0u);
            wr32(r5 + 0xcu, 0u);
            wr32(r5 + 0x10u, 0u);
            wr32(r5 + 0x14u, 0u);
            r5 = r5 + 0x14u;
        }
    }
    wr32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu), r3);
    return;
}
