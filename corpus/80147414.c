#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_80147414(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
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
    wr32(0x817fdf78u, 0u);
    wr32(0x817fdf7cu, 0u);
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    r30 = rd32(param_1 + 0x34u);
    if ((s32)r30 <= 0) {
        return;
    }
    f0 = (f64)rdf32(0x805745f0u);
    wrf32d(0x817fdf30u, f0);
    r0 = rd32(0x80471a18u);
    wrf32d(0x817fdf2cu, f0);
    r0 = r0 * 0x4150u;
    wrf32d(0x817fdf28u, f0);
    f1 = (f64)rdf32(param_1 + 0xcu);
    wrf32d(0x817fdf28u, f1);
    wrf32d(0x817fdf2cu, (f64)rdf32(param_1 + 0x1cu));
    f2 = (f64)rdf32(param_1 + 0x2cu);
    wrf32d(0x817fdf30u, f2);
    a.f[0] = f1;
    a.f[1] = f2;
    a.r[0] = r0 - 0x7fb92738u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    f1 = tc_callf(0x80089fc8u, &a);
    f30 = (f64)rdf32(0x805745f0u);
    f29 = f1;
    f28 = (f64)rdf32(0x805745f4u);
    wrf32d(0x817fdf1cu, f30);
    f31 = (f64)rdf32(0x805745f8u);
    r29 = 0u;
    wrf32d(0x817fdf20u, f30);
    f27 = (f64)rdf32(0x805745fcu);
    wrf32d(0x817fdf24u, f30);
    wrf32d(0x817fdf1cu, (f64)rdf32((u32)param_3 + 0x18u));
    wrf32d(0x817fdf20u, (f64)rdf32((u32)param_3 + 0x1cu));
    wrf32d(0x817fdf24u, (f64)rdf32((u32)param_3 + 0x20u));
    while ((s32)r29 < (s32)r30) {
        if ((s32)r29 < 0 || r29 >= rd32(param_1 + 0x34u)) {
            r31 = 0u;
        } else {
            r31 = rd32(param_1 + 0x38u) + (rd32(param_1 + 0x3cu) * r29);
        }
        if (r31 != 0u) {
            a.r[0] = r31;
            r3 = tc_call(0x80147368u, &a);
            if (r3 != 1u) {
                r6 = rd32(r31 + 0x48u);
                f2 = (f64)rdf32(r6 + 8u);
                f1 = (f64)rdf32(r6 + 4u);
                wrf32d(0x817fdf10u, (f64)rdf32(r6));
                wrf32d(0x817fdf14u, f1);
                wrf32d(0x817fdf18u, f2);
                a.r[0] = 0x817fdf10u;
                a.r[1] = param_1;
                a.r[2] = 0x817fdf10u;
                (void)tc_call(0x80042474u, &a);
                r6 = rd32(0x817fdf14u);
                r0 = rd32(0x817fdf18u);
                wr32(0x817fdf04u, rd32(0x817fdf10u));
                wr32(0x817fdf08u, r6);
                wr32(0x817fdf0cu, r0);
                a.r[0] = 0x817fdf04u;
                a.r[1] = 0x817fdf28u;
                a.r[2] = 0x817fdf04u;
                (void)tc_call(0x802343a4u, &a);
                r0 = 0u;
                if ((f30 == (f64)rdf32(0x817fdf04u) && f30 == (f64)rdf32(0x817fdf08u)) && f30 == (f64)rdf32(0x817fdf0cu)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                    if ((f30 == (f64)rdf32(0x817fdf04u) && f30 == (f64)rdf32(0x817fdf08u)) && f30 == (f64)rdf32(0x817fdf0cu)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x817fdf04u;
                        a.r[1] = 0x817fdf04u;
                        (void)tc_call(0x802343e4u, &a);
                    }
                }
                wrf32d(0x817fdf00u, f30);
                wrf32d(0x817fdef8u, f30);
                wrf32d(0x817fdefcu, f30);
                f1 = tc_callf(0x80040a00u, &a);
                f1 = (f64)(f32)(f1 - f31);
                r0 = 0u;
                c0eq = f30 == (f64)rdf32(0x817fdef8u);
                wrf32d(0x817fdf00u, f1);
                if ((c0eq && f30 == (f64)rdf32(0x817fdefcu)) && f30 == f1) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                    if ((f30 == (f64)rdf32(0x817fdef8u) && f30 == (f64)rdf32(0x817fdefcu)) && f30 == (f64)rdf32(0x817fdf00u)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x817fdef8u;
                        a.r[1] = 0x817fdef8u;
                        (void)tc_call(0x802343e4u, &a);
                    }
                }
                a.r[0] = 0x817fdf04u;
                a.r[1] = 0x817fdef8u;
                a.r[2] = 0x817fdf04u;
                (void)tc_call(0x80234380u, &a);
                r0 = 0u;
                if ((f30 == (f64)rdf32(0x817fdf04u) && f30 == (f64)rdf32(0x817fdf08u)) && f30 == (f64)rdf32(0x817fdf0cu)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                    if ((f30 == (f64)rdf32(0x817fdf04u) && f30 == (f64)rdf32(0x817fdf08u)) && f30 == (f64)rdf32(0x817fdf0cu)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x817fdf04u;
                        a.r[1] = 0x817fdf04u;
                        (void)tc_call(0x802343e4u, &a);
                    }
                }
                a.r[0] = 0x817fdf04u;
                a.r[1] = 0x817fdf1cu;
                a.r[2] = 0x817fdf04u;
                (void)tc_call(0x80234380u, &a);
                r0 = 0u;
                if ((f30 == (f64)rdf32(0x817fdf04u) && f30 == (f64)rdf32(0x817fdf08u)) && f30 == (f64)rdf32(0x817fdf0cu)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                    if ((f30 == (f64)rdf32(0x817fdf04u) && f30 == (f64)rdf32(0x817fdf08u)) && f30 == (f64)rdf32(0x817fdf0cu)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x817fdf04u;
                        a.r[1] = 0x817fdf04u;
                        (void)tc_call(0x802343e4u, &a);
                    }
                }
                wr32(0x817fdf34u, 0x803651a0u);
                wrf32d(0x817fdf4cu, f30);
                wrf32d(0x817fdf48u, f30);
                wrf32d(0x817fdf44u, f30);
                f26 = (f64)rdf32((u32)param_3 + 4u);
                f1 = tc_callf(0x80040a00u, &a);
                f0 = (f64)(f32)(f1 - f31);
                f3 = (f64)rdf32(0x817fdf04u);
                f2 = (f64)rdf32(0x817fdf08u);
                r0 = 0u;
                f1 = (f64)rdf32(0x817fdf0cu);
                f4 = ppc_fmadds(f0, f26, f28);
                f0 = (f64)rdf32(0x817fdf04u);
                wr32(0x817fdf38u, 0u);
                f4 = ppc_fabs(f4);
                wr32(0x817fdf3cu, 0x64u);
                wrf32d(0x817fdf44u, f3);
                wrf32d(0x817fdf48u, f2);
                wrf32d(0x817fdf4cu, f1);
                wrf32d(0x817fdf60u, (f64)(f32)f4);
                wrf32d(0x817fdf68u, (f64)rdf32((u32)param_3 + 8u));
                if ((f30 == f0 && f30 == (f64)rdf32(0x817fdf08u)) && f30 == (f64)rdf32(0x817fdf0cu)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                    if ((f30 == (f64)rdf32(0x817fdf04u) && f30 == (f64)rdf32(0x817fdf08u)) && f30 == (f64)rdf32(0x817fdf0cu)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x817fdf04u;
                        a.r[1] = 0x817fdf04u;
                        (void)tc_call(0x802343e4u, &a);
                    }
                }
                f26 = (f64)rdf32((u32)param_3 + 0x14u);
                f1 = tc_callf(0x80040a00u, &a);
                f0 = (f64)(f32)(f27 * (f64)(f32)(f1 * f26));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wrf64(0x817fdf70u, f0);
                a.r[0] = 0x817fdee8u;
                a.r[1] = 0x817fdf04u;
                a.r[2] = (u32)(s16)rd32(0x817fdf74u);
                (void)tc_call(0x80042904u, &a);
                f3 = (f64)rdf32(0x817fdee8u);
                wrf32d(0x817fdf64u, (f64)rdf32((u32)param_3 + 0xcu));
                f2 = (f64)rdf32(0x817fdeecu);
                f1 = (f64)rdf32(0x817fdef0u);
                f0 = (f64)rdf32(0x817fdef4u);
                wr32(0x817fdf40u, rd32((u32)param_3 + 0x10u));
                wrf32d(0x817fdf50u, f3);
                wrf32d(0x817fdf54u, f2);
                wrf32d(0x817fdf58u, f1);
                wrf32d(0x817fdf5cu, f0);
                wrf32d(0x817fdf6cu, f29);
                a.r[0] = param_2;
                a.r[1] = r31;
                a.r[2] = 0x817fdf34u;
                a.r[3] = 0x801479b8u;
                a.r[4] = 0u;
                (void)tc_call(0x80147274u, &a);
            }
        }
        r29 = r29 + 1u;
    }
    return;
}
