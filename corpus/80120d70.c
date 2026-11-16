#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80120d70(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    a.r[0] = rd32(param_1);
    a.r[1] = rd32(param_2);
    r3 = tc_call(0x803014dcu, &a);
    if ((r3 & 0x10u) != 0u) {
        r3 = rd32(param_2 + 4u);
        if (r3 == 0u) {
            return;
        }
        a.f[0] = (f64)rdf32(0x805742a4u);
        a.r[0] = r3;
        (void)tc_call(0x802f7240u, &a);
    } else {
        r8 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        r6 = rd32(r8 + 0x144u);
        r0 = rd32(r8 + 0x148u);
        wr32(0x817fdfb8u, rd32(r8 + 0x140u));
        wr32(0x817fdfbcu, r6);
        wr32(0x817fdfc0u, r0);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = r8 + 0x134u;
        a.r[2] = 0x817fdfb8u;
        (void)tc_call(0x802343a4u, &a);
        f1 = (f64)rdf32(0x805742a4u);
        r0 = 0u;
        f0 = (f64)rdf32(0x817fdfb8u);
        wrf32d(0x817fdfbcu, f1);
        if ((f1 == f0 && f1 == f1) && f1 == (f64)rdf32(0x817fdfc0u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfb8u;
            a.r[1] = 0x817fdfb8u;
            (void)tc_call(0x802343e4u, &a);
        }
        f1 = (f64)rdf32(0x805742a4u);
        f0 = (f64)rdf32(0x805742a0u);
        wrf32d(0x817fdfacu, f1);
        wrf32d(0x817fdfb0u, f0);
        wrf32d(0x817fdfb4u, f1);
        wrf32d(0x817fdfa8u, f1);
        wrf32d(0x817fdfa4u, f1);
        wrf32d(0x817fdfa0u, f1);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = 0x817fdfacu;
        a.r[2] = 0x817fdfa0u;
        (void)tc_call(0x80234484u, &a);
        a.r[0] = 0x817fdf94u;
        a.r[1] = param_3;
        (void)tc_call(0x80179f08u, &a);
        f31 = ppc_fmadds((f64)rdf32(0x817fdfa8u), (f64)rdf32(0x817fdf9cu), ppc_fmadds((f64)rdf32(0x817fdfa0u), (f64)rdf32(0x817fdf94u), (f64)(f32)((f64)rdf32(0x817fdfa4u) * (f64)rdf32(0x817fdf98u))));
        if ((s32)rd32(param_2 + 0x50u) >= 0) {
            a.r[0] = 0x817fdf88u;
            a.r[1] = param_3;
            (void)tc_call(0x80179d4cu, &a);
            a.r[0] = 0x817fdf88u;
            f1 = tc_callf(0x80234440u, &a);
            r10 = rd32(0x80339724u);
            r9 = rd32(0x80339728u);
            r0 = (rd32(param_2 + 0x50u) << 2u) & 0xfffffffcu;
            r8 = rd32(0x8033972cu);
            r7 = rd32(0x80339730u);
            r6 = rd32(0x80339734u);
            r5 = rd32(0x80339738u);
            r4 = rd32(0x8033973cu);
            r3 = rd32(0x80339740u);
            wr32(0x817fdfc4u, rd32(0x80339720u));
            f2 = (f64)rdf32(0x805742c0u);
            wr32(0x817fdfc8u, r10);
            wr32(0x817fdfccu, r9);
            wr32(0x817fdfd0u, r8);
            wr32(0x817fdfd4u, r7);
            wr32(0x817fdfd8u, r6);
            wr32(0x817fdfdcu, r5);
            wr32(0x817fdfe0u, r4);
            wr32(0x817fdfe4u, r3);
            f0 = (f64)rdf32(r0 - 0x7e80203cu);
            if (f0 > f2) {
                f2 = f0;
            }
            if (f1 < f2) {
                f31 = (f64)(f32)(f31 * (f64)(f32)px_fdiv(f1, f2));
            }
        }
        r3 = rd32(param_2 + 4u);
        if (r3 != 0u) {
            a.f[0] = f31;
            a.r[0] = r3;
            (void)tc_call(0x802f7240u, &a);
        }
    }
    return;
}
