#include "tc_rt.h"

void fn_8014e420(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    f0 = (f64)rdf32(0x80574760u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r5 = rd32((u32)param_1 + 0x78u);
    wrf32d(0x817fdfd4u, f0);
    wrf32d(0x817fdfd0u, f0);
    wrf32d(0x817fdfccu, f0);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfc4u, f0);
    wrf32d(0x817fdfc0u, f0);
    wrf32d(0x817fdfbcu, f0);
    wrf32d(0x817fdfb8u, f0);
    wrf32d(0x817fdfb4u, f0);
    wrf32d(0x817fdfb4u, (f64)rdf32(r5 + 0xcu));
    wrf32d(0x817fdfb8u, (f64)rdf32(r5 + 0x1cu));
    wrf32d(0x817fdfbcu, (f64)rdf32(r5 + 0x2cu));
    a.r[0] = r5;
    a.r[1] = 0u;
    r3 = tc_call(0x80031cf8u, &a);
    if (r3 != 0u) {
        r6 = rd32(r3 + 0x50u);
        f4 = (f64)rdf32(0x80574760u);
        f2 = (f64)rdf32(r6 + 0x1cu);
        f3 = (f64)rdf32(r6 + 0xcu);
        f0 = (f64)(f32)(f2 - (f64)rdf32(0x817fdfb8u));
        f1 = (f64)rdf32(r6 + 0x2cu);
        wrf32d(0x817fdf9cu, f3);
        f0 = (f64)(f32)(f2 - f0);
        wrf32d(0x817fdfa0u, f4);
        r7 = rd32(0x817fdf9cu);
        wrf32d(0x817fdfa4u, f1);
        wrf32d(0x817fdfa0u, f0);
        r0 = rd32(0x817fdfa4u);
        r6 = rd32(0x817fdfa0u);
        wrf32d(0x817fdfb0u, f4);
        wrf32d(0x817fdf7cu, f4);
        wrf32d(0x817fdf84u, f4);
        wrf32d(0x817fdfccu, f3);
        wrf32d(0x817fdfd0u, f2);
        wrf32d(0x817fdfd4u, f1);
        wr32(0x817fdf90u, r7);
        wr32(0x817fdf94u, r6);
        wr32(0x817fdf98u, r0);
        a.r[0] = 0x817fdf90u;
        a.r[1] = 0x817fdfb4u;
        a.r[2] = 0x817fdf90u;
        (void)tc_call(0x802343a4u, &a);
        f2 = (f64)rdf32(0x817fdf90u);
        r0 = 0u;
        f0 = (f64)rdf32(0x80574760u);
        f1 = (f64)rdf32(0x817fdf98u);
        wrf32d(0x817fdfb4u, f2);
        wrf32d(0x817fdfbcu, f1);
        wrf32d(0x817fdfb8u, f0);
        if ((f0 == f2 && f0 == f0) && f0 == f1) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            f1 = (f64)rdf32(0x80574760u);
            r0 = 0u;
            if ((f1 == (f64)rdf32(0x817fdfb4u) && f1 == (f64)rdf32(0x817fdfb8u)) && f1 == (f64)rdf32(0x817fdfbcu)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = 0x817fdfb4u;
                a.r[1] = 0x817fdfb4u;
                (void)tc_call(0x802343e4u, &a);
            }
        }
        f1 = (f64)rdf32(0x817fdfb8u);
        f0 = (f64)rdf32(0x817fdfbcu);
        wrf32d(0x817fdfc0u, (f64)rdf32(0x817fdfb4u));
        wrf32d(0x817fdfc4u, f1);
        wrf32d(0x817fdfc8u, f0);
    }
    r3 = rd32((u32)param_1 + 0x11cu);
    f1 = (f64)rdf32(0x80574760u);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32(r3 + 0x78u);
    }
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x80031998u, &a);
        a.r[0] = 0x817fdfe4u;
        a.r[1] = 0x817fdfd8u;
        f1 = tc_callf(0x802344e8u, &a);
        wrf32d((u32)param_1 + 0x264u, (f64)(f32)((f64)rdf32(0x80574778u) * f1));
    }
    a.f[0] = (f64)rdf32(0x80574760u);
    a.f[1] = f1;
    a.r[0] = (u32)param_1 + 0x210u;
    a.r[1] = 0x817fdfccu;
    a.r[2] = 0x817fdfc0u;
    a.r[3] = (u32)param_1 + 0x220u;
    (void)tc_call(0x80148000u, &a);
    wr32((u32)param_1 + 0x240u, 1u);
    return;
}
