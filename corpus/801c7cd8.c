#include "tc_rt.h"

u32 fn_801c7cd8(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    f4 = (f64)rdf32(0x80575db8u);
    wr32(0x817fe004u, 0x817ff000u);
    f0 = (f64)rdf32(0x80575dc0u);
    wr32(0x817fdffcu, 0u);
    r3 = (u32)param_1 + 0x80u;
    f2 = (f64)rdf32(0x804890ccu);
    f3 = (f64)rdf32(0x804890c8u);
    wrf32d(0x817fdfbcu, f4);
    f1 = (f64)rdf32(0x804890d0u);
    wrf32d(0x817fdfa4u, f4);
    wrf32d(0x817fdfc4u, f4);
    wrf32d(0x817fdf98u, f4);
    wrf32d(0x817fdf94u, f4);
    wrf32d(0x817fdf90u, f4);
    wrf32d(0x817fdfd0u, f4);
    wrf32d(0x817fdfccu, f4);
    wrf32d(0x817fdfc8u, f4);
    wr32(0x817fdf88u, 0u);
    wrf32d(0x817fdf9cu, f3);
    wrf32d(0x817fdfa0u, f2);
    wrf32d(0x817fdfa4u, f1);
    wrf32d(0x817fdfbcu, f3);
    wrf32d(0x817fdfc0u, f2);
    wrf32d(0x817fdfc4u, f1);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wrf32d(0x817fdf8cu, f0);
    wrf32d(0x817fdfe0u, f4);
    wrf32d(0x817fdfdcu, f4);
    wrf32d(0x817fdfd8u, f4);
    wrf32d(0x817fdfd4u, f4);
    wrf32d(0x817fdfb4u, f4);
    wrf32d(0x817fdfb0u, f4);
    wrf32d(0x817fdfacu, f4);
    wrf32d(0x817fdfa8u, f4);
    if (r3 != 0u) {
        a.f[0] = (f64)rdf32((u32)param_3 + 0x20u);
        a.r[0] = r3;
        a.r[1] = 0x817fdf88u;
        a.r[2] = (u32)param_3 + 8u;
        a.r[3] = (u32)param_3 + 0x14u;
        r3 = tc_call(0x800ca994u, &a);
        if (r3 != 0u) {
            r3 = 1u;
            wrf32d(param_2, (f64)rdf32(0x817fdf90u));
            wrf32d(param_2 + 4u, (f64)rdf32(0x817fdf94u));
            wrf32d(param_2 + 8u, (f64)rdf32(0x817fdf98u));
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
