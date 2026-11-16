#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_800cfaa0(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f0 = (f64)rdf32(0x80573068u);
    wr32(0x817fdfdcu, 0u);
    r7 = rd32(param_2);
    wr32(0x817fdfd8u, 0u);
    r6 = rd32(param_2 + 4u);
    wr32(0x817fdfd4u, 0u);
    r0 = rd32(param_2 + 8u);
    f1 = (f64)rdf32((u32)param_1 + 0x14u);
    wrf32d(0x817fdfc0u, f0);
    wrf32d(0x817fdfc4u, f1);
    wrf32d(0x817fdfc8u, f0);
    wr32(0x817fdfb4u, r7);
    wr32(0x817fdfb8u, r6);
    wr32(0x817fdfbcu, r0);
    a.r[0] = 0x817fdfb4u;
    a.r[1] = (u32)param_1 + 8u;
    a.r[2] = 0x817fdfb4u;
    (void)tc_call(0x802343a4u, &a);
    f30 = ppc_fmadds((f64)rdf32(0x817fdfbcu), (f64)rdf32(0x817fdfc8u), ppc_fmadds((f64)rdf32(0x817fdfb4u), (f64)rdf32(0x817fdfc0u), (f64)(f32)((f64)rdf32(0x817fdfb8u) * (f64)rdf32(0x817fdfc4u))));
    a.r[0] = 0x817fdfc0u;
    f1 = tc_callf(0x80234428u, &a);
    f31 = f1;
    if ((f64)rdf32(0x80573068u) > f30 || f1 < f30) {
        r3 = 0u;
    } else {
        r5 = rd32(0x817fdfc4u);
        r0 = rd32(0x817fdfc8u);
        wr32(0x817fdf84u, rd32(0x817fdfc0u));
        wr32(0x817fdf88u, r5);
        wr32(0x817fdf8cu, r0);
        a.f[0] = f30;
        a.r[0] = 0x817fdf84u;
        a.r[1] = 0x817fdf84u;
        (void)tc_call(0x802343c8u, &a);
        r4 = rd32(0x817fdf84u);
        r3 = rd32(0x817fdf88u);
        c0eq = (f64)rdf32(0x80573068u) == f31;
        r0 = rd32(0x817fdf8cu);
        wr32(0x817fdf78u, r4);
        wr32(0x817fdf7cu, r3);
        wr32(0x817fdf80u, r0);
        if (c0eq) {
            wr32(0x817fdf90u, r4);
            wr32(0x817fdf94u, r3);
            wr32(0x817fdf98u, r0);
        } else {
            a.f[0] = (f64)(f32)px_fdiv((f64)rdf32(0x8057306cu), f31);
            a.r[0] = 0x817fdf78u;
            a.r[1] = 0x817fdf78u;
            (void)tc_call(0x802343c8u, &a);
            r3 = rd32(0x817fdf7cu);
            r0 = rd32(0x817fdf80u);
            wr32(0x817fdf90u, rd32(0x817fdf78u));
            wr32(0x817fdf94u, r3);
            wr32(0x817fdf98u, r0);
        }
        r0 = rd32((u32)param_1 + 0xcu);
        wr32(0x817fdf9cu, rd32((u32)param_1 + 8u));
        wr32(0x817fdfa0u, r0);
        wr32(0x817fdfa4u, rd32((u32)param_1 + 0x10u));
        a.r[0] = 0x817fdf9cu;
        a.r[1] = 0x817fdf90u;
        a.r[2] = 0x817fdf9cu;
        (void)tc_call(0x80234380u, &a);
        wrf32d(param_3, (f64)rdf32(0x817fdf9cu));
        r6 = rd32(param_3);
        wrf32d(param_3 + 4u, (f64)rdf32(0x817fdfa0u));
        r0 = rd32(param_3 + 4u);
        wrf32d(param_3 + 8u, (f64)rdf32(0x817fdfa4u));
        wr32(0x817fdfa8u, r6);
        wr32(0x817fdfacu, r0);
        wr32(0x817fdfb0u, rd32(param_3 + 8u));
        a.r[0] = 0x817fdfa8u;
        a.r[1] = param_2;
        a.r[2] = 0x817fdfa8u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdfa8u;
        f1 = tc_callf(0x80234428u, &a);
        f0 = (f64)rdf32((u32)param_1 + 0x18u);
        f0 = (f64)(f32)(f0 * f0);
        if (f0 < f1) {
            r3 = 0u;
        } else {
            r3 = 1u;
        }
    }
    return r3;
}
