#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801a4e50(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r12 = 0, r24 = 0, r25 = 0, r26 = 0;
    u32 r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0;
    f64 f30 = 0.0, f31 = 0.0;
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
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    if (param_r4 == 0u) {
        f0 = (f64)rdf32(0x8057593cu);
        wrf32d(param_r3 + 0xf30u, (f64)rdf32(0x80575868u));
        f7 = (f64)rdf32(0x80575940u);
        wrf32d(param_r3 + 0xf34u, f0);
        f6 = (f64)rdf32(0x80575944u);
        f5 = (f64)rdf32(0x80575948u);
        f4 = (f64)rdf32(0x8057594cu);
        f3 = (f64)rdf32(0x80575950u);
        f2 = (f64)rdf32(0x80575954u);
        f1 = (f64)rdf32(0x80575958u);
        f0 = (f64)rdf32(0x8057595cu);
        r12 = rd32(rd32(param_r3) + 0x28u);
        wrf32d(0x817fdf68u, f7);
        wrf32d(0x817fdf58u, f6);
        wrf32d(0x817fdf6cu, f5);
        wrf32d(0x817fdf5cu, f4);
        wrf32d(0x817fdf70u, f3);
        wrf32d(0x817fdf60u, f2);
        wrf32d(0x817fdf74u, f1);
        wrf32d(0x817fdf64u, f0);
        a.r[0] = param_r3;
        a.r[1] = param_r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        r3 = tc_call(r12, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r26 = rd32(r3);
        r27 = 0x817fdf58u;
        r25 = rd32(r3 + 4u);
        r29 = 0x817fdf68u;
        r24 = rd32(r3 + 8u);
        r30 = 0u;
        wr32(0x817fdf48u, r26);
        r31 = 0u;
        f26 = (f64)rdf32(0x80575960u);
        wr32(0x817fdf4cu, r25);
        wr32(0x817fdf50u, r24);
        do {
            f28 = (f64)rdf32(r27);
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
            f0 = (f64)rdf32(r29);
            wrf32d(0x817fdf40u, (f64)rdf32(r3 + 4u));
            wrf32d(0x817fdf3cu, f0);
            wrf32d(0x817fdf44u, f28);
            wr32(0x817fdf30u, r26);
            wr32(0x817fdf34u, r25);
            wr32(0x817fdf38u, r24);
            a.r[0] = 0x817fdf30u;
            a.r[1] = 0x817fdf3cu;
            a.r[2] = 0x817fdf30u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdf30u;
            f1 = tc_callf(0x80234440u, &a);
            r4 = tc_lastr4();
            if (f1 < f26) {
                a.r[0] = 0x817fdf30u;
                f1 = tc_callf(0x80234440u, &a);
                r4 = tc_lastr4();
                r30 = r31;
                f26 = f1;
            }
            r31 = r31 + 1u;
            r29 = r29 + 4u;
            r27 = r27 + 4u;
        } while ((s32)r31 < 4);
        r4 = r30 + 1u;
        r0 = r30 + 2u;
        r3 = r30 + 3u;
        r9 = (r30 >> 0x1fu) & 1u;
        r6 = (r4 << 0x1eu) & 0xc0000000u;
        r7 = (r4 >> 0x1fu) & 1u;
        r4 = (r0 << 0x1eu) & 0xc0000000u;
        r5 = (r0 >> 0x1fu) & 1u;
        r0 = (r3 << 0x1eu) & 0xc0000000u;
        r3 = (r3 >> 0x1fu) & 1u;
        r8 = ((r30 << 0x1eu) & 0xc0000000u) - r9;
        r6 = r6 - r7;
        r4 = r4 - r5;
        r0 = r0 - r3;
        r8 = (r8 << 2u) | (r8 >> 0x1eu);
        r6 = (r6 << 2u) | (r6 >> 0x1eu);
        r4 = (r4 << 2u) | (r4 >> 0x1eu);
        r6 = r6 + r7;
        r0 = (r0 << 2u) | (r0 >> 0x1eu);
        r8 = r8 + r9;
        r0 = r0 + r3;
        r3 = (r8 << 2u) & 0xfffffffcu;
        r6 = (r6 << 2u) & 0xfffffffcu;
        r7 = ((r4 + r5) << 2u) & 0xfffffffcu;
        r0 = (r0 << 2u) & 0xfffffffcu;
        f6 = (f64)rdf32(r3 - 0x7e802098u);
        f28 = (f64)rdf32(r3 - 0x7e8020a8u);
        f5 = (f64)rdf32(r6 - 0x7e802098u);
        f4 = (f64)rdf32(r6 - 0x7e8020a8u);
        f3 = (f64)rdf32(r7 - 0x7e802098u);
        f2 = (f64)rdf32(r7 - 0x7e8020a8u);
        f1 = (f64)rdf32(r0 - 0x7e802098u);
        f0 = (f64)rdf32(r0 - 0x7e8020a8u);
        wrf32d(param_r3 + 0xf10u, f6);
        wrf32d(param_r3 + 0xf20u, f28);
        wrf32d(param_r3 + 0xf14u, f5);
        wrf32d(param_r3 + 0xf24u, f4);
        wrf32d(param_r3 + 0xf18u, f3);
        wrf32d(param_r3 + 0xf28u, f2);
        wrf32d(param_r3 + 0xf1cu, f1);
        wrf32d(param_r3 + 0xf2cu, f0);
        a.r[0] = param_r3;
        a.r[1] = 0x817fdf58u;
        a.r[2] = 0x817fdf68u;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = 0.0;
        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
        f1 = (f64)rdf32(r3 + 4u);
        wrf32d(0x817fdf24u, (f64)rdf32(param_r3 + 0xf10u));
        wrf32d(0x817fdf28u, f1);
        wrf32d(0x817fdf2cu, f28);
        a.r[0] = param_r3;
        a.r[1] = param_r3 + 4u;
        a.r[2] = 0x817fdf24u;
        f1 = tc_callf(0x8007eeacu, &a);
        a.f[0] = (f64)rdf32(0x80575934u);
        a.f[1] = f1;
        a.f[2] = (f64)rdf32(param_r3 + 0xd20u);
        a.f[3] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32(param_r3 + 0xd30u)), (f64)rdf32(0x805758bcu));
        a.r[0] = param_r3;
        a.r[1] = 0xcu;
        a.r[2] = 0x817fdf24u;
        a.r[3] = 0xbu;
        (void)tc_call(0x800a9298u, &a);
        wr32(param_r3 + 0xf50u, 0u);
        wr32(param_r3 + 0xf54u, 0u);
        wr32(param_r3 + 0xf58u, 0u);
        wr32(param_r3 + 0xf5cu, 0u);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xf98u;
        (void)tc_call(0x8010a74cu, &a);
        wr32(param_r3 + 0xf04u, 0x1eu);
        a.r[0] = param_r3;
        a.r[1] = 0x1eu;
        (void)tc_call(0x801a39d0u, &a);
    } else {
        if (param_r4 == 1u) {
            a.r[0] = param_r3;
            (void)tc_call(0x801a39dcu, &a);
            r0 = rd32(param_r3 + 0xd04u);
            if (r0 == 0u) {
                f2 = (f64)rdf32(param_r3 + 0xf20u);
                f1 = (f64)rdf32(param_r3 + 8u);
                wrf32d(0x817fdf18u, (f64)rdf32(param_r3 + 0xf10u));
                wrf32d(0x817fdf1cu, f1);
                wrf32d(0x817fdf20u, f2);
                a.r[0] = param_r3 + 4u;
                a.r[1] = 0x817fdf18u;
                f1 = tc_callf(0x802344c0u, &a);
                f0 = (f64)rdf32(0x80575964u);
                if (!((f1 < f0) || (f1 == f0))) {
                    return;
                }
                f0 = (f64)rdf32(0x80575868u);
                wr32(param_r3 + 0xd04u, 1u);
                wrf32d(param_r3 + 0x188u, f0);
            } else {
                if (r0 == 1u) {
                    f29 = (f64)rdf32(0x80575868u);
                    r30 = param_r3;
                    f30 = (f64)rdf32(0x80575968u);
                    f31 = rdf64(0x805758a8u);
                    f28 = (f64)rdf32(0x805758d4u);
                    r29 = 0u;
                    do {
                        wr32(0x817fdf78u, 0x43300000u);
                        f1 = (f64)rdf32(param_r3 + 0xf30u);
                        wr32(0x817fdf7cu, r29 ^ 0x80000000u);
                        if (f1 > (f64)(f32)(f28 * (f64)(f32)(rdf64(0x817fdf78u) - f31))) {
                            wr32(0x817fdf78u, 0x43300000u);
                            wr32(0x817fdf7cu, (r29 + 1u) ^ 0x80000000u);
                            if (f1 < (f64)(f32)(f28 * (f64)(f32)(rdf64(0x817fdf78u) - f31)) && rd32(r30 + 0xf50u) == 0u) {
                                wr32(r30 + 0xf50u, 1u);
                                r0 = rd32(param_r3 + 8u);
                                wr32(0x817fdf0cu, rd32(param_r3 + 4u));
                                wr32(0x817fdf10u, r0);
                                wr32(0x817fdf14u, rd32(param_r3 + 0xcu));
                                a.r[0] = rd32(param_r3 + 0x70u);
                                a.r[1] = 0x8033b02du;
                                r3 = tc_call(0x80031be0u, &a);
                                if (r3 != 0u) {
                                    r6 = rd32(r3 + 0x50u);
                                    wrf32d(0x817fdf0cu, (f64)rdf32(r6 + 0xcu));
                                    wrf32d(0x817fdf10u, (f64)rdf32(r6 + 0x1cu));
                                    wrf32d(0x817fdf14u, (f64)rdf32(r6 + 0x2cu));
                                    wrf32d(0x817fdf00u, f29);
                                    wrf32d(0x817fdf04u, f30);
                                    wrf32d(0x817fdf08u, f29);
                                    a.r[0] = 0x817fdf0cu;
                                    a.r[1] = 0x817fdf00u;
                                    a.r[2] = 0x817fdf0cu;
                                    (void)tc_call(0x80234380u, &a);
                                }
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = 0xf98u;
                                f1 = tc_callf(0x8010a74cu, &a);
                                r5 = rd32(0x804890d4u);
                                r4 = rd32(0x804890d8u);
                                r0 = rd32(0x804890dcu);
                                wr32(0x817fdef4u, r5);
                                wr32(0x817fdef8u, r4);
                                wr32(0x817fdefcu, r0);
                                a.r[0] = param_r3;
                                a.r[1] = r4;
                                a.r[2] = r5;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                f1 = tc_callf(rd32(rd32(param_r3) + 0x2cu), &a);
                                f27 = f1;
                                r3 = rd32(0x817fdef8u);
                                r0 = rd32(0x817fdefcu);
                                wr32(0x817fdee8u, rd32(0x817fdef4u));
                                wr32(0x817fdeecu, r3);
                                wr32(0x817fdef0u, r0);
                                a.f[0] = f1;
                                f1 = tc_callf(0x80262704u, &a);
                                f26 = (f64)(f32)f1;
                                a.f[0] = f27;
                                f1 = tc_callf(0x80262b10u, &a);
                                f5 = (f64)(f32)f1;
                                f2 = (f64)rdf32(0x817fdef0u);
                                f4 = (f64)rdf32(0x817fdee8u);
                                f1 = (f64)rdf32(0x80575934u);
                                wrf32d(0x817fdef4u, ppc_fmadds(f4, f26, (f64)(f32)(f2 * f5)));
                                wrf32d(0x817fdefcu, ppc_fmadds(f4, -f5, (f64)(f32)(f2 * f26)));
                                a.f[0] = f1;
                                a.r[0] = 0x817fdef4u;
                                a.r[1] = 0x817fdef4u;
                                (void)tc_call(0x802343c8u, &a);
                                a.r[0] = param_r3;
                                a.r[1] = 0x817fdf0cu;
                                a.r[2] = 0x817fdef4u;
                                (void)tc_call(0x801a2310u, &a);
                            }
                        }
                        r29 = r29 + 1u;
                        r30 = r30 + 4u;
                    } while ((s32)r29 < 4);
                    if ((f64)rdf32(param_r3 + 0xf30u) > (f64)rdf32(0x8057586cu)) {
                        wr32(param_r3 + 0x2b0u, 1u);
                    }
                }
            }
        }
    }
    return;
}
