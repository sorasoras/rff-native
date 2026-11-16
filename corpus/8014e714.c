#include "tc_rt.h"

void fn_8014e714(s32 param_1, u32 param_2, s32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdf90u, 0x817fe000u);
    f4 = (f64)rdf32(0x80574760u);
    wr32(0x817fe004u, 0x817ff000u);
    f0 = (f64)rdf32(0x8057477cu);
    f3 = (f64)rdf32(0x804890c8u);
    f2 = (f64)rdf32(0x804890ccu);
    wrf32d(0x817fdfccu, f4);
    f1 = (f64)rdf32(0x804890d0u);
    wrf32d(0x817fdfb4u, f4);
    wrf32d(0x817fdfd4u, f4);
    wrf32d(0x817fdfa8u, f4);
    wrf32d(0x817fdfa4u, f4);
    wrf32d(0x817fdfa0u, f4);
    wrf32d(0x817fdfe0u, f4);
    wrf32d(0x817fdfdcu, f4);
    wrf32d(0x817fdfd8u, f4);
    wr32(0x817fdf98u, 0u);
    wrf32d(0x817fdfacu, f3);
    wrf32d(0x817fdfb0u, f2);
    wrf32d(0x817fdfb4u, f1);
    wrf32d(0x817fdfccu, f3);
    wrf32d(0x817fdfd0u, f2);
    wrf32d(0x817fdfd4u, f1);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wrf32d(0x817fdf9cu, f0);
    wrf32d(0x817fdff0u, f4);
    wrf32d(0x817fdfecu, f4);
    wrf32d(0x817fdfe8u, f4);
    wrf32d(0x817fdfe4u, f4);
    wrf32d(0x817fdfc4u, f4);
    wrf32d(0x817fdfc0u, f4);
    wrf32d(0x817fdfbcu, f4);
    wrf32d(0x817fdfb8u, f4);
    a.f[0] = (f64)rdf32((u32)param_3 + 0x20u);
    a.r[0] = (u32)param_1 + 0x198u;
    a.r[1] = 0x817fdf98u;
    a.r[2] = (u32)param_3 + 8u;
    a.r[3] = (u32)param_3 + 0x14u;
    (void)tc_call(0x800ca994u, &a);
    return;
}
