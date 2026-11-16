#include "tc_rt.h"

f64 fn_80115490(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    r5 = rd32((u32)param_1 + 0x78u);
    if (r5 != 0u) {
        if ((u32)((s32)rd32(r5 + 0x80u) >> 31) != 0u) {
            a.r[0] = param_2;
            a.r[1] = (u32)param_1 + 0x40u;
            r3 = tc_call(0x8010fd48u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                if (rd32((u32)param_1 + 0x70u) == 0u) {
                    f31 = (f64)rdf32(0x8057413cu);
                } else {
                    f0 = (f64)rdf32(0x80574124u);
                    wrf32d(0x817fdfe0u, f0);
                    wrf32d(0x817fdfdcu, f0);
                    wrf32d(0x817fdfd8u, f0);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x817fdfd8u;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32((u32)param_1 + 0x30u) + 0x18u), &a);
                    wrf32d(0x817fdfdcu, (f64)rdf32(0x80574124u));
                    a.r[0] = param_2;
                    a.r[1] = 0x817fdfd8u;
                    f1 = tc_callf(0x8010fed8u, &a);
                    f31 = f1;
                    a.f[0] = (f64)rdf32((u32)param_1 + 0x74u);
                    f1 = tc_callf(0x80262704u, &a);
                    if (f31 < (f64)(f32)f1) {
                        f31 = (f64)rdf32(0x805707e4u);
                    }
                }
            } else {
                f31 = (f64)rdf32(0x805707e4u);
            }
            f1 = f31;
        } else {
            f1 = (f64)rdf32(0x805707e4u);
        }
    } else {
        f1 = (f64)rdf32(0x805707e4u);
    }
    return f1;
}
