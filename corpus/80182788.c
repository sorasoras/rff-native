#include "tc_rt.h"

u32 fn_80182788(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xe0u) == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 0x170u);
        f1 = tc_callf(0x80182abcu, &a);
        wrf32d(param_2, (f64)(f32)((f64)rdf32(param_2) + f1));
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 0x170u);
        f1 = tc_callf(0x80182af0u, &a);
        if ((f64)rdf32(param_2) > f1) {
            a.r[0] = (u32)param_1;
            a.r[1] = rd32((u32)param_1 + 0x170u);
            f1 = tc_callf(0x80182af0u, &a);
            wrf32d(param_2, f1);
        }
        r0 = rd32((u32)param_1 + 0x17cu) - 1u;
        wr32((u32)param_1 + 0x17cu, r0);
        if ((s32)r0 > 0) {
            return 1u;
        }
        wr32((u32)param_1 + 0xe0u, 1u);
    } else {
        f0 = (f64)(f32)((f64)rdf32(param_2) * (f64)rdf32((u32)param_1 + 0x10cu));
        wrf32d(param_2, f0);
        if (f0 < (f64)rdf32((u32)param_1 + 0x11cu)) {
            wr32((u32)param_1 + 0x170u, 0u);
        } else {
            if (f0 < (f64)rdf32((u32)param_1 + 0x118u)) {
                wr32((u32)param_1 + 0x170u, 1u);
            }
        }
        f1 = (f64)rdf32(param_2);
        f0 = (f64)rdf32(0x805750d4u);
        if ((f1 < f0) || (f1 == f0)) {
            wrf32d(param_2, (f64)rdf32(0x805750b8u));
        }
    }
    return 1u;
}
