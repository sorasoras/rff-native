#include "tc_rt.h"

void fn_8018cf24(s32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r7 = 0u;
    r5 = 0u;
    r6 = rd32((u32)param_1 + 0x8cu);
    r4 = r6 + 1u;
    r6 = (u32)ppc_divw((s32)rd32((u32)param_1 + 0x88u), (s32)r6);
    ctr = r4;
    if ((s32)r4 > 0) {
        while ((s32)rd32((u32)param_1 + 0x5cu) >= (s32)(r5 + r6)) {
            r5 = r5 + r6;
            r7 = r7 + 1u;
            ctr = ctr - 1u;
            if (ctr == 0u) break;
        }
    }
    if (rd32((u32)param_1 + 0x60u) != r7) {
        f1 = tc_callf(0x8018cc50u, &a);
        f1 = (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0x58u));
        a.f[0] = f1;
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8018ccb0u, &a);
    }
    return;
}
