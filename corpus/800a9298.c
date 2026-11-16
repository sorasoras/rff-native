#include "tc_rt.h"

void fn_800a9298(f64 param_1, f64 param_2, f64 param_3, f64 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    u32 c0eq = 0, c0gt = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f27 = 0.0, f28 = 0.0, f30 = 0.0;
    TcArgs a = {0};
    f2 = param_2;
    f3 = param_3;
    f4 = param_4;
    wr32(0x817fdf70u, 0x817fe000u);
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
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    f30 = param_2;
    r31 = 0u;
    if ((param_8 & 8u) != 0u) {
        r31 = 1u;
    } else {
        if ((param_8 & 0x10u) != 0u) {
            r31 = 0u;
        }
    }
    r8 = 0x804890d4u;
    r7 = rd32(0x804890d4u);
    r4 = rd32(0x804890d8u);
    r0 = rd32(0x804890dcu);
    wr32(0x817fdf84u, r7);
    wr32(0x817fdf88u, r4);
    wr32(0x817fdf8cu, r0);
    if ((param_8 & 1u) != 0u) {
        f0 = (f64)rdf32(0x80572b78u);
        f2 = (f64)rdf32(param_7);
        f1 = (f64)rdf32(param_7 + 4u);
        c0gt = param_3 > f0;
        c0eq = param_3 == f0;
        f0 = (f64)rdf32(param_7 + 8u);
        wrf32d(param_5 + 0x190u, f2);
        wrf32d(param_5 + 0x194u, f1);
        wrf32d(param_5 + 0x198u, f0);
        c0eq = c0gt || c0eq;
        if (c0eq) {
            f27 = param_2;
            if ((param_8 & 0x20u) != 0u) {
                a.r[0] = param_5;
                a.r[1] = r4;
                a.r[2] = param_7;
                a.r[3] = param_8;
                a.r[4] = r7;
                a.r[5] = 0x804890d4u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = param_3;
                a.f[3] = param_4;
                r3 = tc_call(rd32(rd32(param_5) + 0x28u), &a);
                a.r[0] = param_5;
                a.r[1] = r3;
                a.r[2] = param_7;
                f1 = tc_callf(0x8007eeacu, &a);
                f27 = f1;
            }
            a.f[0] = param_3;
            a.r[0] = 0x817fdf84u;
            a.r[1] = 0x817fdf84u;
            (void)tc_call(0x802343c8u, &a);
            r3 = rd32(0x817fdf88u);
            r0 = rd32(0x817fdf8cu);
            wr32(0x817fdf78u, rd32(0x817fdf84u));
            wr32(0x817fdf7cu, r3);
            wr32(0x817fdf80u, r0);
            a.f[0] = f27;
            f1 = tc_callf(0x80262704u, &a);
            f28 = (f64)(f32)f1;
            a.f[0] = f27;
            f1 = tc_callf(0x80262b10u, &a);
            r7 = 0u;
            r8 = 0u;
            f4 = (f64)(f32)f1;
            f1 = (f64)rdf32(0x817fdf80u);
            f3 = (f64)rdf32(0x817fdf78u);
            f2 = ppc_fmadds(f3, f28, (f64)(f32)(f1 * f4));
            wrf32d(0x817fdf84u, f2);
            wrf32d(0x817fdf8cu, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f28)));
            wrf32d(param_5 + 0x17cu, f2);
            wrf32d(param_5 + 0x180u, (f64)rdf32(0x817fdf88u));
            wrf32d(param_5 + 0x184u, (f64)rdf32(0x817fdf8cu));
        }
    }
    if ((param_8 & 2u) != 0u) {
        if ((f64)rdf32(0x80572b90u) < param_2) {
            f30 = (f64)(f32)(param_2 - (f64)rdf32(0x80572b98u));
        } else {
            f0 = (f64)rdf32(0x80572b9cu);
            if ((f0 > param_2) || (f0 == param_2)) {
                f30 = (f64)(f32)((f64)rdf32(0x80572b98u) + param_2);
            }
        }
        f0 = (f64)rdf32(0x80572b78u);
        wrf32d(param_5 + 0x19cu, f30);
        if ((param_4 > f0) || (param_4 == f0)) {
            wrf32d(param_5 + 0x188u, param_4);
        }
    }
    a.r[0] = param_5;
    a.r[1] = param_6;
    a.r[2] = r31;
    a.r[3] = 1u;
    a.r[4] = r7;
    a.r[5] = r8;
    a.f[0] = param_1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    (void)tc_call(rd32(rd32(param_5) + 0x54u), &a);
    return;
}
