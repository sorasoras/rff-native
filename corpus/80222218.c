#include "tc_rt.h"

void fn_80222218(f64 param_1, f64 param_2, f64 param_3, s32 param_4, s32 param_5, u32 param_6)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfc4u, 0u);
    a.r[0] = (u32)param_4;
    a.r[1] = (u32)param_5;
    r3 = tc_call(0x802223d8u, &a);
    if (r3 != 0u) {
        f0 = (f64)rdf32(0x80576a60u);
        f2 = (f64)rdf32(0x80570a10u);
        f5 = (f64)(f32)(f0 * param_2);
        f3 = (f64)rdf32(0x80576a64u);
        f6 = (f64)(f32)(f0 * param_3);
        wrf32d(0x817fdfa8u, f5);
        wrf32d(0x817fdfb4u, -f5);
        wrf32d(0x817fdfb8u, -f2);
        r31 = (u32)param_4 + ((u32)param_5 * 0x74u) + 0xcu;
        wrf32d(0x817fdfbcu, -f6);
        wrf32d(0x817fdfacu, f2);
        wrf32d(0x817fdfb0u, f6);
        a.r[0] = 0x817fdfb4u;
        a.r[1] = param_6;
        a.r[2] = 0x817fdfb4u;
        (void)tc_call(0x80234380u, &a);
        a.r[0] = 0x817fdfa8u;
        a.r[1] = param_6;
        a.r[2] = 0x817fdfa8u;
        (void)tc_call(0x80234380u, &a);
        a.f[0] = (f64)(f32)(f3 * param_1);
        a.r[0] = r31;
        a.r[1] = param_6;
        a.r[2] = 0x817fdfb4u;
        a.r[3] = 0x817fdfa8u;
        (void)tc_call(0x800ca4dcu, &a);
        wr32(r31 + 0x18u, 1u);
        a.r[0] = r31;
        (void)tc_call(0x800cb55cu, &a);
    }
    return;
}
