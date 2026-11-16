#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80054c68(f64 param_1, f64 param_2, f64 param_3, f64 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    u32 r0 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0;
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
    r8 = rd32(param_6);
    wr32(0x817fdfbcu, 0u);
    r7 = rd32(param_6 + 4u);
    wr32(0x817fdfb8u, 0u);
    r0 = rd32(param_6 + 8u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfa0u, r8);
    wr32(0x817fdfa4u, r7);
    wr32(0x817fdfa8u, r0);
    a.r[0] = 0x817fdfa0u;
    a.r[1] = param_7;
    a.r[2] = 0x817fdfa0u;
    (void)tc_call(0x802343a4u, &a);
    r6 = rd32(param_8 + 4u);
    r0 = rd32(param_8 + 8u);
    wr32(0x817fdf94u, rd32(param_8));
    wr32(0x817fdf98u, r6);
    wr32(0x817fdf9cu, r0);
    a.r[0] = 0x817fdf94u;
    a.r[1] = param_7;
    a.r[2] = 0x817fdf94u;
    (void)tc_call(0x802343a4u, &a);
    a.f[0] = param_1;
    a.r[0] = 0x817fdf94u;
    a.r[1] = 0x817fdf94u;
    (void)tc_call(0x802343c8u, &a);
    a.r[0] = 0x817fdfa0u;
    f1 = tc_callf(0x80234440u, &a);
    if ((f64)rdf32(0x80572340u) > (f64)(f32)ppc_fabs(f1)) {
        f1 = (f64)rdf32(param_7 + 4u);
        f0 = (f64)rdf32(param_7 + 8u);
        wrf32d(param_5, (f64)rdf32(param_7));
        wrf32d(param_5 + 4u, f1);
        wrf32d(param_5 + 8u, f0);
    } else {
        r0 = 0u;
        f2 = (f64)rdf32(0x80572344u);
        f30 = ppc_fmadds(param_2, (f64)(f32)(param_4 - f1), (f64)(f32)(param_3 * (f64)(f32)px_fdiv(ppc_fmadds((f64)rdf32(0x817fdfa8u), (f64)rdf32(0x817fdf9cu), ppc_fmadds((f64)rdf32(0x817fdfa0u), (f64)rdf32(0x817fdf94u), (f64)(f32)((f64)rdf32(0x817fdfa4u) * (f64)rdf32(0x817fdf98u)))), f1)));
        if ((f2 == (f64)rdf32(0x817fdfa0u) && f2 == (f64)rdf32(0x817fdfa4u)) && f2 == (f64)rdf32(0x817fdfa8u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfa0u;
            a.r[1] = 0x817fdfa0u;
            (void)tc_call(0x802343e4u, &a);
        }
        a.f[0] = (f64)(f32)(f30 * param_1);
        a.r[0] = 0x817fdfa0u;
        a.r[1] = 0x817fdfa0u;
        (void)tc_call(0x802343c8u, &a);
        r6 = rd32(param_6 + 4u);
        r0 = rd32(param_6 + 8u);
        wr32(0x817fdf88u, rd32(param_6));
        wr32(0x817fdf8cu, r6);
        wr32(0x817fdf90u, r0);
        a.r[0] = 0x817fdf88u;
        a.r[1] = 0x817fdfa0u;
        a.r[2] = 0x817fdf88u;
        (void)tc_call(0x80234380u, &a);
        wrf32d(param_5, (f64)rdf32(0x817fdf88u));
        wrf32d(param_5 + 4u, (f64)rdf32(0x817fdf8cu));
        wrf32d(param_5 + 8u, (f64)rdf32(0x817fdf90u));
    }
    return;
}
