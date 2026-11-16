#include "tc_rt.h"

u32 fn_800da36c(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x98u) == 0u) {
        r3 = 0u;
    } else {
        if (rd32((u32)param_3 + 4u) == 2u) {
            f1 = (f64)rdf32(0x805739f4u);
        } else {
            f1 = (f64)rdf32((u32)param_3 + 0x20u);
        }
        f5 = (f64)rdf32(0x805739e8u);
        f4 = (f64)rdf32(0x804890c8u);
        f3 = (f64)rdf32(0x804890ccu);
        wrf32d(0x817fdfbcu, f5);
        f0 = (f64)rdf32(0x805739f8u);
        wrf32d(0x817fdfa4u, f5);
        f2 = (f64)rdf32(0x804890d0u);
        wrf32d(0x817fdfc4u, f5);
        wrf32d(0x817fdf98u, f5);
        wrf32d(0x817fdf94u, f5);
        wrf32d(0x817fdf90u, f5);
        wrf32d(0x817fdfd0u, f5);
        wrf32d(0x817fdfccu, f5);
        wrf32d(0x817fdfc8u, f5);
        wr32(0x817fdf88u, 0u);
        wrf32d(0x817fdf9cu, f4);
        wrf32d(0x817fdfa0u, f3);
        wrf32d(0x817fdfa4u, f2);
        wrf32d(0x817fdfbcu, f4);
        wrf32d(0x817fdfc0u, f3);
        wrf32d(0x817fdfc4u, f2);
        wr32(0x817fdfecu, 0u);
        wr32(0x817fdfe4u, 0u);
        wr32(0x817fdfe8u, 0u);
        wrf32d(0x817fdf8cu, f0);
        wrf32d(0x817fdfe0u, f5);
        wrf32d(0x817fdfdcu, f5);
        wrf32d(0x817fdfd8u, f5);
        wrf32d(0x817fdfd4u, f5);
        wrf32d(0x817fdfb4u, f5);
        wrf32d(0x817fdfb0u, f5);
        wrf32d(0x817fdfacu, f5);
        wrf32d(0x817fdfa8u, f5);
        a.f[0] = f1;
        a.r[0] = (u32)param_1 + 0x80u;
        a.r[1] = 0x817fdf88u;
        a.r[2] = (u32)param_3 + 8u;
        a.r[3] = (u32)param_3 + 0x14u;
        r3 = tc_call(0x800ca994u, &a);
        if (r3 != 0u) {
            r3 = 1u;
            wrf32d(param_2, (f64)rdf32(0x817fdf90u));
            wrf32d(param_2 + 4u, (f64)rdf32(0x817fdf94u));
            wrf32d(param_2 + 8u, (f64)rdf32(0x817fdf98u));
        } else {
            r3 = 0u;
        }
    }
    return r3;
}
