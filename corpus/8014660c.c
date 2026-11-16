#include "tc_rt.h"

void fn_8014660c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x290u) == 7u) {
        r3 = rd32((u32)param_1 + 0xa2cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800d6150u, &a);
            r3 = rd32((u32)param_1 + 0xa2cu);
            if (rd32((u32)param_1 + 0xa48u) == 0u) {
                wr32((u32)param_1 + 0xa48u, r3);
            }
            a.r[0] = rd32((u32)param_1 + 0xa2cu);
            a.r[1] = (u32)param_1;
            a.r[2] = 0x15u;
            (void)tc_call(0x800d612cu, &a);
            wr32((u32)param_1 + 0xa2cu, 0u);
        }
        r3 = rd32((u32)param_1 + 0xa3cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157e6cu, &a);
            wr32((u32)param_1 + 0xa3cu, 0u);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x801465c4u, &a);
        (void)tc_call(0x801428a0u, &a);
        r0 = rd32((u32)param_1 + 0x9cu);
        wr32((u32)param_1 + 0x290u, 0u);
        r0 = r0 & 0xfbffffffu;
        f1 = (f64)rdf32(0x805745d0u);
        wr32((u32)param_1 + 0x9cu, r0);
        a.f[0] = f1;
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 1u;
        (void)tc_call(0x800bf1d4u, &a);
    }
    return;
}
