#include "tc_rt.h"

u32 fn_800968c0(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f29 = 0.0;
    TcArgs a = {0};
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
    wr32(0x817fdfccu, 0u);
    r31 = 0u;
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc0u, 0u);
    if (param_3 != 0u) {
        f1 = (f64)rdf32(param_6 + 4u);
        f0 = (f64)rdf32(param_6 + 8u);
        wrf32d(param_3, (f64)rdf32(param_6));
        wrf32d(param_3 + 4u, f1);
        wrf32d(param_3 + 8u, f0);
    }
    r7 = rd32(param_6 + 4u);
    r0 = rd32(param_6 + 8u);
    wr32(0x817fdfa8u, rd32(param_6));
    wr32(0x817fdfacu, r7);
    wr32(0x817fdfb0u, r0);
    a.r[0] = 0x817fdfa8u;
    a.r[1] = param_4;
    a.r[2] = 0x817fdfa8u;
    (void)tc_call(0x802343a4u, &a);
    f2 = (f64)rdf32(0x817fdfb0u);
    f0 = (f64)(f32)(param_1 * param_1);
    f1 = (f64)rdf32(0x817fdfa8u);
    f2 = (f64)(f32)(f2 * f2);
    f1 = ppc_fmadds(f1, f1, f2);
    if ((f1 < f0) || (f1 == f0)) {
        f1 = (f64)rdf32(0x817fdfacu);
        f0 = (f64)(f32)(param_2 * param_2);
        f1 = (f64)(f32)(f1 * f1);
        if ((f1 < f0) || (f1 == f0)) {
            r3 = 1u;
            return r3;
        }
    }
    r6 = rd32(param_6 + 4u);
    r0 = rd32(param_6 + 8u);
    wr32(0x817fdf78u, rd32(param_6));
    wr32(0x817fdf7cu, r6);
    wr32(0x817fdf80u, r0);
    a.r[0] = 0x817fdf78u;
    a.r[1] = param_5;
    a.r[2] = 0x817fdf78u;
    (void)tc_call(0x802343a4u, &a);
    f2 = (f64)rdf32(0x817fdf80u);
    f0 = (f64)(f32)(param_1 * param_1);
    f4 = (f64)rdf32(0x817fdf78u);
    f3 = (f64)rdf32(0x817fdf7cu);
    wrf32d(0x817fdfa8u, f4);
    f1 = ppc_fmadds(f4, f4, (f64)(f32)(f2 * f2));
    wrf32d(0x817fdfacu, f3);
    wrf32d(0x817fdfb0u, f2);
    if ((f1 < f0) || (f1 == f0)) {
        f1 = (f64)(f32)(f3 * f3);
        f0 = (f64)(f32)(param_2 * param_2);
        if ((f1 < f0) || (f1 == f0)) {
            r3 = 1u;
            return r3;
        }
    }
    r6 = rd32(param_5 + 4u);
    r0 = rd32(param_5 + 8u);
    wr32(0x817fdf9cu, rd32(param_5));
    wr32(0x817fdfa0u, r6);
    wr32(0x817fdfa4u, r0);
    a.r[0] = 0x817fdf9cu;
    a.r[1] = param_4;
    a.r[2] = 0x817fdf9cu;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdf9cu;
    f1 = tc_callf(0x80234440u, &a);
    f29 = f1;
    if (f1 > (f64)rdf32(0x80572a84u)) {
        f1 = (f64)rdf32(0x80572a88u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdf9cu) && f1 == (f64)rdf32(0x817fdfa0u)) && f1 == (f64)rdf32(0x817fdfa4u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdf9cu;
            a.r[1] = 0x817fdf9cu;
            (void)tc_call(0x802343e4u, &a);
        }
        r6 = rd32(param_6 + 4u);
        r0 = rd32(param_6 + 8u);
        wr32(0x817fdf90u, rd32(param_6));
        wr32(0x817fdf94u, r6);
        wr32(0x817fdf98u, r0);
        a.r[0] = 0x817fdf90u;
        a.r[1] = param_4;
        a.r[2] = 0x817fdf90u;
        (void)tc_call(0x802343a4u, &a);
        f1 = ppc_fmadds((f64)rdf32(0x817fdfa4u), (f64)rdf32(0x817fdf98u), ppc_fmadds((f64)rdf32(0x817fdf9cu), (f64)rdf32(0x817fdf90u), (f64)(f32)((f64)rdf32(0x817fdfa0u) * (f64)rdf32(0x817fdf94u))));
        if (f29 < f1) {
            r3 = 0u;
            return r3;
        }
        if (f1 < (f64)rdf32(0x80572a88u)) {
            r3 = 0u;
            return r3;
        }
        a.f[0] = f1;
        a.r[0] = 0x817fdf9cu;
        a.r[1] = 0x817fdf9cu;
        (void)tc_call(0x802343c8u, &a);
        r6 = rd32(0x817fdf94u);
        r0 = rd32(0x817fdf98u);
        wr32(0x817fdf84u, rd32(0x817fdf90u));
        wr32(0x817fdf88u, r6);
        wr32(0x817fdf8cu, r0);
        a.r[0] = 0x817fdf84u;
        a.r[1] = 0x817fdf9cu;
        a.r[2] = 0x817fdf84u;
        (void)tc_call(0x802343a4u, &a);
        f2 = (f64)rdf32(0x817fdf8cu);
        f0 = (f64)(f32)(param_1 * param_1);
        f1 = (f64)rdf32(0x817fdf84u);
        f2 = (f64)(f32)(f2 * f2);
        f1 = ppc_fmadds(f1, f1, f2);
        if ((f1 < f0) || (f1 == f0)) {
            f1 = (f64)rdf32(0x817fdf88u);
            f0 = (f64)(f32)(param_2 * param_2);
            f1 = (f64)(f32)(f1 * f1);
            if ((f1 < f0) || (f1 == f0)) {
                r31 = 1u;
            }
        }
    }
    r3 = r31;
    return r3;
}
