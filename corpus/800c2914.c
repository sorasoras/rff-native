#include "tc_rt.h"

u32 fn_800c2914(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
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
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfb8u, 0u);
    r30 = 0x13u;
    wr32(0x817fdfb4u, 0u);
    a.f[0] = (f64)rdf32(rd32(param_1 + 0x70u) + 0x54u);
    r3 = tc_call(0x802558e4u, &a);
    f1 = tc_lastf();
    if (r3 == 2u) {
        f0 = (f64)rdf32(0x80572eacu);
        wrf32d(0x817fdfa8u, f0);
        wrf32d(0x817fdfa4u, f0);
        wrf32d(0x817fdfa0u, f0);
        a.r[0] = param_1 + 0x54cu;
        a.r[1] = 0x817fdfa0u;
        a.r[2] = 0xc8u;
        a.r[3] = 0x804890c8u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(param_1 + 0x54cu) + 0x34u), &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = 0x817fdfa0u;
            a.r[2] = 0x15u;
            a.r[3] = 0x804890c8u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x34u), &a);
        }
        r5 = rd32(0x804890d4u);
        f29 = (f64)rdf32(0x80572ec4u);
        r4 = rd32(0x804890d8u);
        r0 = rd32(0x804890dcu);
        wr32(0x817fdf94u, r5);
        f28 = (f64)rdf32(0x80572eecu);
        wr32(0x817fdf98u, r4);
        wr32(0x817fdf9cu, r0);
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0x804890d4u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
        f31 = f1;
        r3 = rd32(0x817fdf98u);
        r0 = rd32(0x817fdf9cu);
        wr32(0x817fdf88u, rd32(0x817fdf94u));
        wr32(0x817fdf8cu, r3);
        wr32(0x817fdf90u, r0);
        a.f[0] = f1;
        f1 = tc_callf(0x80262704u, &a);
        f30 = (f64)(f32)f1;
        a.f[0] = f31;
        f1 = tc_callf(0x80262b10u, &a);
        f2 = (f64)(f32)f1;
        f1 = (f64)rdf32(0x817fdf90u);
        f6 = (f64)rdf32(0x817fdf88u);
        f3 = (f64)rdf32(0x80572ef0u);
        f5 = (f64)(f32)(f1 * f2);
        f4 = (f64)rdf32(0x80572ef4u);
        f2 = -f2;
        f5 = ppc_fmadds(f6, f30, f5);
        wrf32d(0x817fdf9cu, ppc_fmadds(f6, f2, (f64)(f32)(f1 * f30)));
        wrf32d(0x817fdf94u, f5);
        a.f[0] = f28;
        a.f[1] = f29;
        a.f[2] = f3;
        a.f[3] = f4;
        a.r[0] = 0x80475e24u;
        a.r[1] = 0x817fdf94u;
        a.r[2] = 0x817fdfa0u;
        (void)tc_call(0x8017cc00u, &a);
    } else {
        if (rd32(param_1 + 0x110u) != 0u) {
            r30 = 0u;
            a.f[0] = (f64)rdf32(0x80572ea8u);
            a.r[0] = param_1;
            a.r[1] = 1u;
            a.r[2] = 0u;
            (void)tc_call(0x800bf1d4u, &a);
        }
    }
    return r30;
}
