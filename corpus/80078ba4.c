#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_80078ba4(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 c0lt = 0, r0 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
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
    f0 = (f64)rdf32(0x80572798u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa0u, 0u);
    wrf32d(0x817fdf9cu, f0);
    wrf32d(0x817fdf98u, f0);
    wrf32d(0x817fdf94u, f0);
    wrf32d(0x817fdf90u, f0);
    wrf32d(0x817fdf8cu, f0);
    wrf32d(0x817fdf88u, f0);
    r0 = rd32(param_6 + 4u);
    wr32(0x817fdf70u, rd32(param_6));
    wr32(0x817fdf74u, r0);
    wr32(0x817fdf78u, rd32(param_6 + 8u));
    a.r[0] = 0x817fdf70u;
    a.r[1] = param_5;
    a.r[2] = 0x817fdf70u;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x817fdf74u);
    f0 = (f64)rdf32(0x817fdf78u);
    wrf32d(0x817fdf88u, (f64)rdf32(0x817fdf70u));
    wrf32d(0x817fdf8cu, f1);
    wrf32d(0x817fdf90u, f0);
    a.r[0] = 0x817fdf88u;
    f1 = tc_callf(0x80234428u, &a);
    f31 = (f64)(f32)(param_1 + param_2);
    f0 = (f64)rdf32(0x80572798u);
    f29 = f1;
    f27 = (f64)(f32)(f31 * f31);
    if (f0 == f1) {
        wrf32d(0x817fdf94u, (f64)rdf32(param_5));
        wrf32d(0x817fdf98u, (f64)rdf32(param_5 + 4u));
        wrf32d(0x817fdf9cu, (f64)rdf32(param_5 + 8u));
    } else {
        wrf32d(0x817fdf84u, f0);
        wrf32d(0x817fdf80u, f0);
        wrf32d(0x817fdf7cu, f0);
        r0 = rd32(param_5 + 4u);
        wr32(0x817fdf64u, rd32(param_5));
        wr32(0x817fdf68u, r0);
        wr32(0x817fdf6cu, rd32(param_5 + 8u));
        a.r[0] = 0x817fdf64u;
        a.r[1] = param_4;
        a.r[2] = 0x817fdf64u;
        (void)tc_call(0x802343a4u, &a);
        f4 = (f64)rdf32(0x817fdf68u);
        f5 = (f64)rdf32(0x817fdf64u);
        f3 = (f64)rdf32(0x817fdf6cu);
        f0 = (f64)rdf32(0x817fdf90u);
        f1 = ppc_fmadds((f64)rdf32(0x817fdf88u), f5, (f64)(f32)((f64)rdf32(0x817fdf8cu) * f4));
        wrf32d(0x817fdf7cu, f5);
        wrf32d(0x817fdf80u, f4);
        f28 = ppc_fmadds(f0, f3, f1);
        wrf32d(0x817fdf84u, f3);
        a.r[0] = 0x817fdf7cu;
        f1 = tc_callf(0x80234428u, &a);
        f1 = (f64)(f32)(f1 - f27);
        f0 = (f64)rdf32(0x80572798u);
        f1 = (f64)(f32)(f29 * f1);
        f1 = ppc_fmsubs(f28, f28, f1);
        if ((f1 < f0) || (f1 == f0)) {
            f1 = (f64)(f32)px_fdiv(-f28, f29);
        } else {
            a.f[0] = f1;
            f1 = tc_callf(0x80262ec0u, &a);
            f1 = (f64)(f32)f1;
            f1 = (f64)(f32)px_fdiv((f64)(f32)(-f28 - f1), f29);
        }
        f0 = (f64)rdf32(0x80572798u);
        if ((f1 < f0) || (f1 == f0)) {
            wrf32d(0x817fdf94u, (f64)rdf32(param_5));
            wrf32d(0x817fdf98u, (f64)rdf32(param_5 + 4u));
            wrf32d(0x817fdf9cu, (f64)rdf32(param_5 + 8u));
        } else {
            f0 = (f64)rdf32(0x805727a8u);
            if ((f0 < f1) || (f0 == f1)) {
                wrf32d(0x817fdf94u, (f64)rdf32(param_6));
                wrf32d(0x817fdf98u, (f64)rdf32(param_6 + 4u));
                wrf32d(0x817fdf9cu, (f64)rdf32(param_6 + 8u));
            } else {
                a.f[0] = f1;
                a.r[0] = 0x817fdf94u;
                a.r[1] = param_5;
                a.r[2] = param_6;
                (void)tc_call(0x8004c6dcu, &a);
            }
        }
    }
    r6 = rd32(0x817fdf98u);
    r0 = rd32(0x817fdf9cu);
    wr32(0x817fdf58u, rd32(0x817fdf94u));
    wr32(0x817fdf5cu, r6);
    wr32(0x817fdf60u, r0);
    a.r[0] = 0x817fdf58u;
    a.r[1] = param_4;
    a.r[2] = 0x817fdf58u;
    (void)tc_call(0x802343a4u, &a);
    wrf32d(param_3, (f64)rdf32(0x817fdf58u));
    wrf32d(param_3 + 4u, (f64)rdf32(0x817fdf5cu));
    wrf32d(param_3 + 8u, (f64)rdf32(0x817fdf60u));
    a.r[0] = param_3;
    f1 = tc_callf(0x80234440u, &a);
    f29 = f1;
    if ((f64)rdf32(0x80572798u) != f1) {
        f1 = (f64)(f32)px_fdiv(param_1, f1);
        a.f[0] = f1;
        a.r[0] = param_3;
        a.r[1] = param_3;
        (void)tc_call(0x802343c8u, &a);
    }
    a.r[0] = param_3;
    a.r[1] = param_4;
    a.r[2] = param_3;
    (void)tc_call(0x80234380u, &a);
    f0 = (f64)(f32)((f64)rdf32(0x805727acu) + f31);
    c0lt = f29 < f0;
    return (((c0lt << 0x1fu) | ((f29 > f0) << 0x1eu) | ((c0lt || (f29 == f0)) << 0x1du) | (((f29 != f29) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
}
