#include "tc_rt.h"

f64 fn_80179488(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    a.f[0] = (f64)rdf32((u32)param_1 + 0x100u);
    a.f[1] = (f64)rdf32((u32)param_1 + 0x108u);
    a.f[2] = (f64)(f32)((f64)rdf32((u32)param_1 + 0x104u) + (f64)rdf32((u32)param_1 + 0x134u));
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = 0x817fdfdcu;
    a.r[2] = 0u;
    f1 = tc_callf(0x8008a2fcu, &a);
    f31 = f1;
    a.f[0] = (f64)rdf32((u32)param_1 + 0x100u);
    a.f[1] = (f64)rdf32((u32)param_1 + 0x108u);
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 0u;
    f1 = tc_callf(0x80089fc8u, &a);
    f0 = (f64)rdf32(0x80574fe4u);
    if (((f31 > f0) || (f31 == f0)) && ((f1 > f0) || (f1 == f0))) {
        f1 = (f64)rdf32((u32)param_1 + 0x104u);
    } else {
        f0 = (f64)rdf32(0x80574fe4u);
        if ((f31 > f0) || (f31 == f0)) {
            wr32((u32)param_1 + 0xe4u, rd32(0x817fdfd8u));
        } else {
            if ((f1 > f0) || (f1 == f0)) {
                f1 = f31;
                wr32((u32)param_1 + 0xe4u, rd32(0x817fdfdcu));
            } else {
                f0 = (f64)rdf32((u32)param_1 + 0x104u);
                f2 = (f64)(f32)(f0 - f31);
                f0 = (f64)(f32)(f0 - f1);
                f2 = ppc_fabs(f2);
                f3 = ppc_fabs(f0);
                f0 = (f64)(f32)f2;
                f2 = (f64)(f32)f3;
                if ((f2 < f0) || (f2 == f0)) {
                    wr32((u32)param_1 + 0xe4u, rd32(0x817fdfd8u));
                } else {
                    f1 = f31;
                    wr32((u32)param_1 + 0xe4u, rd32(0x817fdfdcu));
                }
            }
        }
    }
    return f1;
}
