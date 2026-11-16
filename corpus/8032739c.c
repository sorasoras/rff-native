#include "tc_rt.h"

void fn_8032739c(u32 param_1, u32 param_2, u32 param_3, s32 param_4, u32 param_5)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r20 = 0, r21 = 0, r23 = 0, r24 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0;
    f64 f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde40u, 0x817fe000u);
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
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, 0.0);
    wrf32d(0x817fdf7cu, 0.0);
    wrf64(0x817fdf60u, 0.0);
    wrf32d(0x817fdf68u, 0.0);
    wrf32d(0x817fdf6cu, 0.0);
    wr32(0x817fdf20u, 0u);
    wr32(0x817fdf24u, 0u);
    wr32(0x817fdf28u, 0u);
    wr32(0x817fdf2cu, 0u);
    wr32(0x817fdf30u, 0u);
    wr32(0x817fdf34u, 0u);
    wr32(0x817fdf38u, 0u);
    wr32(0x817fdf3cu, 0u);
    wr32(0x817fdf40u, 0u);
    wr32(0x817fdf44u, 0u);
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf08u, 0x43300000u);
    f27 = rdf64(0x80577bf8u);
    wr32(0x817fdf10u, 0x43300000u);
    f28 = rdf64(0x80577c00u);
    r31 = param_1;
    f29 = (f64)rdf32(0x80577becu);
    r30 = param_2;
    f22 = (f64)rdf32(0x80577be4u);
    r27 = param_2;
    f30 = (f64)rdf32(0x80577be0u);
    r26 = param_1;
    f31 = (f64)rdf32(0x80577bf0u);
    r21 = 0u;
    r29 = 0u;
    r28 = 0u;
    do {
        r4 = r29 + 2u;
        if ((s32)rd32(r31 + 0xc4u) >= 0) {
            r25 = rd32(r30 + 0x88u);
            if (r25 != 0u) {
                r5 = (u32)rd16(param_2 + 0x94u);
                r3 = 1u;
                r24 = (((r29 & 0x20u) != 0u) ? (u32)((s32)r5 >> 31) : (u32)((s32)r5 >> (s32)(r29 & 0x1fu))) & 3u;
                if (r24 == 2u) {
                    r3 = 2u;
                }
                r0 = (u32)rd8(param_2 + 0x96u);
                r0 = ((r28 & 0x20u) != 0u) ? (u32)((s32)r0 >> 31) : (u32)((s32)r0 >> (s32)(r28 & 0x1fu));
                r6 = r0 & 3u;
                if (r6 == 1u || r6 == 3u) {
                    r3 = r3 - ((r3 << 1u) & 0xfffffffeu);
                }
                r3 = r3 ^ 0x80000000u;
                wr32(0x817fdf0cu, r3);
                r23 = (((r4 & 0x20u) != 0u) ? (u32)((s32)r5 >> 31) : (u32)((s32)r5 >> (s32)(r4 & 0x1fu))) & 3u;
                r3 = 1u;
                f26 = (f64)(f32)(rdf64(0x817fdf08u) - f27);
                if (r23 == 2u) {
                    r3 = 2u;
                }
                if (r6 == 2u || r6 == 3u) {
                    r3 = r3 - ((r3 << 1u) & 0xfffffffeu);
                }
                wr32(0x817fdf14u, r3 ^ 0x80000000u);
                r0 = 0u;
                f25 = (f64)(f32)(rdf64(0x817fdf10u) - f27);
                if (r6 == 1u || r6 == 3u) {
                    r0 = 1u;
                }
                if (r24 == 2u) {
                    r0 = (r0 << 1u) & 0xfffffffeu;
                }
                r0 = r0 ^ 0x80000000u;
                wr32(0x817fdf0cu, r0);
                r0 = 0u;
                f24 = (f64)(f32)(rdf64(0x817fdf08u) - f27);
                if (r6 == 2u || r6 == 3u) {
                    r0 = 1u;
                }
                if (r23 == 2u) {
                    r0 = (r0 << 1u) & 0xfffffffeu;
                }
                r0 = r0 ^ 0x80000000u;
                wr32(0x817fdf14u, r0);
                r0 = param_5;
                f23 = (f64)(f32)(rdf64(0x817fdf10u) - f27);
                if (param_5 == 0u) {
                    r4 = rd32(r27 + 0x50u);
                    c0eq = rd32(r26 + 4u) == r25;
                    r3 = rd32(r27 + 0x70u);
                    r0 = rd32(r27 + 0x74u);
                    wr32(0x817fde68u, rd32(r27 + 0x4cu));
                    f2 = (f64)rdf32(r30 + 0x64u);
                    wr32(0x817fde6cu, r4);
                    wr32(0x817fde70u, r3);
                    wr32(0x817fde74u, r0);
                    if (!c0eq || (f64)rdf32(r26 + 8u) != f26 || (f64)rdf32(r26 + 0xcu) != f25 || (f64)rdf32(r26 + 0x10u) != f24 || (f64)rdf32(r26 + 0x14u) != f23 || rd32(r26 + 0x18u) != r24 || rd32(r26 + 0x1cu) != r23) {
                        r0 = 0u;
                    } else if ((f64)rdf32(r26 + 0x20u) != (f64)rdf32(0x817fde68u) || (f64)rdf32(r26 + 0x24u) != (f64)rdf32(0x817fde6cu) || (f64)rdf32(r26 + 0x28u) != f2 || (f64)rdf32(r26 + 0x2cu) != (f64)rdf32(0x817fde70u)) {
                        r0 = 0u;
                    } else if ((f64)rdf32(r26 + 0x30u) == (f64)rdf32(0x817fde74u)) {
                        r0 = 1u;
                    } else {
                        r0 = 0u;
                    }
                    r0 = ppc_cntlzw(r0);
                    r0 = (r0 >> 5u) & 0x7ffffffu;
                }
                if (r0 != 0u) {
                    r5 = rd32(r27 + 0x70u);
                    r4 = rd32(r27 + 0x74u);
                    r0 = rd32(r27 + 0x50u);
                    f2 = (f64)rdf32(r30 + 0x64u);
                    wr32(0x817fde60u, rd32(r27 + 0x4cu));
                    wr32(r26 + 4u, r25);
                    f1 = (f64)rdf32(0x817fde60u);
                    wrf32d(r26 + 8u, f26);
                    wrf32d(r26 + 0xcu, f25);
                    wrf32d(r26 + 0x10u, f24);
                    wrf32d(r26 + 0x14u, f23);
                    wr32(r26 + 0x18u, r24);
                    wr32(0x817fde64u, r0);
                    wr32(r26 + 0x1cu, r23);
                    f0 = (f64)rdf32(0x817fde64u);
                    wrf32d(r26 + 0x20u, f1);
                    wr32(0x817fde58u, r5);
                    wrf32d(r26 + 0x24u, f0);
                    f1 = (f64)rdf32(0x817fde58u);
                    wr32(0x817fde5cu, r4);
                    wrf32d(r26 + 0x28u, f2);
                    f0 = (f64)rdf32(0x817fde5cu);
                    wrf32d(r26 + 0x2cu, f1);
                    wrf32d(r26 + 0x30u, f0);
                    r20 = (u32)rd8(r25 + 0xcu);
                    do {
                        if ((s32)r20 >= 11) {
                            if (r20 != 0xeu) break;
                        } else {
                            c0lt = (s32)r20 < 7;
                            if (r20 == 7u) break;
                            if (!c0lt) {
                                a.r[0] = 0x817fde78u;
                                a.r[1] = rd32(r25 + 0x1cu);
                                a.r[2] = (u32)rd8(r25 + 0xdu);
                                a.r[3] = (u32)rd16(r25 + 0xeu);
                                (void)tc_call(0x80252774u, &a);
                                a.r[0] = 0x817fde78u;
                                a.r[1] = rd32(r31 + 0xc4u);
                                (void)tc_call(0x8025279cu, &a);
                                wr32(0x817fde48u, rd32(r31 + 0xc4u));
                                a.r[0] = 0x817fde88u;
                                a.r[1] = rd32(r25 + 0x18u);
                                a.r[2] = (u32)rd16(r25 + 4u);
                                a.r[3] = (u32)rd16(r25 + 6u);
                                a.r[4] = r20;
                                a.r[5] = r24;
                                a.r[6] = r23;
                                a.r[7] = ((1u - (u32)rd8(r25 + 0x14u)) >> 0x1fu) & 1u;
                                (void)tc_call(0x80252348u, &a);
                                break;
                            }
                            if ((s32)r20 < 0) break;
                        }
                        a.r[0] = 0x817fde88u;
                        a.r[1] = rd32(r25 + 0x18u);
                        a.r[2] = (u32)rd16(r25 + 4u);
                        a.r[3] = (u32)rd16(r25 + 6u);
                        a.r[4] = r20;
                        a.r[5] = r24;
                        a.r[6] = r23;
                        a.r[7] = ((1u - (u32)rd8(r25 + 0x14u)) >> 0x1fu) & 1u;
                        (void)tc_call(0x8025213cu, &a);
                    } while (0);
                    r0 = (u32)rd8(r25 + 0x14u);
                    r4 = 1u;
                    wr32(0x817fdf0cu, r0);
                    f2 = (f64)(f32)(f29 + (f64)(f32)(rdf64(0x817fdf08u) - f28));
                    if (r0 > 1u) {
                        r4 = 5u;
                    }
                    a.f[0] = (f64)rdf32(0x80577be4u);
                    a.f[1] = f2;
                    a.f[2] = f22;
                    a.r[0] = 0x817fde88u;
                    a.r[1] = r4;
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    (void)tc_call(0x80252390u, &a);
                    a.r[0] = 0x817fde88u;
                    a.r[1] = rd32(r31 + 0xc4u);
                    (void)tc_call(0x80252720u, &a);
                    a.r[0] = 0x817fded8u;
                    (void)tc_call(0x80233740u, &a);
                    wrf32d(0x817fdee4u, (f64)rdf32(r27 + 0x70u));
                    wrf32d(0x817fdef4u, (f64)rdf32(r27 + 0x74u));
                    f1 = (f64)rdf32(r30 + 0x64u);
                    if (f22 != f1) {
                        a.f[0] = f1;
                        a.r[0] = 0x817fde54u;
                        a.r[1] = 0x817fde50u;
                        (void)tc_call(0x80320a58u, &a);
                        a.r[0] = 0x817fdea8u;
                        (void)tc_call(0x80233740u, &a);
                        f1 = (f64)rdf32(0x817fde50u);
                        f3 = (f64)rdf32(0x817fde54u);
                        f0 = (f64)(f32)(f30 - f1);
                        wrf32d(0x817fdebcu, f1);
                        wrf32d(0x817fdea8u, f1);
                        f1 = (f64)(f32)(f0 + f3);
                        f0 = (f64)(f32)(f0 - f3);
                        wrf32d(0x817fdeb8u, f3);
                        f1 = (f64)(f32)(f31 * f1);
                        wrf32d(0x817fdeacu, -f3);
                        f0 = (f64)(f32)(f31 * f0);
                        wrf32d(0x817fdeb4u, f1);
                        wrf32d(0x817fdec4u, f0);
                        a.r[0] = 0x817fdea8u;
                        a.r[1] = 0x817fded8u;
                        a.r[2] = 0x817fded8u;
                        (void)tc_call(0x802337a0u, &a);
                    }
                    if (f30 != f26 || f30 != f25 || f30 != (f64)rdf32(r27 + 0x4cu) || f30 != (f64)rdf32(r27 + 0x50u) || f22 != f24 || f22 != f23) {
                        f3 = (f64)(f32)(f26 * (f64)rdf32(r27 + 0x4cu));
                        wrf32d(0x817fdeacu, f22);
                        wrf32d(0x817fdea8u, f3);
                        wrf32d(0x817fdeb0u, f22);
                        wrf32d(0x817fdeb8u, f22);
                        wrf32d(0x817fdeb4u, (f64)(f32)(f24 + (f64)(f32)((f64)(f32)(f31 * f26) - (f64)(f32)(f31 * f3))));
                        f2 = (f64)(f32)(f25 * (f64)rdf32(r27 + 0x50u));
                        wrf32d(0x817fdec0u, f22);
                        wrf32d(0x817fdec8u, f22);
                        wrf32d(0x817fdebcu, f2);
                        wrf32d(0x817fdeccu, f22);
                        wrf32d(0x817fded0u, f30);
                        wrf32d(0x817fded4u, f22);
                        wrf32d(0x817fdec4u, (f64)(f32)(f23 + (f64)(f32)((f64)(f32)(f31 * f25) - (f64)(f32)(f31 * f2))));
                        a.r[0] = 0x817fdea8u;
                        a.r[1] = 0x817fded8u;
                        a.r[2] = 0x817fded8u;
                        (void)tc_call(0x802337a0u, &a);
                    }
                    r3 = (u32)rd16(param_3);
                    r0 = r21 + 7u;
                    r0 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r3 >> 31) : (u32)((s32)r3 >> (s32)(r0 & 0x1fu));
                    r0 = r0 & 1u;
                    if (r0 != 0u) {
                        a.r[0] = (u32)param_4 + 0x30u;
                        a.r[1] = 0x817fded8u;
                        a.r[2] = 0x817fded8u;
                        (void)tc_call(0x802337a0u, &a);
                        r4 = rd32(r31 + 0xc4u);
                        r4 = ((r4 << 2u) & 0xfffffffcu) - r4;
                        r4 = r4 + 0x40u;
                        a.r[0] = 0x817fded8u;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        (void)tc_call(0x80254568u, &a);
                        r3 = rd32(r31 + 0xc4u);
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = ((r3 << 2u) & 0xfffffffcu) - r3 + 0x40u;
                        (void)tc_call(0x8024ff44u, &a);
                    } else {
                        r4 = rd32(r31 + 0xc4u);
                        r4 = ((r4 << 2u) & 0xfffffffcu) - r4;
                        r4 = r4 + 0x1eu;
                        a.r[0] = 0x817fded8u;
                        a.r[1] = r4;
                        a.r[2] = 1u;
                        (void)tc_call(0x80254568u, &a);
                        r3 = rd32(r31 + 0xc4u);
                        a.r[0] = r3;
                        a.r[1] = 1u;
                        a.r[2] = 4u;
                        a.r[3] = ((r3 << 2u) & 0xfffffffcu) - r3 + 0x1eu;
                        a.r[4] = 0u;
                        a.r[5] = 0x7du;
                        (void)tc_call(0x8024ff44u, &a);
                    }
                }
            }
        }
        r21 = r21 + 1u;
        r30 = r30 + 4u;
        r29 = r29 + 4u;
        r28 = r28 + 2u;
        r27 = r27 + 8u;
        r26 = r26 + 0x30u;
        r31 = r31 + 4u;
    } while ((s32)r21 < 3);
    return;
}
