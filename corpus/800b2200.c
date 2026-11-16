#include "tc_rt.h"

void fn_800b2200(f64 param_1, f64 param_2, s32 param_3, s32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r6 = 0;
    f64 f1 = 0.0, f3 = 0.0, f4 = 0.0, f29 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
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
    a.r[0] = (u32)param_3;
    r3 = tc_call(0x800b3344u, &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfb8u, rd32(r3));
    wr32(0x817fdfbcu, r0);
    wr32(0x817fdfc0u, rd32(r3 + 8u));
    a.r[0] = 0x817fdfb8u;
    a.r[1] = (u32)param_3 + 0xcf4u;
    a.r[2] = 0x817fdfb8u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfb8u;
    f1 = tc_callf(0x80234440u, &a);
    if (f1 > (f64)rdf32(0x80572bfcu)) {
        f1 = (f64)rdf32(0x80572bf8u);
        r0 = 0u;
        if (f1 == (f64)rdf32(0x817fdfb8u) && f1 == (f64)rdf32(0x817fdfbcu) && f1 == (f64)rdf32(0x817fdfc0u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfb8u;
            a.r[1] = 0x817fdfb8u;
            (void)tc_call(0x802343e4u, &a);
        }
        c0lt = param_4 < 2;
        if ((u32)param_4 == 2u) {
            r3 = rd32(0x817fdfbcu);
            r0 = rd32(0x817fdfc0u);
            wr32(0x817fdf94u, rd32(0x817fdfb8u));
            f1 = rdf64(0x80572c50u);
            wr32(0x817fdf98u, r3);
            wr32(0x817fdf9cu, r0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            f29 = (f64)(f32)f1;
            a.f[0] = rdf64(0x80572c50u);
            f1 = tc_callf(0x80262b10u, &a);
            f4 = (f64)(f32)f1;
            f1 = (f64)rdf32(0x817fdf9cu);
            f3 = (f64)rdf32(0x817fdf94u);
            wrf32d(0x817fdfb8u, ppc_fmadds(f3, f29, (f64)(f32)(f1 * f4)));
            wrf32d(0x817fdfc0u, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f29)));
        } else if (!c0lt) {
            if (param_4 < 4) {
                r3 = rd32(0x817fdfbcu);
                r0 = rd32(0x817fdfc0u);
                wr32(0x817fdf88u, rd32(0x817fdfb8u));
                f1 = rdf64(0x80572c58u);
                wr32(0x817fdf8cu, r3);
                wr32(0x817fdf90u, r0);
                a.f[0] = f1;
                f1 = tc_callf(0x80262704u, &a);
                f29 = (f64)(f32)f1;
                a.f[0] = rdf64(0x80572c58u);
                f1 = tc_callf(0x80262b10u, &a);
                f4 = (f64)(f32)f1;
                f1 = (f64)rdf32(0x817fdf90u);
                f3 = (f64)rdf32(0x817fdf88u);
                wrf32d(0x817fdfb8u, ppc_fmadds(f3, f29, (f64)(f32)(f1 * f4)));
                wrf32d(0x817fdfc0u, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f29)));
            }
        } else if (param_4 >= 1) {
            r3 = rd32(0x817fdfbcu);
            r0 = rd32(0x817fdfc0u);
            wr32(0x817fdfa0u, rd32(0x817fdfb8u));
            f1 = rdf64(0x80572c48u);
            wr32(0x817fdfa4u, r3);
            wr32(0x817fdfa8u, r0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            f29 = (f64)(f32)f1;
            a.f[0] = rdf64(0x80572c48u);
            f1 = tc_callf(0x80262b10u, &a);
            f4 = (f64)(f32)f1;
            f1 = (f64)rdf32(0x817fdfa8u);
            f3 = (f64)rdf32(0x817fdfa0u);
            wrf32d(0x817fdfb8u, ppc_fmadds(f3, f29, (f64)(f32)(f1 * f4)));
            wrf32d(0x817fdfc0u, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f29)));
        }
        a.f[0] = param_1;
        a.r[0] = 0x817fdfb8u;
        a.r[1] = 0x817fdfb8u;
        (void)tc_call(0x802343c8u, &a);
        r6 = rd32(0x817fdfbcu);
        r0 = rd32(0x817fdfc0u);
        wr32(0x817fdfacu, rd32(0x817fdfb8u));
        wr32(0x817fdfb0u, r6);
        wr32(0x817fdfb4u, r0);
        a.r[0] = 0x817fdfacu;
        a.r[1] = (u32)param_3 + 0xcf4u;
        a.r[2] = 0x817fdfacu;
        (void)tc_call(0x80234380u, &a);
        a.f[0] = param_2;
        a.r[0] = (u32)param_3;
        a.r[1] = 0x817fdfacu;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 1u;
        a.r[5] = 0u;
        (void)tc_call(0x800b2cdcu, &a);
    }
    return;
}
