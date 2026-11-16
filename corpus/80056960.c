#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_80056960(s32 param_1)
{
    u32 r0 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    f1 = (f64)rdf32(0x80572344u);
    wr32(0x817fe004u, 0x817ff000u);
    f0 = (f64)rdf32(0x80572388u);
    wr32(0x817fdffcu, 0u);
    wrf32d(0x817fdff0u, f1);
    wrf32d(0x817fdfecu, f1);
    wrf32d(0x817fdfe8u, f1);
    wrf32d(0x817fdfe4u, f1);
    wrf32d(0x817fdfe0u, f1);
    wrf32d(0x817fdfdcu, f1);
    wrf32d(0x817fdfd8u, f1);
    wrf32d(0x817fdfd4u, f1);
    wrf32d(0x817fdfd0u, f1);
    f2 = (f64)rdf32((u32)param_1 + 0x20cu);
    a.f[0] = (f64)(f32)(f0 * f2);
    a.f[1] = f2;
    a.r[0] = 0x817fdfd0u;
    (void)tc_call(0x80079000u, &a);
    f1 = (f64)rdf32((u32)param_1 + 0x214u);
    r5 = rd32(0x817fdfd4u);
    r0 = rd32(0x817fdfd8u);
    wr32(0x817fdfc4u, rd32(0x817fdfd0u));
    wr32(0x817fdfc8u, r5);
    wr32(0x817fdfccu, r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfc4u;
    a.r[1] = 0x817fdfc4u;
    (void)tc_call(0x802343c8u, &a);
    f2 = (f64)rdf32(0x817fdfc8u);
    f1 = (f64)rdf32(0x817fdfccu);
    wrf32d(0x817fdfe8u, (f64)rdf32(0x817fdfc4u));
    f0 = (f64)rdf32(0x80572388u);
    wrf32d(0x817fdfecu, f2);
    wrf32d(0x817fdff0u, f1);
    f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x20cu) * (f64)rdf32((u32)param_1 + 0x220u));
    a.f[0] = (f64)(f32)(f0 * f2);
    a.f[1] = f2;
    a.r[0] = 0x817fdfd0u;
    (void)tc_call(0x80079000u, &a);
    f1 = (f64)rdf32((u32)param_1 + 0x214u);
    r5 = rd32(0x817fdfd4u);
    r0 = rd32(0x817fdfd8u);
    wr32(0x817fdfb8u, rd32(0x817fdfd0u));
    wr32(0x817fdfbcu, r5);
    wr32(0x817fdfc0u, r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfb8u;
    a.r[1] = 0x817fdfb8u;
    (void)tc_call(0x802343c8u, &a);
    f2 = (f64)rdf32(0x817fdfb8u);
    f0 = (f64)rdf32(0x817fdfc0u);
    wrf32d(0x817fdfe0u, (f64)rdf32(0x817fdfbcu));
    f3 = (f64)rdf32(0x80572358u);
    wrf32d(0x817fdfdcu, f2);
    f1 = (f64)rdf32(0x80572344u);
    wrf32d(0x817fdfe4u, f0);
    f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x210u) - f3);
    wrf32d((u32)param_1 + 0x210u, f2);
    if ((f2 < f1) || (f2 == f1)) {
        wrf32d((u32)param_1 + 0x214u, f1);
        wrf32d((u32)param_1 + 0x20cu, f1);
        wr32((u32)param_1 + 0x204u, 0u);
    } else {
        f2 = (f64)(f32)px_fdiv(f2, (f64)rdf32((u32)param_1 + 0x218u));
        if (f2 < f1) {
            f2 = f1;
        } else {
            if (f3 < f2) {
                f2 = f3;
            }
        }
        wrf32d((u32)param_1 + 0x214u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x21cu) * f2));
        a.r[0] = 0x817fdfe8u;
        a.r[1] = (u32)param_1 + 0x134u;
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x80234380u, &a);
        a.r[0] = 0x817fdfdcu;
        a.r[1] = (u32)param_1 + 0x140u;
        a.r[2] = 0x817fdfdcu;
        (void)tc_call(0x80234380u, &a);
        wrf32d((u32)param_1 + 0x134u, (f64)rdf32(0x817fdfe8u));
        wrf32d((u32)param_1 + 0x138u, (f64)rdf32(0x817fdfecu));
        wrf32d((u32)param_1 + 0x13cu, (f64)rdf32(0x817fdff0u));
        wrf32d((u32)param_1 + 0x140u, (f64)rdf32(0x817fdfdcu));
        wrf32d((u32)param_1 + 0x144u, (f64)rdf32(0x817fdfe0u));
        wrf32d((u32)param_1 + 0x148u, (f64)rdf32(0x817fdfe4u));
    }
    return rd32((u32)param_1 + 0x204u);
}
