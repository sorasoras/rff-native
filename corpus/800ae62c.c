#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_800ae62c(f64 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r6 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f24 = 0.0, f25 = 0.0;
    f64 f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
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
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, 0.0);
    wrf32d(0x817fdf8cu, 0.0);
    r9 = rd32(param_5);
    wr32(0x817fdf7cu, 0u);
    r8 = rd32(param_5 + 4u);
    wr32(0x817fdf78u, 0u);
    r0 = rd32(param_5 + 8u);
    wr32(0x817fdf74u, 0u);
    wr32(0x817fdf70u, 0u);
    wr32(0x817fdf60u, r9);
    wr32(0x817fdf64u, r8);
    wr32(0x817fdf68u, r0);
    a.r[0] = 0x817fdf60u;
    a.r[1] = param_4;
    a.r[2] = 0x817fdf60u;
    (void)tc_call(0x802343a4u, &a);
    r0 = rd32(param_2 + 4u);
    wr32(0x817fdf54u, rd32(param_2));
    wr32(0x817fdf58u, r0);
    wr32(0x817fdf5cu, rd32(param_2 + 8u));
    a.r[0] = 0x817fdf54u;
    a.r[1] = param_4;
    a.r[2] = 0x817fdf54u;
    (void)tc_call(0x802343a4u, &a);
    r6 = rd32(param_3 + 4u);
    r0 = rd32(param_3 + 8u);
    wr32(0x817fdf48u, rd32(param_3));
    wr32(0x817fdf4cu, r6);
    wr32(0x817fdf50u, r0);
    a.r[0] = 0x817fdf48u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdf48u;
    (void)tc_call(0x802343a4u, &a);
    f2 = (f64)rdf32(0x817fdf64u);
    f0 = (f64)(f32)(f2 * f2);
    f5 = (f64)(f32)((f64)rdf32(0x817fdf58u) * f2);
    f3 = (f64)rdf32(0x817fdf60u);
    f2 = (f64)(f32)((f64)rdf32(0x817fdf4cu) * f2);
    f6 = ppc_fmadds((f64)rdf32(0x817fdf54u), f3, f5);
    f0 = ppc_fmadds(f3, f3, f0);
    f4 = (f64)rdf32(0x817fdf68u);
    f3 = ppc_fmadds((f64)rdf32(0x817fdf48u), f3, f2);
    f31 = ppc_fmadds((f64)rdf32(0x817fdf5cu), f4, f6);
    f1 = (f64)rdf32(0x80572bf8u);
    f30 = ppc_fmadds((f64)rdf32(0x817fdf50u), f4, f3);
    f29 = ppc_fmadds(f4, f4, f0);
    if (f31 < f1 && (f64)(f32)(f31 + f30) < f1) {
        r3 = 0u;
    } else {
        if (f31 > f29 && (f64)(f32)(f31 + f30) > f29) {
            r3 = 0u;
        } else {
            f6 = (f64)rdf32(0x817fdf4cu);
            f2 = (f64)rdf32(0x817fdf58u);
            f4 = (f64)(f32)(f6 * f6);
            f9 = (f64)rdf32(0x817fdf48u);
            f7 = (f64)rdf32(0x817fdf50u);
            f6 = (f64)(f32)(f2 * f6);
            f8 = ppc_fmadds(f9, f9, f4);
            f5 = (f64)rdf32(0x817fdf54u);
            f4 = (f64)rdf32(0x817fdf5cu);
            f2 = ppc_fmadds(f5, f5, (f64)(f32)(f2 * f2));
            f28 = ppc_fmadds(f7, f7, f8);
            f5 = ppc_fmadds(f5, f9, f6);
            f2 = ppc_fmadds(f4, f4, f2);
            f26 = ppc_fmsubs(f29, f28, (f64)(f32)(f30 * f30));
            f27 = ppc_fmadds(f4, f7, f5);
            f25 = ppc_fnmsubs(param_1, param_1, f2);
            f3 = ppc_fmsubs(f29, f25, (f64)(f32)(f31 * f31));
            if ((f64)(f32)ppc_fabs(f26) < (f64)rdf32(0x80572bfcu)) {
                f0 = (f64)rdf32(0x80572bf8u);
                if (f3 > f0) {
                    r3 = 0u;
                    return r3;
                }
                if (f31 < f0) {
                    wrf32d(param_6, (f64)(f32)px_fdiv(-f27, f28));
                } else {
                    if (f31 > f29) {
                        wrf32d(param_6, (f64)(f32)px_fdiv((f64)(f32)(f30 - f27), f28));
                    } else {
                        wrf32d(param_6, f0);
                    }
                }
                r3 = 1u;
            } else {
                f24 = ppc_fmsubs(f29, f27, (f64)(f32)(f30 * f31));
                f1 = ppc_fmsubs(f24, f24, (f64)(f32)(f26 * f3));
                if (f1 < (f64)rdf32(0x80572bf8u)) {
                    r3 = 0u;
                } else {
                    a.f[0] = f1;
                    f1 = tc_callf(0x80262ec0u, &a);
                    f1 = (f64)(f32)f1;
                    f5 = (f64)rdf32(0x80572bf8u);
                    f1 = (f64)(f32)px_fdiv((f64)(f32)(-f24 - f1), f26);
                    wrf32d(param_6, f1);
                    if (f1 < f5 || f1 > (f64)rdf32(0x80572c00u)) {
                        r3 = 0u;
                    } else {
                        f0 = ppc_fmadds(f1, f30, f31);
                        if (f0 < f5) {
                            if ((f30 < f5) || (f30 == f5)) {
                                r3 = 0u;
                                return r3;
                            }
                            f2 = (f64)(f32)px_fdiv(-f31, f30);
                            f1 = (f64)(f32)((f64)rdf32(0x80572c04u) * f2);
                            wrf32d(param_6, f2);
                            f0 = ppc_fmadds(f1, ppc_fmadds(f2, f28, f27), f25);
                            c0lt = f0 < f5;
                            r3 = (((c0lt << 0x1fu) | ((f0 > f5) << 0x1eu) | ((c0lt || (f0 == f5)) << 0x1du) | (((f0 != f0) || (f5 != f5)) << 0x1cu)) >> 0x1du) & 1u;
                        } else {
                            if (f0 > f29) {
                                if ((f30 > f5) || (f30 == f5)) {
                                    r3 = 0u;
                                    return r3;
                                }
                                f1 = (f64)rdf32(0x80572c04u);
                                f4 = (f64)(f32)px_fdiv((f64)(f32)(f29 - f31), f30);
                                wrf32d(param_6, f4);
                                f0 = ppc_fnmsubs(f1, f31, (f64)(f32)(f25 + f29));
                                f1 = ppc_fmadds(f1, (f64)(f32)(f27 - f30), (f64)(f32)(f4 * f28));
                                f0 = ppc_fmadds(f4, f1, f0);
                                c0lt = f0 < f5;
                                r3 = (((c0lt << 0x1fu) | ((f0 > f5) << 0x1eu) | ((c0lt || (f0 == f5)) << 0x1du) | (((f0 != f0) || (f5 != f5)) << 0x1cu)) >> 0x1du) & 1u;
                            } else {
                                r3 = 1u;
                            }
                        }
                    }
                }
            }
        }
    }
    return r3;
}
