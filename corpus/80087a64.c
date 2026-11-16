#include "tc_rt.h"

void fn_80087a64(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r14 = 0, r15 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0;
    u32 r20 = 0, r21 = 0, t11 = 0, t23 = 0, t27 = 0, t31 = 0, t35 = 0, t39 = 0, t43 = 0, t63 = 0, t67 = 0, t71 = 0;
    u32 t75 = 0, t79 = 0;
    f64 f7 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t5 = 0.0, t7 = 0.0, t13 = 0.0, t15 = 0.0, t21 = 0.0, t25 = 0.0, t29 = 0.0, t33 = 0.0;
    f64 t37 = 0.0, t41 = 0.0, t45 = 0.0, t47 = 0.0, t53 = 0.0, t55 = 0.0, t61 = 0.0, t65 = 0.0, t69 = 0.0, t73 = 0.0, t77 = 0.0, t81 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdeb0u, 0x817fe000u);
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
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    r0 = rd32(param_2 + 0x58u);
    r15 = param_1;
    wr32(0x817fdeb8u, param_4);
    wr32(0x817fdebcu, param_5);
    if (r0 != 0u) {
        a.r[0] = param_3;
        r3 = tc_call(0x80037914u, &a);
        r14 = r3;
        wr32(0x817fdf78u, rd32(r3 + 8u));
        f29 = rdf64(0x80572928u);
        f30 = (f64)rdf32(0x80572920u);
        f31 = (f64)rdf32(0x80572934u);
        wr32(0x817fdf7cu, 0x48584842u);
        r16 = 0u;
        r17 = 0u;
        r19 = 0u;
        while (r19 < rd32(0x817fdf78u)) {
            a.r[0] = r14;
            a.r[1] = r19;
            r3 = tc_call(0x80037988u, &a);
            r5 = rd32(r3);
            r0 = rd32(0x817fdf7cu);
            c0lt = (s32)r5 < (s32)r0;
            if (r5 == r0) {
                a.r[0] = r3;
                r3 = tc_call(0x8003b444u, &a);
                r16 = r3;
            } else if (c0lt && r5 == 0x48584742u) {
                a.r[0] = r3;
                r3 = tc_call(0x80038ce4u, &a);
                r17 = r3;
            }
            if (r16 != 0u && r17 != 0u) {
                a.r[0] = r16;
                a.r[1] = 0xffffffffu;
                r3 = tc_call(0x8003140cu, &a);
                r18 = r3;
                r3 = tc_call(0x800545e4u, &a);
                r6 = r3;
                if (r18 != 0u) {
                    if (rd32(r3 + 0x10u) == 0u) {
                        if (rd32(r3 + 0x20u) == 0u) {
                            r5 = rd32(r3 + 0xcu);
                            r3 = rd32(r3);
                            r6 = r6 + 0x18u;
                            a.r[0] = r3;
                            a.r[1] = r18;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            r3 = tc_call(0x80040cd8u, &a);
                        } else {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = r18;
                            r3 = tc_call(0x80094e80u, &a);
                        }
                    } else {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r18;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        r3 = tc_call(0x80040db8u, &a);
                    }
                    r18 = r3;
                } else {
                    r18 = 0u;
                }
                a.r[0] = r16;
                a.r[1] = r17;
                a.r[2] = 0xffffffffu;
                a.r[3] = r18;
                (void)tc_call(0x80031268u, &a);
                r17 = 0u;
                while (r17 < rd32(r18 + 0x34u)) {
                    r16 = rd32(r18 + 0x38u) + (rd32(r18 + 0x3cu) * r17);
                    if (((u32)rd16(r16 + 0x34u) & 8u) != 0u) {
                        a.r[0] = rd32(r16 + 0x3cu);
                        a.r[1] = 0x80337b2fu;
                        a.r[2] = 2u;
                        r3 = tc_call(0x8025bfccu, &a);
                        if (r3 == 0u) {
                            r21 = r15;
                            for (;;) {
                                r6 = (u32)(s16)rd16(rd32(r16 + 0x3cu) + 0x6au);
                                if (r6 == 0xffffffffu) break;
                                r16 = rd32(r18 + 0x38u) + (rd32(r18 + 0x3cu) * r6);
                                r20 = rd32(r16 + 0x3cu);
                                a.r[0] = r20;
                                a.r[1] = 0x80337b32u;
                                a.r[2] = 1u;
                                r3 = tc_call(0x8025bfccu, &a);
                                if (r3 != 0u) {
                                    a.r[0] = r20;
                                    a.r[1] = 0x80337b34u;
                                    a.r[2] = 8u;
                                    r3 = tc_call(0x8025bfccu, &a);
                                    if (r3 != 0u) {
                                        wr32(r21 + 0x3180u, 1u);
                                    } else {
                                        wr32(r21 + 0x3180u, 0u);
                                    }
                                    r3 = rd32(r16 + 0x54u);
                                    t43 = r3 + 0xcu;
                                    t45 = (f64)rdf32(t43 + 4u);
                                    t47 = (f64)rdf32(r3 + 0x14u);
                                    wrf32d(0x817fded8u, (f64)rdf32(t43));
                                    wrf32d(0x817fdedcu, t45);
                                    wrf32d(0x817fdee0u, t47);
                                    t53 = (f64)rdf32(r3 + 4u);
                                    t55 = (f64)rdf32(r3 + 8u);
                                    wrf32d(0x817fdeccu, (f64)rdf32(r3));
                                    wrf32d(0x817fded0u, t53);
                                    wrf32d(0x817fded4u, t55);
                                    r3 = rd32(r16 + 0x50u);
                                    t61 = (f64)rdf32(r3 + 4u);
                                    wrf32d(0x817fdf00u, (f64)rdf32(r3));
                                    wrf32d(0x817fdf04u, t61);
                                    t63 = r3 + 8u;
                                    t65 = (f64)rdf32(t63 + 4u);
                                    wrf32d(0x817fdf08u, (f64)rdf32(t63));
                                    wrf32d(0x817fdf0cu, t65);
                                    t67 = r3 + 0x10u;
                                    t69 = (f64)rdf32(t67 + 4u);
                                    wrf32d(0x817fdf10u, (f64)rdf32(t67));
                                    wrf32d(0x817fdf14u, t69);
                                    t71 = r3 + 0x18u;
                                    t73 = (f64)rdf32(t71 + 4u);
                                    wrf32d(0x817fdf18u, (f64)rdf32(t71));
                                    wrf32d(0x817fdf1cu, t73);
                                    t75 = r3 + 0x20u;
                                    t77 = (f64)rdf32(t75 + 4u);
                                    wrf32d(0x817fdf20u, (f64)rdf32(t75));
                                    wrf32d(0x817fdf24u, t77);
                                    t79 = r3 + 0x28u;
                                    t81 = (f64)rdf32(t79 + 4u);
                                    wrf32d(0x817fdf28u, (f64)rdf32(t79));
                                    wrf32d(0x817fdf2cu, t81);
                                    a.r[0] = 0x817fdf00u;
                                    a.r[1] = 0x817fdeccu;
                                    a.r[2] = 0x817fdeccu;
                                    (void)tc_call(0x8023411cu, &a);
                                    a.r[0] = 0x817fdf00u;
                                    a.r[1] = 0x817fded8u;
                                    a.r[2] = 0x817fded8u;
                                    (void)tc_call(0x8023411cu, &a);
                                    wr32(r21 + 0x317cu, 1u);
                                    wrf32d(r21 + 0x3190u, (f64)rdf32(0x817fded8u));
                                    wrf32d(r21 + 0x3194u, (f64)rdf32(0x817fdedcu));
                                    wrf32d(r21 + 0x3198u, (f64)rdf32(0x817fdee0u));
                                    wrf32d(r21 + 0x3184u, (f64)rdf32(0x817fdeccu));
                                    wrf32d(r21 + 0x3188u, (f64)rdf32(0x817fded0u));
                                    wrf32d(r21 + 0x318cu, (f64)rdf32(0x817fded4u));
                                    r21 = r21 + 0x20u;
                                } else {
                                    a.r[0] = 0x817fdec8u;
                                    a.r[1] = r20 + 1u;
                                    a.r[2] = 3u;
                                    (void)tc_call(0x8025bdf4u, &a);
                                    a.r[0] = 0x817fdec4u;
                                    a.r[1] = r20 + 6u;
                                    a.r[2] = 3u;
                                    (void)tc_call(0x8025bdf4u, &a);
                                    a.r[0] = 0x817fdec0u;
                                    a.r[1] = r20 + 0xbu;
                                    a.r[2] = 4u;
                                    (void)tc_call(0x8025bdf4u, &a);
                                    wr32(r15 + 0x315cu, 1u);
                                    a.r[0] = 0x817fdec8u;
                                    a.r[1] = 3u;
                                    r3 = tc_call(0x800844b4u, &a);
                                    wr32(0x817fdf64u, r3);
                                    wr32(0x817fdf60u, 0x43300000u);
                                    wrf32d(r15 + 0x3174u, (f64)(f32)(rdf64(0x817fdf60u) - f29));
                                    a.r[0] = 0x817fdec4u;
                                    a.r[1] = 3u;
                                    r3 = tc_call(0x800844b4u, &a);
                                    wr32(0x817fdf6cu, r3);
                                    wr32(0x817fdf68u, 0x43300000u);
                                    wrf32d(r15 + 0x3178u, (f64)(f32)(rdf64(0x817fdf68u) - f29));
                                    a.r[0] = 0x817fdec1u;
                                    a.r[1] = 3u;
                                    r3 = tc_call(0x800844b4u, &a);
                                    wr32(0x817fdf74u, r3);
                                    wr32(0x817fdf70u, 0x43300000u);
                                    wrf32d(r15 + 0x3170u, (f64)(f32)(rdf64(0x817fdf70u) - f29));
                                    if ((u32)rd8(0x817fdec0u) == 0x2du) {
                                        wrf32d(r15 + 0x3170u, (f64)(f32)((f64)rdf32(r15 + 0x3170u) * f30));
                                    }
                                    r3 = rd32(r16 + 0x54u);
                                    t5 = (f64)rdf32(r3 + 4u);
                                    t7 = (f64)rdf32(r3 + 8u);
                                    wrf32d(0x817fdef0u, (f64)rdf32(r3));
                                    wrf32d(0x817fdef4u, t5);
                                    wrf32d(0x817fdef8u, t7);
                                    t11 = r3 + 0xcu;
                                    t13 = (f64)rdf32(t11 + 4u);
                                    t15 = (f64)rdf32(r3 + 0x14u);
                                    wrf32d(0x817fdee4u, (f64)rdf32(t11));
                                    wrf32d(0x817fdee8u, t13);
                                    wrf32d(0x817fdeecu, t15);
                                    r3 = rd32(r16 + 0x50u);
                                    t21 = (f64)rdf32(r3 + 4u);
                                    wrf32d(0x817fdf30u, (f64)rdf32(r3));
                                    wrf32d(0x817fdf34u, t21);
                                    t23 = r3 + 8u;
                                    t25 = (f64)rdf32(t23 + 4u);
                                    wrf32d(0x817fdf38u, (f64)rdf32(t23));
                                    wrf32d(0x817fdf3cu, t25);
                                    t27 = r3 + 0x10u;
                                    t29 = (f64)rdf32(t27 + 4u);
                                    wrf32d(0x817fdf40u, (f64)rdf32(t27));
                                    wrf32d(0x817fdf44u, t29);
                                    t31 = r3 + 0x18u;
                                    t33 = (f64)rdf32(t31 + 4u);
                                    wrf32d(0x817fdf48u, (f64)rdf32(t31));
                                    wrf32d(0x817fdf4cu, t33);
                                    t35 = r3 + 0x20u;
                                    t37 = (f64)rdf32(t35 + 4u);
                                    wrf32d(0x817fdf50u, (f64)rdf32(t35));
                                    wrf32d(0x817fdf54u, t37);
                                    t39 = r3 + 0x28u;
                                    t41 = (f64)rdf32(t39 + 4u);
                                    wrf32d(0x817fdf58u, (f64)rdf32(t39));
                                    wrf32d(0x817fdf5cu, t41);
                                    a.r[0] = 0x817fdf30u;
                                    a.r[1] = 0x817fdef0u;
                                    a.r[2] = 0x817fdef0u;
                                    (void)tc_call(0x8023411cu, &a);
                                    a.r[0] = 0x817fdf30u;
                                    a.r[1] = 0x817fdee4u;
                                    a.r[2] = 0x817fdee4u;
                                    (void)tc_call(0x8023411cu, &a);
                                    f7 = (f64)(f32)((f64)(f32)((f64)rdf32(0x817fdee4u) - (f64)rdf32(0x817fdef0u)) * f31);
                                    wrf32d(r15 + 0x316cu, f7);
                                    wrf32d(r15 + 0x3160u, (f64)(f32)((f64)rdf32(0x817fdef0u) + f7));
                                    wrf32d(r15 + 0x3168u, (f64)(f32)((f64)rdf32(0x817fdef8u) + f7));
                                    wrf32d(r15 + 0x3164u, (f64)rdf32(0x817fdef4u));
                                }
                            }
                        }
                        r15 = r15 + 0x160u;
                    }
                    r17 = r17 + 1u;
                }
                r16 = 0u;
                r17 = 0u;
                r3 = tc_call(0x800545e4u, &a);
                r6 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r18;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        (void)tc_call(0x80040e98u, &a);
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = r18;
                        (void)tc_call(0x80094ec0u, &a);
                    }
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r18;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
            r19 = r19 + 1u;
        }
        r4 = rd32(rd32(0x817fdebcu));
        r3 = rd32(0x817fdeb8u);
        wr32(rd32(0x817fdebcu), r4 + 1u);
        a.r[0] = r3;
        a.r[1] = r4;
        (void)tc_call(0x80037988u, &a);
    }
    return;
}
