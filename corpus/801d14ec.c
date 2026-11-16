#include "tc_rt.h"

u32 fn_801d14ec(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r4 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u && (u32)param_2 == 1u) {
        r4 = rd32(param_1 + 0x3a8u);
        c0eq = r4 == 0u;
        if ((s32)r4 > 0) {
            wr32(param_1 + 0x3a8u, r4 - 1u);
        } else {
            if (c0eq) {
                r4 = rd32(param_1 + 0x374u);
                wr32(param_1 + 0x3a8u, 0xffffffffu);
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(0x80575ed4u);
                (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            }
        }
    }
    return 1u;
}
