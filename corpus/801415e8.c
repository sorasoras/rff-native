#include "tc_rt.h"

u32 fn_801415e8(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    a.r[0] = r3;
    r3 = tc_call(0x800abc3cu, &a);
    if (r3 != 0u) {
        r3 = rd32((u32)param_2 + 0x70u);
        r4 = rd32(r3 + 0x48u);
        if (r4 != 0u) {
            f2 = (f64)rdf32((u32)param_1 + 0x10cu);
            f1 = (f64)rdf32(0x80574454u);
            f3 = (f64)rdf32(r3 + 0x54u);
            if (!(f2 < f1)) {
                if (f2 == f3) {
                    if (!((f64)rdf32(r3 + 0x58u) > f1)) {
                        if ((f3 < f1) || (f3 == f1)) {
                            wrf32d((u32)param_1 + 0x10cu, (f64)(f32)(f2 - (f64)rdf32(0x80574458u)));
                            a.r[0] = (u32)param_1;
                            (void)tc_call(0x80141570u, &a);
                            r3 = 0u;
                            return r3;
                        }
                    } else {
                        f0 = (f64)rdf32(r4 + 0x18u);
                        if ((f3 > f0) || (f3 == f0)) {
                            a.r[0] = (u32)param_1;
                            (void)tc_call(0x80141570u, &a);
                            r3 = 0u;
                            return r3;
                        }
                    }
                    r3 = 1u;
                } else {
                    wrf32d((u32)param_1 + 0x10cu, f3);
                    r3 = 1u;
                }
            } else {
                wrf32d((u32)param_1 + 0x10cu, f3);
                r3 = 1u;
            }
        } else {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80141570u, &a);
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
