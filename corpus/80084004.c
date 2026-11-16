#include "tc_rt.h"

void fn_80084004(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x80u);
    if ((u32)((s32)r4 >> 31) != 0u) {
        if ((u32)((s32)((r4 << 2u) & 0xc0000000u) >> 31) != 0u && (u32)((s32)((r4 << 4u) & 0xc0000000u) >> 31) != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x70u);
            a.r[1] = 0u;
            (void)tc_call(0x800355acu, &a);
        }
        r3 = rd32((u32)param_1 + 0x80u);
        if ((u32)((s32)((r3 << 5u) & 0xc0000000u) >> 31) != 0u) {
            f1 = (f64)rdf32(0x805728f0u);
            f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xa0u) + (f64)rdf32((u32)param_1 + 0x9cu));
            wrf32d((u32)param_1 + 0xa0u, f2);
            if ((f2 > f1) || (f2 == f1)) {
                f0 = (f64)rdf32(0x805728f8u);
                wrf32d((u32)param_1 + 0xa0u, f1);
                wrf32d((u32)param_1 + 0x9cu, f0);
                wr32((u32)param_1 + 0x80u, r3 & 0xfbffffffu);
            } else {
                f0 = (f64)rdf32(0x805728f4u);
                if ((f2 < f0) || (f2 == f0)) {
                    wrf32d((u32)param_1 + 0xa0u, f0);
                }
            }
        }
    }
    return;
}
