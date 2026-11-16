#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800db3d0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f29 = 0.0, f30 = 0.0;
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
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    r0 = rd32(param_1 + 0x1cu);
    wr32(0x817fdfa0u, rd32(param_1 + 0x18u));
    wr32(0x817fdfa4u, r0);
    wr32(0x817fdfa8u, rd32(param_1 + 0x20u));
    a.r[0] = 0x817fdfa0u;
    a.r[1] = param_4;
    a.r[2] = 0x817fdfa0u;
    (void)tc_call(0x802343a4u, &a);
    wrf32d(0x817fdfa4u, (f64)rdf32(0x80573a10u));
    a.r[0] = 0x817fdfa0u;
    f1 = tc_callf(0x80234440u, &a);
    f30 = f1;
    if (!((f64)rdf32(0x80573a30u) > f1)) {
        if ((f64)rdf32(0x80573a10u) != f1) {
            f1 = (f64)(f32)px_fdiv((f64)rdf32(0x80573a20u), f1);
            a.f[0] = f1;
            a.r[0] = 0x817fdfa0u;
            a.r[1] = 0x817fdfa0u;
            (void)tc_call(0x802343c8u, &a);
        }
        a.f[0] = (f64)rdf32(0x817fdfa0u);
        a.f[1] = (f64)rdf32(0x817fdfa8u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if (!((f64)rdf32(0x80573a14u) < f1)) {
            a.f[0] = (f64)rdf32(0x817fdfa0u);
            a.f[1] = (f64)rdf32(0x817fdfa8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x80573a1cu);
            if (!((f0 > f1) || (f0 == f1))) {
                a.f[0] = (f64)rdf32(0x817fdfa0u);
                a.f[1] = (f64)rdf32(0x817fdfa8u);
                f1 = tc_callf(0x80262c68u, &a);
                f29 = (f64)(f32)f1;
            } else {
                a.f[0] = (f64)rdf32(0x817fdfa0u);
                a.f[1] = (f64)rdf32(0x817fdfa8u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f29 = (f64)(f32)((f64)rdf32(0x80573a18u) + f1);
            }
        } else {
            a.f[0] = (f64)rdf32(0x817fdfa0u);
            a.f[1] = (f64)rdf32(0x817fdfa8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f29 = (f64)(f32)(f1 - (f64)rdf32(0x80573a18u));
        }
        if (!((f64)rdf32(0x80573a14u) < f29)) {
            f0 = (f64)rdf32(0x80573a1cu);
            if (!((f0 > f29) || (f0 == f29))) {
                f0 = f29;
            } else {
                f0 = (f64)(f32)((f64)rdf32(0x80573a18u) + f29);
            }
        } else {
            f0 = (f64)(f32)(f29 - (f64)rdf32(0x80573a18u));
        }
        f2 = (f64)(f32)(f0 - param_f1);
        if (!(f2 > (f64)rdf32(0x80573a14u))) {
            if (f2 < (f64)rdf32(0x80573a1cu)) {
                f2 = (f64)(f32)(f2 + (f64)rdf32(0x80573a18u));
            }
        } else {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x80573a18u));
        }
        f0 = (f64)rdf32(0x80573a34u);
        f1 = (f64)(f32)ppc_fabs(f2);
        if (!((f1 < f0) || (f1 == f0))) {
            if (!(f2 > f0)) {
                f0 = (f64)rdf32(0x80573a38u);
                if (f2 < f0) {
                    f2 = f0;
                }
            } else {
                f2 = f0;
            }
            f1 = (f64)(f32)(param_f1 + f2);
            if (!((f64)rdf32(0x80573a14u) < f1)) {
                f0 = (f64)rdf32(0x80573a1cu);
                if ((f0 > f1) || (f0 == f1)) {
                    f1 = (f64)(f32)((f64)rdf32(0x80573a18u) + f1);
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573a18u));
            }
            wrf32d(param_3, f1);
            f1 = (f64)rdf32(param_4 + 4u);
            f0 = (f64)rdf32(param_4 + 8u);
            wrf32d(param_2, (f64)rdf32(param_4));
            wrf32d(param_2 + 4u, f1);
            wrf32d(param_2 + 8u, f0);
        } else {
            f1 = (f64)rdf32(param_1 + 0x2cu);
            if (!(f1 > f30)) {
                r5 = rd32(0x817fdfa4u);
                r0 = rd32(0x817fdfa8u);
                wr32(0x817fdf88u, rd32(0x817fdfa0u));
                wr32(0x817fdf8cu, r5);
                wr32(0x817fdf90u, r0);
                a.f[0] = f1;
                a.r[0] = 0x817fdf88u;
                a.r[1] = 0x817fdf88u;
                (void)tc_call(0x802343c8u, &a);
                r6 = rd32(param_4 + 4u);
                r0 = rd32(param_4 + 8u);
                wr32(0x817fdf94u, rd32(param_4));
                wr32(0x817fdf98u, r6);
                wr32(0x817fdf9cu, r0);
                a.r[0] = 0x817fdf94u;
                a.r[1] = 0x817fdf88u;
                a.r[2] = 0x817fdf94u;
                (void)tc_call(0x80234380u, &a);
                wrf32d(param_2, (f64)rdf32(0x817fdf94u));
                wrf32d(param_2 + 4u, (f64)rdf32(0x817fdf98u));
                wrf32d(param_2 + 8u, (f64)rdf32(0x817fdf9cu));
            } else {
                wrf32d(param_2, (f64)rdf32(param_1 + 0x18u));
                wrf32d(param_2 + 4u, (f64)rdf32(param_1 + 0x1cu));
                wrf32d(param_2 + 8u, (f64)rdf32(param_1 + 0x20u));
            }
            wrf32d(param_3, f29);
        }
    } else {
        f1 = (f64)rdf32(param_1 + 0x28u);
        if (!((f64)rdf32(0x80573a14u) < f1)) {
            f0 = (f64)rdf32(0x80573a1cu);
            if ((f0 > f1) || (f0 == f1)) {
                f1 = (f64)(f32)((f64)rdf32(0x80573a18u) + f1);
            }
        } else {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573a18u));
        }
        f2 = (f64)(f32)(f1 - param_f1);
        if (!(f2 > (f64)rdf32(0x80573a14u))) {
            if (f2 < (f64)rdf32(0x80573a1cu)) {
                f2 = (f64)(f32)(f2 + (f64)rdf32(0x80573a18u));
            }
        } else {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x80573a18u));
        }
        f0 = (f64)rdf32(0x80573a34u);
        if (!((f64)(f32)ppc_fabs(f2) < f0)) {
            if (!(f2 > f0)) {
                f0 = (f64)rdf32(0x80573a38u);
                if (f2 < f0) {
                    f2 = f0;
                }
            } else {
                f2 = f0;
            }
        }
        f1 = (f64)(f32)(param_f1 + f2);
        if (!((f64)rdf32(0x80573a14u) < f1)) {
            f0 = (f64)rdf32(0x80573a1cu);
            if ((f0 > f1) || (f0 == f1)) {
                f1 = (f64)(f32)((f64)rdf32(0x80573a18u) + f1);
            }
        } else {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573a18u));
        }
        wrf32d(param_3, f1);
        f1 = (f64)rdf32(param_4 + 4u);
        f0 = (f64)rdf32(param_4 + 8u);
        wrf32d(param_2, (f64)rdf32(param_4));
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2 + 8u, f0);
    }
    return;
}
