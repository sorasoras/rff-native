#include "tc_rt.h"

void fn_801d1878(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 != 0u) {
        return;
    }
    r3 = rd32((u32)param_1 + 0x39cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 == 0u) {
            a.r[0] = rd32((u32)param_1 + 0x39cu);
            (void)tc_call(0x80157e6cu, &a);
            wr32((u32)param_1 + 0x39cu, 0u);
        } else {
            f0 = (f64)rdf32(0x80575ea8u);
            wrf32d(0x817fdfecu, f0);
            wrf32d(0x817fdfe8u, f0);
            wrf32d(0x817fdfe4u, f0);
            a.r[0] = (u32)param_1;
            a.r[1] = rd32((u32)param_1 + 0x70u);
            a.r[2] = 0x3fu;
            a.r[3] = 0x817fdfe4u;
            r3 = tc_call(0x801d05a0u, &a);
            if (r3 != 0u) {
                r3 = rd32(0x817fdfe8u);
                r0 = rd32(0x817fdfecu);
                wr32(0x817fdfd8u, rd32(0x817fdfe4u));
                wr32(0x817fdfdcu, r3);
                wr32(0x817fdfe0u, r0);
                a.r[0] = rd32((u32)param_1 + 0x39cu);
                a.r[1] = 0x817fdfd8u;
                (void)tc_call(0x8015811cu, &a);
            }
        }
    }
    return;
}
