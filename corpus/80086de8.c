#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80086de8(u32 param_r3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r14 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0;
    u32 t14 = 0, t26 = 0, t30 = 0, t34 = 0, t38 = 0, t42 = 0;
    f64 f1 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    f64 t8 = 0.0, t10 = 0.0, t16 = 0.0, t18 = 0.0, t24 = 0.0, t28 = 0.0, t32 = 0.0, t36 = 0.0, t40 = 0.0, t44 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdec0u, 0x817fe000u);
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
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf60u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    wr32(0x817fdf70u, 0u);
    wr32(0x817fdf74u, 0u);
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
    wr32(param_r3 + 0x2288u, 0u);
    r14 = rd32(param_r3 + 8u);
    f27 = (f64)rdf32(0x8057290cu);
    f28 = rdf64(0x80572928u);
    f29 = (f64)rdf32(0x80572910u);
    f30 = (f64)rdf32(0x80572914u);
    f31 = (f64)rdf32(0x80572920u);
    while (r14 != 0u) {
        r3 = r14;
        r14 = rd32(r14);
        r18 = rd32(r3 + 8u);
        r17 = 0u;
        for (;;) {
            r3 = rd32(r18 + 0x70u);
            if (r17 >= rd32(r3 + 0x34u)) break;
            r0 = rd32(r3 + 0x3cu);
            r3 = rd32(r3 + 0x38u);
            r0 = r0 * r17;
            r21 = r3 + r0;
            r20 = rd32(r21 + 0x3cu);
            r16 = r21;
            a.r[0] = r20;
            a.r[1] = 0x80337b28u;
            a.r[2] = 4u;
            r3 = tc_call(0x8025bfccu, &a);
            if (r3 == 0u) {
                for (;;) {
                    r6 = (u32)(s16)rd16(rd32(r16 + 0x3cu) + 0x6au);
                    if (r6 == 0xffffffffu) break;
                    r0 = rd32(param_r3 + 0x2288u);
                    if ((s32)r0 >= 50) break;
                    r3 = rd32(r18 + 0x70u);
                    r0 = r0 * 0x8cu;
                    r16 = rd32(r3 + 0x38u) + (rd32(r3 + 0x3cu) * r6);
                    wr32(param_r3 + r0 + 0x7a8u, r16);
                    wr32(param_r3 + (rd32(param_r3 + 0x2288u) * 0x8cu) + 0x7a4u, rd32(r18 + 0x70u));
                    wrf32d(param_r3 + (rd32(param_r3 + 0x2288u) * 0x8cu) + 0x7b0u, f27);
                    wr32(param_r3 + (rd32(param_r3 + 0x2288u) * 0x8cu) + 0x7b8u, rd32(r18 + 0x90u));
                    r0 = (u32)rd8(rd32(r16 + 0x3cu) + 0x61u);
                    c0lt = (s32)r0 < 1;
                    if (r0 == 1u) {
                        wr32(param_r3 + (rd32(param_r3 + 0x2288u) * 0x8cu) + 0x7acu, 2u);
                    } else if (!c0lt) {
                        if ((s32)r0 < 3) {
                            wr32(param_r3 + (rd32(param_r3 + 0x2288u) * 0x8cu) + 0x7acu, 4u);
                        }
                    } else if ((s32)r0 >= 0) {
                        wr32(param_r3 + (rd32(param_r3 + 0x2288u) * 0x8cu) + 0x7acu, 1u);
                    }
                    r3 = rd32(r21 + 0x54u);
                    t8 = (f64)rdf32(r3 + 4u);
                    t10 = (f64)rdf32(r3 + 8u);
                    wrf32d(0x817fdf08u, (f64)rdf32(r3));
                    wrf32d(0x817fdf0cu, t8);
                    wrf32d(0x817fdf10u, t10);
                    t14 = r3 + 0xcu;
                    t16 = (f64)rdf32(t14 + 4u);
                    t18 = (f64)rdf32(r3 + 0x14u);
                    wrf32d(0x817fdefcu, (f64)rdf32(t14));
                    wrf32d(0x817fdf00u, t16);
                    wrf32d(0x817fdf04u, t18);
                    f26 = (f64)rdf32(0x80572908u);
                    wr32(r16 + 0x60u, param_r3 + (rd32(param_r3 + 0x2288u) * 0x8cu) + 0x7b0u);
                    r3 = rd32(r21 + 0x50u);
                    t24 = (f64)rdf32(r3 + 4u);
                    wrf32d(0x817fdf18u, (f64)rdf32(r3));
                    wrf32d(0x817fdf1cu, t24);
                    t26 = r3 + 8u;
                    t28 = (f64)rdf32(t26 + 4u);
                    wrf32d(0x817fdf20u, (f64)rdf32(t26));
                    wrf32d(0x817fdf24u, t28);
                    t30 = r3 + 0x10u;
                    t32 = (f64)rdf32(t30 + 4u);
                    wrf32d(0x817fdf28u, (f64)rdf32(t30));
                    wrf32d(0x817fdf2cu, t32);
                    t34 = r3 + 0x18u;
                    t36 = (f64)rdf32(t34 + 4u);
                    wrf32d(0x817fdf30u, (f64)rdf32(t34));
                    wrf32d(0x817fdf34u, t36);
                    t38 = r3 + 0x20u;
                    t40 = (f64)rdf32(t38 + 4u);
                    wrf32d(0x817fdf38u, (f64)rdf32(t38));
                    wrf32d(0x817fdf3cu, t40);
                    t42 = r3 + 0x28u;
                    t44 = (f64)rdf32(t42 + 4u);
                    wrf32d(0x817fdf40u, (f64)rdf32(t42));
                    wrf32d(0x817fdf44u, t44);
                    f7 = (f64)rdf32(0x817fdf34u);
                    f8 = (f64)rdf32(0x817fdf44u);
                    f11 = (f64)rdf32(0x817fdf40u);
                    f10 = (f64)rdf32(0x817fdf2cu);
                    f9 = (f64)rdf32(0x817fdf18u);
                    wrf32d(0x817fdef0u, (f64)rdf32(0x817fdf24u));
                    wrf32d(0x817fdef4u, f7);
                    wrf32d(0x817fdef8u, f8);
                    r19 = rd32(r16 + 0x3cu);
                    wrf32d(0x817fdee4u, f9);
                    wrf32d(0x817fded0u, f10);
                    wrf32d(0x817fdee0u, f11);
                    wrf32d(0x817fdf3cu, f26);
                    wrf32d(0x817fdf38u, f26);
                    wrf32d(0x817fdf30u, f26);
                    wrf32d(0x817fdf28u, f26);
                    wrf32d(0x817fdf20u, f26);
                    wrf32d(0x817fdf1cu, f26);
                    a.r[0] = 0x817fdf18u;
                    a.r[1] = 0x817fdf08u;
                    a.r[2] = 0x817fdf08u;
                    (void)tc_call(0x8023411cu, &a);
                    a.r[0] = 0x817fdf18u;
                    a.r[1] = 0x817fdefcu;
                    a.r[2] = 0x817fdefcu;
                    (void)tc_call(0x8023411cu, &a);
                    a.r[0] = r19;
                    a.r[1] = 0x80337b2du;
                    a.r[2] = 1u;
                    r3 = tc_call(0x8025bfccu, &a);
                    if (r3 == 0u) {
                        a.r[0] = 0x817fdec8u;
                        a.r[1] = r19 + 3u;
                        a.r[2] = 3u;
                        (void)tc_call(0x8025bdf4u, &a);
                        a.r[0] = 0x817fdec8u;
                        a.r[1] = 3u;
                        r3 = tc_call(0x800844b4u, &a);
                        wr32(0x817fdf4cu, r3);
                        wr32(0x817fdf48u, 0x43300000u);
                        f26 = (f64)(f32)px_fdiv((f64)(f32)(f29 * (f64)(f32)(rdf64(0x817fdf48u) - f28)), f30);
                        a.r[0] = r19;
                        a.r[1] = r20 + 2u;
                        a.r[2] = 1u;
                        r3 = tc_call(0x8025bfccu, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 == 0x2du) {
                            f26 = (f64)(f32)(f26 * f31);
                        }
                        a.r[0] = r18;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        r3 = tc_call(rd32(rd32(r18) + 0x28u), &a);
                        a.r[0] = 0x817fdf08u;
                        a.r[1] = r3;
                        a.r[2] = 0x817fdf08u;
                        f1 = tc_callf(0x80234380u, &a);
                        a.r[0] = r18;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        r3 = tc_call(rd32(rd32(r18) + 0x28u), &a);
                        a.r[0] = 0x817fdefcu;
                        a.r[1] = r3;
                        a.r[2] = 0x817fdefcu;
                        f1 = tc_callf(0x80234380u, &a);
                        a.r[0] = r18;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        r3 = tc_call(rd32(rd32(r18) + 0x28u), &a);
                        a.r[0] = 0x817fdef0u;
                        a.r[1] = r3;
                        a.r[2] = 0x817fdef0u;
                        (void)tc_call(0x80234380u, &a);
                    }
                    a.f[0] = f26;
                    a.r[0] = param_r3 + (rd32(param_r3 + 0x2288u) * 0x8cu) + 0x730u;
                    a.r[1] = 0x817fdef0u;
                    a.r[2] = 0x817fdf08u;
                    a.r[3] = 0x817fdefcu;
                    (void)tc_call(0x800ca4dcu, &a);
                    wr32(param_r3 + (rd32(param_r3 + 0x2288u) * 0x8cu) + 0x7b4u, 0u);
                    wr32(param_r3 + 0x2288u, rd32(param_r3 + 0x2288u) + 1u);
                }
            }
            r17 = r17 + 1u;
        }
    }
    return;
}
