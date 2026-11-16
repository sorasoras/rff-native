#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80324000(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, f64 param_f1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0;
    u32 r22 = 0, r23 = 0, r25 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f14 = 0.0, f15 = 0.0, f16 = 0.0, f17 = 0.0, f18 = 0.0, f19 = 0.0;
    f64 f20 = 0.0, f21 = 0.0, f22 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t22 = 0.0;
    f64 t28 = 0.0, t34 = 0.0, t40 = 0.0, t46 = 0.0, t52 = 0.0, t58 = 0.0, t64 = 0.0, t70 = 0.0;
    TcArgs a = {0};
    wr32(0x817fddd0u, 0x817fe000u);
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
    wrf64(0x817fdf50u, 0.0);
    wrf32d(0x817fdf58u, 0.0);
    wrf32d(0x817fdf5cu, 0.0);
    wrf64(0x817fdf40u, 0.0);
    wrf32d(0x817fdf48u, 0.0);
    wrf32d(0x817fdf4cu, 0.0);
    wrf64(0x817fdf30u, 0.0);
    wrf32d(0x817fdf38u, 0.0);
    wrf32d(0x817fdf3cu, 0.0);
    wrf64(0x817fdf20u, 0.0);
    wrf32d(0x817fdf28u, 0.0);
    wrf32d(0x817fdf2cu, 0.0);
    wrf64(0x817fdf10u, 0.0);
    wrf32d(0x817fdf18u, 0.0);
    wrf32d(0x817fdf1cu, 0.0);
    wrf64(0x817fdf00u, 0.0);
    wrf32d(0x817fdf08u, 0.0);
    wrf32d(0x817fdf0cu, 0.0);
    wrf64(0x817fdef0u, 0.0);
    wrf32d(0x817fdef8u, 0.0);
    wrf32d(0x817fdefcu, 0.0);
    wrf64(0x817fdee0u, 0.0);
    wrf32d(0x817fdee8u, 0.0);
    wrf32d(0x817fdeecu, 0.0);
    wr32(0x817fdea4u, 0u);
    wr32(0x817fdea8u, 0u);
    wr32(0x817fdeacu, 0u);
    wr32(0x817fdeb0u, 0u);
    wr32(0x817fdeb4u, 0u);
    wr32(0x817fdeb8u, 0u);
    wr32(0x817fdebcu, 0u);
    wr32(0x817fdec0u, 0u);
    wr32(0x817fdec4u, 0u);
    wr32(0x817fdec8u, 0u);
    wr32(0x817fdeccu, 0u);
    wr32(0x817fded0u, 0u);
    wr32(0x817fded4u, 0u);
    wr32(0x817fded8u, 0u);
    wr32(0x817fdedcu, 0u);
    wr32(0x817fde80u, 0x43300000u);
    wr32(0x817fde88u, 0x43300000u);
    if ((s32)param_4 >= 1) {
        f31 = (f64)rdf32(param_6);
        if ((param_5 & 0x2000000u) == 0u) {
            f30 = (f64)rdf32(param_6 + 8u);
            wrf32d(0x817fde94u, (f64)rdf32(param_6 + 4u));
        } else {
            f30 = f31;
            wrf32d(0x817fde94u, f31);
        }
        f0 = (f64)rdf32(0x80577bd0u);
        if (f31 < f0) {
            f31 = f0;
        }
        f1 = (f64)rdf32(0x80577bd0u);
        if ((f64)rdf32(0x817fde94u) < f1) {
            wrf32d(0x817fde94u, f1);
        }
        f0 = (f64)rdf32(0x80577bd0u);
        if (f30 < f0) {
            f30 = f0;
        }
        f1 = (f64)rdf32(param_6 + 0xcu);
        if ((f64)rdf32(0x80577bb8u) != f1) {
            f29 = (f64)(f32)((f64)rdf32(0x80577bbcu) * f1);
        } else {
            f29 = (f64)rdf32(0x80577bd0u);
        }
        f27 = (f64)rdf32(param_2 + 0x78u);
        f0 = (f64)rdf32(0x80577bd8u);
        f28 = (f64)(f32)((f64)rdf32(0x80577bb4u) - f29);
        if ((f64)(f32)ppc_fabs((f64)(f32)(f27 - (f64)rdf32(0x80577bd4u))) < f0) {
            f27 = (f64)(f32)(f27 - f0);
        }
        if ((param_5 & 0x20000u) == 0u) {
            f17 = (f64)rdf32(0x80577bb8u);
            r17 = 0u;
            f21 = (f64)rdf32(0x80577bb0u);
            f22 = (f64)rdf32(0x80577bdcu);
            f18 = (f64)rdf32(0x80577bb4u);
            f19 = rdf64(0x80577bc0u);
            f20 = (f64)rdf32(0x80577bacu);
            while ((s32)r17 < (s32)param_4) {
                if (f17 != f29) {
                    if (f18 != f29) {
                        f0 = (f64)rdf32(0x817fde94u);
                        f3 = (f64)(f32)(f31 * f0);
                        f0 = (f64)(f32)(f0 * (f64)(f32)(f31 * f28));
                        f2 = (f64)(f32)(f29 * f3);
                        f3 = (f64)(f32)(f28 * f3);
                        r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                        f0 = (f64)(f32)(f29 * f0);
                        wr32(0x817fde8cu, (r3 >> 0x10u) & 0xffffu);
                        f1 = (f64)(f32)(f30 * f2);
                        f2 = (f64)(f32)(f30 * f0);
                        f0 = rdf64(0x817fde88u);
                        f3 = (f64)(f32)(f30 * f3);
                        f1 = (f64)(f32)(f28 * f1);
                        wr32(param_2 + 0xecu, r3);
                        f0 = (f64)(f32)(f0 - f19);
                        f1 = (f64)(f32)(f3 + f1);
                        f0 = (f64)(f32)((f64)(f32)((f64)(f32)(f29 * f2) + f1) * (f64)(f32)px_fdiv(f0, f20));
                        if (!(f0 < f3)) {
                            if (!(f0 < f1)) {
                                r3 = r3 * 0x343fdu;
                                r3 = r3 + 0x270000u;
                                r3 = r3 - 0x613du;
                                wr32(param_2 + 0xecu, r3);
                                wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                                f26 = (f64)(f32)(f28 * (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f19), f20)) - f18));
                                if (!((f26 > f17) || (f26 == f17))) {
                                    f26 = (f64)(f32)(f22 - f26);
                                } else {
                                    f26 = (f64)(f32)(f18 - f26);
                                }
                                r3 = r3 * 0x343fdu;
                                r3 = r3 + 0x270000u;
                                r0 = r3 - 0x613du;
                                r3 = r0 * 0x343fdu;
                                wr32(param_2 + 0xecu, r0);
                                r0 = (r0 >> 0x10u) & 0xffffu;
                                wr32(0x817fde8cu, r0);
                                r3 = r3 + 0x270000u;
                                r3 = r3 - 0x613du;
                                f0 = (f64)(f32)(rdf64(0x817fde88u) - f19);
                                wr32(param_2 + 0xecu, r3);
                                wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                                f25 = (f64)(f32)(f29 * (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv(f0, f20)) - f18));
                                f24 = (f64)(f32)(f29 * (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f19), f20)) - f18));
                            } else {
                                r3 = r3 * 0x343fdu;
                                r3 = r3 + 0x270000u;
                                r0 = r3 - 0x613du;
                                r3 = r0 * 0x343fdu;
                                wr32(param_2 + 0xecu, r0);
                                r0 = (r0 >> 0x10u) & 0xffffu;
                                wr32(0x817fde8cu, r0);
                                r3 = r3 + 0x270000u;
                                r0 = r3 - 0x613du;
                                f0 = (f64)(f32)(rdf64(0x817fde88u) - f19);
                                r3 = r0 * 0x343fdu;
                                wr32(param_2 + 0xecu, r0);
                                r0 = (r0 >> 0x10u) & 0xffffu;
                                wr32(0x817fde84u, r0);
                                r3 = r3 + 0x270000u;
                                r3 = r3 - 0x613du;
                                f1 = (f64)(f32)(rdf64(0x817fde80u) - f19);
                                wr32(0x817fde8cu, (r3 >> 0x10u) & 0xffffu);
                                f2 = (f64)(f32)(f21 * (f64)(f32)px_fdiv(f0, f20));
                                f0 = rdf64(0x817fde88u);
                                f1 = (f64)(f32)px_fdiv(f1, f20);
                                wr32(param_2 + 0xecu, r3);
                                f0 = (f64)(f32)(f0 - f19);
                                f1 = (f64)(f32)(f21 * f1);
                                f26 = (f64)(f32)(f2 - f18);
                                f0 = (f64)(f32)px_fdiv(f0, f20);
                                f0 = (f64)(f32)(f21 * f0);
                                f1 = (f64)(f32)(f1 - f18);
                                f0 = (f64)(f32)(f0 - f18);
                                f25 = (f64)(f32)(f29 * f1);
                                f24 = (f64)(f32)(f28 * f0);
                                if (!((f24 > f17) || (f24 == f17))) {
                                    f24 = (f64)(f32)(f22 - f24);
                                } else {
                                    f24 = (f64)(f32)(f18 - f24);
                                }
                            }
                        } else {
                            r3 = r3 * 0x343fdu;
                            r3 = r3 + 0x270000u;
                            r0 = r3 - 0x613du;
                            r3 = r0 * 0x343fdu;
                            wr32(param_2 + 0xecu, r0);
                            r0 = (r0 >> 0x10u) & 0xffffu;
                            wr32(0x817fde84u, r0);
                            r3 = r3 + 0x270000u;
                            r3 = r3 - 0x613du;
                            f0 = (f64)(f32)(rdf64(0x817fde80u) - f19);
                            wr32(param_2 + 0xecu, r3);
                            wr32(0x817fde8cu, (r3 >> 0x10u) & 0xffffu);
                            f26 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv(f0, f20)) - f18);
                            f25 = (f64)(f32)(f28 * (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde88u) - f19), f20)) - f18));
                            if (!((f25 > f17) || (f25 == f17))) {
                                f25 = (f64)(f32)(f22 - f25);
                            } else {
                                f25 = (f64)(f32)(f18 - f25);
                            }
                            r3 = r3 * 0x343fdu;
                            r3 = r3 + 0x270000u;
                            r3 = r3 - 0x613du;
                            wr32(param_2 + 0xecu, r3);
                            wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                            f24 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f19), f20)) - f18);
                        }
                    } else {
                        r6 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                        r5 = (r6 >> 0x10u) & 0xffffu;
                        wr32(param_2 + 0xecu, r6);
                        r4 = ppc_mulhw(715827883, (s32)r5);
                        r3 = r5 - ((r4 + ((r4 >> 0x1fu) & 1u)) * 6u);
                        c0lt = (s32)r3 < 3;
                        if (r3 == 3u) {
                            f25 = (f64)rdf32(0x80577bdcu);
                            r4 = (r6 * 0x343fdu) + 0x269ec3u;
                            wr32(param_2 + 0xecu, r4);
                            wr32(0x817fde8cu, (r4 >> 0x10u) & 0xffffu);
                            r3 = (r4 * 0x343fdu) + 0x269ec3u;
                            f0 = (f64)(f32)(rdf64(0x817fde88u) - f19);
                            wr32(param_2 + 0xecu, r3);
                            wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                            f26 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv(f0, f20)) - f18);
                            f24 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f19), f20)) - f18);
                        } else if (!c0lt) {
                            c0lt = (s32)r3 < 5;
                            if (r3 == 5u) {
                                f26 = (f64)rdf32(0x80577bdcu);
                                r4 = (r6 * 0x343fdu) + 0x269ec3u;
                                wr32(param_2 + 0xecu, r4);
                                wr32(0x817fde8cu, (r4 >> 0x10u) & 0xffffu);
                                r3 = (r4 * 0x343fdu) + 0x269ec3u;
                                f0 = (f64)(f32)(rdf64(0x817fde88u) - f19);
                                wr32(param_2 + 0xecu, r3);
                                wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                                f25 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv(f0, f20)) - f18);
                                f24 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f19), f20)) - f18);
                            } else if (c0lt) {
                                f26 = f18;
                                r4 = (r6 * 0x343fdu) + 0x269ec3u;
                                wr32(param_2 + 0xecu, r4);
                                wr32(0x817fde8cu, (r4 >> 0x10u) & 0xffffu);
                                r3 = (r4 * 0x343fdu) + 0x269ec3u;
                                f0 = (f64)(f32)(rdf64(0x817fde88u) - f19);
                                wr32(param_2 + 0xecu, r3);
                                wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                                f25 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv(f0, f20)) - f18);
                                f24 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f19), f20)) - f18);
                            }
                        } else {
                            c0lt = (s32)r3 < 1;
                            if (r3 == 1u) {
                                f24 = (f64)rdf32(0x80577bdcu);
                                r4 = (r6 * 0x343fdu) + 0x269ec3u;
                                wr32(param_2 + 0xecu, r4);
                                wr32(0x817fde8cu, (r4 >> 0x10u) & 0xffffu);
                                r3 = (r4 * 0x343fdu) + 0x269ec3u;
                                f0 = (f64)(f32)(rdf64(0x817fde88u) - f19);
                                wr32(param_2 + 0xecu, r3);
                                wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                                f26 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv(f0, f20)) - f18);
                                f25 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f19), f20)) - f18);
                            } else if (!c0lt) {
                                f25 = f18;
                                r4 = (r6 * 0x343fdu) + 0x269ec3u;
                                wr32(param_2 + 0xecu, r4);
                                wr32(0x817fde8cu, (r4 >> 0x10u) & 0xffffu);
                                r3 = (r4 * 0x343fdu) + 0x269ec3u;
                                f0 = (f64)(f32)(rdf64(0x817fde88u) - f19);
                                wr32(param_2 + 0xecu, r3);
                                wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                                f26 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv(f0, f20)) - f18);
                                f24 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f19), f20)) - f18);
                            } else if ((s32)r3 >= 0) {
                                f24 = f18;
                                r4 = (r6 * 0x343fdu) + 0x269ec3u;
                                wr32(param_2 + 0xecu, r4);
                                wr32(0x817fde8cu, (r4 >> 0x10u) & 0xffffu);
                                r3 = (r4 * 0x343fdu) + 0x269ec3u;
                                f0 = (f64)(f32)(rdf64(0x817fde88u) - f19);
                                wr32(param_2 + 0xecu, r3);
                                wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                                f26 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv(f0, f20)) - f18);
                                f25 = (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f19), f20)) - f18);
                            }
                        }
                    }
                } else {
                    r0 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                    r3 = r0 * 0x343fdu;
                    wr32(param_2 + 0xecu, r0);
                    r0 = (r0 >> 0x10u) & 0xffffu;
                    wr32(0x817fde84u, r0);
                    r3 = r3 + 0x270000u;
                    r0 = r3 - 0x613du;
                    f0 = (f64)(f32)(rdf64(0x817fde80u) - f19);
                    r3 = r0 * 0x343fdu;
                    wr32(param_2 + 0xecu, r0);
                    r0 = (r0 >> 0x10u) & 0xffffu;
                    wr32(0x817fde8cu, r0);
                    r3 = r3 + 0x270000u;
                    r3 = r3 - 0x613du;
                    f1 = (f64)(f32)(rdf64(0x817fde88u) - f19);
                    wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                    f2 = (f64)(f32)(f21 * (f64)(f32)px_fdiv(f0, f20));
                    f0 = rdf64(0x817fde80u);
                    f1 = (f64)(f32)px_fdiv(f1, f20);
                    wr32(param_2 + 0xecu, r3);
                    f0 = (f64)(f32)(f0 - f19);
                    f1 = (f64)(f32)(f21 * f1);
                    f26 = (f64)(f32)(f2 - f18);
                    f0 = (f64)(f32)px_fdiv(f0, f20);
                    f0 = (f64)(f32)(f21 * f0);
                    f25 = (f64)(f32)(f1 - f18);
                    f24 = (f64)(f32)(f0 - f18);
                }
                wrf32d(0x817fddd8u, f17);
                wrf32d(0x817fdddcu, f17);
                wrf32d(0x817fdde0u, f17);
                do {
                    if ((f25 > f17) || (f25 == f17)) {
                        f0 = (f64)(f32)ppc_fabs(f26);
                        if ((f25 > f0) || (f25 == f0)) {
                            f0 = (f64)(f32)ppc_fabs(f24);
                            if ((f25 > f0) || (f25 == f0)) {
                                wrf32d(0x817fdddcu, f18);
                                break;
                            }
                        }
                    }
                    if (f25 < f17) {
                        f0 = -f25;
                        f1 = (f64)(f32)ppc_fabs(f26);
                        if ((f0 > f1) || (f0 == f1)) {
                            f1 = (f64)(f32)ppc_fabs(f24);
                            if ((f0 > f1) || (f0 == f1)) {
                                wrf32d(0x817fdddcu, f22);
                                break;
                            }
                        }
                    }
                    if ((f26 > f17) || (f26 == f17)) {
                        f0 = (f64)(f32)ppc_fabs(f25);
                        if ((f26 > f0) || (f26 == f0)) {
                            f0 = (f64)(f32)ppc_fabs(f24);
                            if ((f26 > f0) || (f26 == f0)) {
                                wrf32d(0x817fddd8u, f18);
                                break;
                            }
                        }
                    }
                    if (f26 < f17) {
                        f0 = -f26;
                        f1 = (f64)(f32)ppc_fabs(f25);
                        if ((f0 > f1) || (f0 == f1)) {
                            f1 = (f64)(f32)ppc_fabs(f24);
                            if ((f0 > f1) || (f0 == f1)) {
                                wrf32d(0x817fddd8u, f22);
                                break;
                            }
                        }
                    }
                    if (!((f24 > f17) || (f24 == f17))) {
                        wrf32d(0x817fdde0u, f22);
                    } else {
                        wrf32d(0x817fdde0u, f18);
                    }
                } while (0);
                f3 = (f64)(f32)(f26 * f31);
                f1 = (f64)(f32)(f24 * f30);
                f2 = (f64)(f32)(f25 * (f64)rdf32(0x817fde94u));
                wrf32d(0x817fdde4u, f3);
                wrf32d(0x817fdde8u, f2);
                wrf32d(0x817fddecu, f1);
                if (f17 != f27) {
                    if (f17 == (f64)rdf32(0x817fddd8u)) {
                        if (f17 == (f64)rdf32(0x817fdddcu)) {
                            f0 = (f64)(f32)ppc_fabs(f2);
                            f1 = (f64)(f32)ppc_fabs(f3);
                            if (!(f1 > f0)) {
                                f1 = f0;
                            }
                            f1 = (f64)(f32)(f1 * f27);
                            a.f[0] = f1;
                            f1 = tc_callf(0x80262be8u, &a);
                            f4 = (f64)(f32)f1;
                            f2 = (f64)rdf32(0x817fdde4u);
                            f0 = (f64)rdf32(0x817fdde8u);
                            wrf32d(0x817fddd8u, f2);
                            f15 = (f64)(f32)ppc_fres(f4);
                            wrf32d(0x817fdddcu, f0);
                            f0 = (f64)(f32)(f0 * f0);
                            f16 = (f64)(f32)((f64)(f32)(f2 * f2) + f0);
                            t70 = ppc_fnmsubs(f4, (f64)(f32)(f15 * f15), (f64)(f32)(f15 + f15));
                            if (!((f16 < f17) || (f16 == f17))) {
                                a.f[0] = f16;
                                f1 = tc_callf(0x802eff54u, &a);
                                f0 = (f64)(f32)(f16 * f1);
                            } else {
                                f0 = f17;
                            }
                            wrf32d(0x817fdde0u, (f64)(f32)((f64)rdf32(0x817fdde0u) * (f64)(f32)(t70 * f0)));
                        } else {
                            f0 = (f64)(f32)ppc_fabs(f1);
                            f1 = (f64)(f32)ppc_fabs(f3);
                            if (!(f1 > f0)) {
                                f1 = f0;
                            }
                            f1 = (f64)(f32)(f1 * f27);
                            a.f[0] = f1;
                            f1 = tc_callf(0x80262be8u, &a);
                            f4 = (f64)(f32)f1;
                            f2 = (f64)rdf32(0x817fdde4u);
                            f0 = (f64)rdf32(0x817fddecu);
                            wrf32d(0x817fddd8u, f2);
                            f15 = (f64)(f32)ppc_fres(f4);
                            f0 = (f64)(f32)(f0 * f0);
                            f16 = (f64)(f32)((f64)(f32)(f2 * f2) + f0);
                            t64 = ppc_fnmsubs(f4, (f64)(f32)(f15 * f15), (f64)(f32)(f15 + f15));
                            if (!((f16 < f17) || (f16 == f17))) {
                                a.f[0] = f16;
                                f1 = tc_callf(0x802eff54u, &a);
                                f0 = (f64)(f32)(f16 * f1);
                            } else {
                                f0 = f17;
                            }
                            f1 = (f64)(f32)((f64)rdf32(0x817fdddcu) * (f64)(f32)(t64 * f0));
                            wrf32d(0x817fdde0u, (f64)rdf32(0x817fddecu));
                            wrf32d(0x817fdddcu, f1);
                        }
                    } else {
                        f0 = (f64)(f32)ppc_fabs(f1);
                        f1 = (f64)(f32)ppc_fabs(f2);
                        if (!(f1 > f0)) {
                            f1 = f0;
                        }
                        f1 = (f64)(f32)(f1 * f27);
                        a.f[0] = f1;
                        f1 = tc_callf(0x80262be8u, &a);
                        f4 = (f64)(f32)f1;
                        f1 = (f64)rdf32(0x817fdde8u);
                        f0 = (f64)rdf32(0x817fddecu);
                        f1 = (f64)(f32)(f1 * f1);
                        f15 = (f64)(f32)ppc_fres(f4);
                        f0 = (f64)(f32)(f0 * f0);
                        f16 = (f64)(f32)(f1 + f0);
                        t58 = ppc_fnmsubs(f4, (f64)(f32)(f15 * f15), (f64)(f32)(f15 + f15));
                        if (!((f16 < f17) || (f16 == f17))) {
                            a.f[0] = f16;
                            f1 = tc_callf(0x802eff54u, &a);
                            f0 = (f64)(f32)(f16 * f1);
                        } else {
                            f0 = f17;
                        }
                        f3 = (f64)(f32)(t58 * f0);
                        f0 = (f64)rdf32(0x817fddecu);
                        f2 = (f64)(f32)((f64)rdf32(0x817fddd8u) * f3);
                        wrf32d(0x817fdddcu, (f64)rdf32(0x817fdde8u));
                        wrf32d(0x817fdde0u, f0);
                        wrf32d(0x817fddd8u, f2);
                    }
                }
                a.f[0] = param_f1;
                a.r[0] = param_1;
                a.r[1] = 0x817fdde4u;
                a.r[2] = 0x817fddd8u;
                a.r[3] = param_2;
                a.r[4] = param_3;
                a.r[5] = param_7;
                a.r[6] = param_8;
                (void)tc_call(0x80323cc0u, &a);
                r17 = r17 + 1u;
            }
        } else {
            r8 = (param_4 >> 0x1fu) & 1u;
            f1 = rdf64(0x80577bc8u);
            wr32(0x817fde84u, (param_4 + 1u) ^ 0x80000000u);
            r4 = param_4 - 1u;
            f1 = (f64)(f32)(rdf64(0x817fde80u) - f1);
            r22 = (u32)((s32)(r8 + param_4) >> 1) + 1u;
            r19 = 0u;
            f29 = (f64)(f32)px_fdiv((f64)rdf32(0x80577bb0u), f1);
            r20 = (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1) + 1u;
            if ((((param_4 & 1u) ^ r8) - r8) == 0u) {
                r19 = 2u;
            }
            r23 = param_4 * param_4;
            f21 = (f64)rdf32(0x80577bb8u);
            r25 = param_5 & 0x1000000u;
            f22 = -(f64)rdf32(0x817fde94u);
            f25 = rdf64(0x80577bc8u);
            f24 = (f64)rdf32(0x80577bb4u);
            f20 = rdf64(0x80577bc0u);
            r18 = 1u;
            f19 = (f64)rdf32(0x80577bacu);
            r17 = 1u;
            f18 = (f64)rdf32(0x80577bd0u);
            r21 = 0u;
            f17 = (f64)rdf32(0x80577bdcu);
            while ((s32)r21 < (s32)r23) {
                if (r21 != 0u) {
                    c0lt = (s32)r19 < 2;
                    if (r19 == 2u) {
                        r20 = r20 + 1u;
                    } else if (!c0lt) {
                        if ((s32)r19 < 4) {
                            r22 = r22 - 1u;
                        }
                    } else {
                        c0lt = (s32)r19 < 0;
                        if (r19 == 0u) {
                            r20 = r20 - 1u;
                        } else if (!c0lt) {
                            r22 = r22 + 1u;
                        }
                    }
                    r17 = r17 - 1u;
                    if ((s32)r17 <= 0) {
                        r19 = r19 + 1u;
                        if (r19 == 4u) {
                            r19 = 0u;
                        }
                        r3 = (r19 >> 0x1fu) & 1u;
                        if ((((r19 & 1u) ^ r3) - r3) == 0u) {
                            r18 = r18 + 1u;
                        }
                        r17 = r18;
                    }
                }
                wr32(0x817fde8cu, r22 ^ 0x80000000u);
                wr32(0x817fde84u, r20 ^ 0x80000000u);
                f2 = (f64)(f32)((f64)(f32)((f64)(f32)(rdf64(0x817fde88u) - f25) * f29) - f24);
                f3 = (f64)(f32)((f64)(f32)((f64)(f32)(rdf64(0x817fde80u) - f25) * f29) - f24);
                f4 = (f64)(f32)(f2 * f31);
                f1 = (f64)(f32)ppc_fabs(f2);
                f0 = (f64)(f32)ppc_fabs(f3);
                f5 = (f64)(f32)(f3 * f30);
                if (!(f1 > f0)) {
                    f1 = f0;
                }
                f0 = ppc_fabs(f3);
                f2 = ppc_fabs(f2);
                f3 = (f64)(f32)(f24 - f1);
                f0 = (f64)(f32)f0;
                f1 = (f64)(f32)f2;
                if (!(f1 > f0)) {
                    f1 = f0;
                }
                wrf32d(0x817fde74u, f4);
                wrf32d(0x817fde78u, f22);
                wrf32d(0x817fde7cu, f5);
                if (f21 != f28) {
                    if (r25 == 0u) {
                        r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                        wr32(param_2 + 0xecu, r3);
                        wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                        f2 = (f64)(f32)(f24 - (f64)(f32)(f3 * (f64)(f32)(f28 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f20), f19))));
                    } else {
                        r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                        wr32(param_2 + 0xecu, r3);
                        wr32(0x817fde8cu, (r3 >> 0x10u) & 0xffffu);
                        f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde88u) - f20), f19);
                        f0 = (f64)(f32)(f0 * f0);
                        f0 = (f64)(f32)(f0 * f28);
                        f0 = (f64)(f32)(f3 * f0);
                        f2 = (f64)(f32)(f24 - f0);
                    }
                    wrf32d(0x817fde78u, (f64)(f32)((f64)rdf32(0x817fde78u) * f2));
                }
                if (f21 == f27 || ((f64)(f32)ppc_fabs((f64)rdf32(0x817fde74u)) < f18 && (f64)(f32)ppc_fabs((f64)rdf32(0x817fde7cu)) < f18)) {
                    wrf32d(0x817fde68u, f21);
                    wrf32d(0x817fde6cu, f17);
                    wrf32d(0x817fde70u, f21);
                } else {
                    f1 = (f64)(f32)(f1 * f27);
                    a.f[0] = f1;
                    f1 = tc_callf(0x80262be8u, &a);
                    f4 = (f64)(f32)f1;
                    f2 = (f64)rdf32(0x817fde74u);
                    f0 = (f64)rdf32(0x817fde7cu);
                    wrf32d(0x817fde68u, f2);
                    f26 = (f64)(f32)ppc_fres(f4);
                    f0 = (f64)(f32)(f0 * f0);
                    f14 = (f64)(f32)((f64)(f32)(f2 * f2) + f0);
                    t22 = ppc_fnmsubs(f4, (f64)(f32)(f26 * f26), (f64)(f32)(f26 + f26));
                    if (!((f14 < f21) || (f14 == f21))) {
                        a.f[0] = f14;
                        f1 = tc_callf(0x802eff54u, &a);
                        f0 = (f64)(f32)(f14 * f1);
                    } else {
                        f0 = f21;
                    }
                    wrf32d(0x817fde70u, (f64)rdf32(0x817fde7cu));
                    wrf32d(0x817fde6cu, (f64)(f32)(t22 * -f0));
                }
                a.f[0] = param_f1;
                a.r[0] = param_1;
                a.r[1] = 0x817fde74u;
                a.r[2] = 0x817fde68u;
                a.r[3] = param_2;
                a.r[4] = param_3;
                a.r[5] = param_7;
                a.r[6] = param_8;
                (void)tc_call(0x80323cc0u, &a);
                r21 = r21 + 1u;
            }
            f24 = (f64)rdf32(0x80577bb8u);
            f25 = -f30;
            f22 = rdf64(0x80577bc8u);
            f21 = (f64)rdf32(0x80577bb4u);
            r21 = 1u;
            wrf64(0x817fde98u, -f31);
            f20 = rdf64(0x80577bc0u);
            f19 = (f64)rdf32(0x80577bacu);
            f18 = (f64)rdf32(0x80577bd0u);
            f17 = (f64)rdf32(0x80577bdcu);
            while ((s32)r21 <= (s32)param_4) {
                r22 = 1u;
                wr32(0x817fde8cu, r21 ^ 0x80000000u);
                f0 = (f64)(f32)((f64)(f32)((f64)(f32)(rdf64(0x817fde88u) - f22) * f29) - f21);
                wrf32d(0x817fde90u, f0);
                f0 = (f64)(f32)f0;
                f26 = (f64)(f32)((f64)rdf32(0x817fde90u) * (f64)rdf32(0x817fde94u));
                f14 = (f64)(f32)ppc_fabs(f0);
                while ((s32)r22 <= (s32)param_4) {
                    wr32(0x817fde84u, r22 ^ 0x80000000u);
                    f1 = (f64)(f32)((f64)(f32)((f64)(f32)(rdf64(0x817fde80u) - f22) * f29) - f21);
                    f2 = (f64)(f32)(f1 * f31);
                    f0 = (f64)(f32)ppc_fabs(f1);
                    if (!(f0 > f14)) {
                        f0 = f14;
                    }
                    f1 = ppc_fabs(f1);
                    f3 = (f64)(f32)(f21 - f0);
                    f1 = (f64)(f32)f1;
                    if (!(f1 > f14)) {
                        f1 = f14;
                    }
                    wrf32d(0x817fde5cu, f2);
                    wrf32d(0x817fde60u, f26);
                    wrf32d(0x817fde64u, f25);
                    if (f24 != f28) {
                        if (r25 == 0u) {
                            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                            wr32(param_2 + 0xecu, r3);
                            wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                            f2 = (f64)(f32)(f21 - (f64)(f32)(f3 * (f64)(f32)(f28 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f20), f19))));
                        } else {
                            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                            wr32(param_2 + 0xecu, r3);
                            wr32(0x817fde8cu, (r3 >> 0x10u) & 0xffffu);
                            f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde88u) - f20), f19);
                            f0 = (f64)(f32)(f0 * f0);
                            f0 = (f64)(f32)(f0 * f28);
                            f0 = (f64)(f32)(f3 * f0);
                            f2 = (f64)(f32)(f21 - f0);
                        }
                        wrf32d(0x817fde64u, (f64)(f32)((f64)rdf32(0x817fde64u) * f2));
                    }
                    if (f24 == f27 || ((f64)(f32)ppc_fabs((f64)rdf32(0x817fde5cu)) < f18 && (f64)(f32)ppc_fabs((f64)rdf32(0x817fde60u)) < f18)) {
                        wrf32d(0x817fde50u, f24);
                        wrf32d(0x817fde54u, f24);
                        wrf32d(0x817fde58u, f17);
                    } else {
                        f1 = (f64)(f32)(f1 * f27);
                        a.f[0] = f1;
                        f1 = tc_callf(0x80262be8u, &a);
                        f4 = (f64)(f32)f1;
                        f2 = (f64)rdf32(0x817fde5cu);
                        f0 = (f64)rdf32(0x817fde60u);
                        wrf32d(0x817fde50u, f2);
                        f16 = (f64)(f32)ppc_fres(f4);
                        wrf32d(0x817fde54u, f0);
                        f0 = (f64)(f32)(f0 * f0);
                        f15 = (f64)(f32)((f64)(f32)(f2 * f2) + f0);
                        t28 = ppc_fnmsubs(f4, (f64)(f32)(f16 * f16), (f64)(f32)(f16 + f16));
                        if (!((f15 < f24) || (f15 == f24))) {
                            a.f[0] = f15;
                            f1 = tc_callf(0x802eff54u, &a);
                            f0 = (f64)(f32)(f15 * f1);
                        } else {
                            f0 = f24;
                        }
                        f0 = -f0;
                        f0 = (f64)(f32)(t28 * f0);
                        wrf32d(0x817fde58u, f0);
                    }
                    a.f[0] = param_f1;
                    a.r[0] = param_1;
                    a.r[1] = 0x817fde5cu;
                    a.r[2] = 0x817fde50u;
                    a.r[3] = param_2;
                    a.r[4] = param_3;
                    a.r[5] = param_7;
                    a.r[6] = param_8;
                    (void)tc_call(0x80323cc0u, &a);
                    r22 = r22 + 1u;
                }
                r22 = 1u;
                f14 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fde90u));
                while ((s32)r22 <= (s32)param_4) {
                    wr32(0x817fde8cu, r22 ^ 0x80000000u);
                    f1 = (f64)(f32)((f64)(f32)((f64)(f32)(rdf64(0x817fde88u) - f22) * f29) - f21);
                    f2 = (f64)(f32)(f1 * f30);
                    f0 = (f64)(f32)ppc_fabs(f1);
                    if (!(f0 > f14)) {
                        f0 = f14;
                    }
                    f1 = ppc_fabs(f1);
                    f3 = (f64)(f32)(f21 - f0);
                    f1 = (f64)(f32)f1;
                    if (!(f1 > f14)) {
                        f1 = f14;
                    }
                    wrf32d(0x817fde44u, f31);
                    wrf32d(0x817fde48u, f26);
                    wrf32d(0x817fde4cu, f2);
                    if (f24 != f28) {
                        if (r25 == 0u) {
                            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                            wr32(param_2 + 0xecu, r3);
                            wr32(0x817fde8cu, (r3 >> 0x10u) & 0xffffu);
                            f2 = (f64)(f32)(f21 - (f64)(f32)(f3 * (f64)(f32)(f28 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde88u) - f20), f19))));
                        } else {
                            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                            wr32(param_2 + 0xecu, r3);
                            wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                            f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f20), f19);
                            f0 = (f64)(f32)(f0 * f0);
                            f0 = (f64)(f32)(f0 * f28);
                            f0 = (f64)(f32)(f3 * f0);
                            f2 = (f64)(f32)(f21 - f0);
                        }
                        wrf32d(0x817fde44u, (f64)(f32)((f64)rdf32(0x817fde44u) * f2));
                    }
                    if (f24 == f27 || ((f64)(f32)ppc_fabs((f64)rdf32(0x817fde48u)) < f18 && (f64)(f32)ppc_fabs((f64)rdf32(0x817fde4cu)) < f18)) {
                        wrf32d(0x817fde38u, f21);
                        wrf32d(0x817fde3cu, f24);
                        wrf32d(0x817fde40u, f24);
                    } else {
                        f1 = (f64)(f32)(f1 * f27);
                        a.f[0] = f1;
                        f1 = tc_callf(0x80262be8u, &a);
                        f4 = (f64)(f32)f1;
                        f1 = (f64)rdf32(0x817fde48u);
                        f0 = (f64)rdf32(0x817fde4cu);
                        f1 = (f64)(f32)(f1 * f1);
                        f15 = (f64)(f32)ppc_fres(f4);
                        f0 = (f64)(f32)(f0 * f0);
                        f16 = (f64)(f32)(f1 + f0);
                        t34 = ppc_fnmsubs(f4, (f64)(f32)(f15 * f15), (f64)(f32)(f15 + f15));
                        if (!((f16 < f24) || (f16 == f24))) {
                            a.f[0] = f16;
                            f1 = tc_callf(0x802eff54u, &a);
                            f0 = (f64)(f32)(f16 * f1);
                        } else {
                            f0 = f24;
                        }
                        f2 = (f64)(f32)(t34 * f0);
                        f0 = (f64)rdf32(0x817fde4cu);
                        wrf32d(0x817fde3cu, (f64)rdf32(0x817fde48u));
                        wrf32d(0x817fde38u, f2);
                        wrf32d(0x817fde40u, f0);
                    }
                    a.f[0] = param_f1;
                    a.r[0] = param_1;
                    a.r[1] = 0x817fde44u;
                    a.r[2] = 0x817fde38u;
                    a.r[3] = param_2;
                    a.r[4] = param_3;
                    a.r[5] = param_7;
                    a.r[6] = param_8;
                    (void)tc_call(0x80323cc0u, &a);
                    r22 = r22 + 1u;
                }
                r22 = param_4;
                f14 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fde90u));
                while ((s32)r22 >= 1) {
                    wr32(0x817fde84u, r22 ^ 0x80000000u);
                    f1 = (f64)(f32)((f64)(f32)((f64)(f32)(rdf64(0x817fde80u) - f22) * f29) - f21);
                    f2 = (f64)(f32)(f1 * f31);
                    f0 = (f64)(f32)ppc_fabs(f1);
                    if (!(f0 > f14)) {
                        f0 = f14;
                    }
                    f1 = ppc_fabs(f1);
                    f3 = (f64)(f32)(f21 - f0);
                    f1 = (f64)(f32)f1;
                    if (!(f1 > f14)) {
                        f1 = f14;
                    }
                    wrf32d(0x817fde2cu, f2);
                    wrf32d(0x817fde30u, f26);
                    wrf32d(0x817fde34u, f30);
                    if (f24 != f28) {
                        if (r25 == 0u) {
                            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                            wr32(param_2 + 0xecu, r3);
                            wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                            f2 = (f64)(f32)(f21 - (f64)(f32)(f3 * (f64)(f32)(f28 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f20), f19))));
                        } else {
                            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                            wr32(param_2 + 0xecu, r3);
                            wr32(0x817fde8cu, (r3 >> 0x10u) & 0xffffu);
                            f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde88u) - f20), f19);
                            f0 = (f64)(f32)(f0 * f0);
                            f0 = (f64)(f32)(f0 * f28);
                            f0 = (f64)(f32)(f3 * f0);
                            f2 = (f64)(f32)(f21 - f0);
                        }
                        wrf32d(0x817fde34u, (f64)(f32)((f64)rdf32(0x817fde34u) * f2));
                    }
                    if (f24 == f27 || ((f64)(f32)ppc_fabs((f64)rdf32(0x817fde2cu)) < f18 && (f64)(f32)ppc_fabs((f64)rdf32(0x817fde30u)) < f18)) {
                        wrf32d(0x817fde20u, f24);
                        wrf32d(0x817fde24u, f24);
                        wrf32d(0x817fde28u, f21);
                    } else {
                        f1 = (f64)(f32)(f1 * f27);
                        a.f[0] = f1;
                        f1 = tc_callf(0x80262be8u, &a);
                        f4 = (f64)(f32)f1;
                        f2 = (f64)rdf32(0x817fde2cu);
                        f0 = (f64)rdf32(0x817fde30u);
                        wrf32d(0x817fde20u, f2);
                        f15 = (f64)(f32)ppc_fres(f4);
                        wrf32d(0x817fde24u, f0);
                        f0 = (f64)(f32)(f0 * f0);
                        f16 = (f64)(f32)((f64)(f32)(f2 * f2) + f0);
                        t40 = ppc_fnmsubs(f4, (f64)(f32)(f15 * f15), (f64)(f32)(f15 + f15));
                        if (!((f16 < f24) || (f16 == f24))) {
                            a.f[0] = f16;
                            f1 = tc_callf(0x802eff54u, &a);
                            f0 = (f64)(f32)(f16 * f1);
                        } else {
                            f0 = f24;
                        }
                        f0 = (f64)(f32)(t40 * f0);
                        wrf32d(0x817fde28u, f0);
                    }
                    a.f[0] = param_f1;
                    a.r[0] = param_1;
                    a.r[1] = 0x817fde2cu;
                    a.r[2] = 0x817fde20u;
                    a.r[3] = param_2;
                    a.r[4] = param_3;
                    a.r[5] = param_7;
                    a.r[6] = param_8;
                    (void)tc_call(0x80323cc0u, &a);
                    r22 = r22 - 1u;
                }
                r22 = param_4;
                f14 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fde90u));
                while ((s32)r22 >= 1) {
                    wr32(0x817fde8cu, r22 ^ 0x80000000u);
                    f1 = (f64)(f32)((f64)(f32)((f64)(f32)(rdf64(0x817fde88u) - f22) * f29) - f21);
                    f2 = (f64)(f32)(f1 * f30);
                    f0 = (f64)(f32)ppc_fabs(f1);
                    if (!(f0 > f14)) {
                        f0 = f14;
                    }
                    f1 = ppc_fabs(f1);
                    f3 = (f64)(f32)(f21 - f0);
                    f1 = (f64)(f32)f1;
                    if (!(f1 > f14)) {
                        f1 = f14;
                    }
                    f0 = rdf64(0x817fde98u);
                    wrf32d(0x817fde18u, f26);
                    wrf32d(0x817fde14u, f0);
                    wrf32d(0x817fde1cu, f2);
                    if (f24 != f28) {
                        if (r25 == 0u) {
                            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                            wr32(param_2 + 0xecu, r3);
                            wr32(0x817fde8cu, (r3 >> 0x10u) & 0xffffu);
                            f2 = (f64)(f32)(f21 - (f64)(f32)(f3 * (f64)(f32)(f28 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde88u) - f20), f19))));
                        } else {
                            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                            wr32(param_2 + 0xecu, r3);
                            wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                            f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f20), f19);
                            f0 = (f64)(f32)(f0 * f0);
                            f0 = (f64)(f32)(f0 * f28);
                            f0 = (f64)(f32)(f3 * f0);
                            f2 = (f64)(f32)(f21 - f0);
                        }
                        wrf32d(0x817fde14u, (f64)(f32)((f64)rdf32(0x817fde14u) * f2));
                    }
                    if (f24 == f27 || ((f64)(f32)ppc_fabs((f64)rdf32(0x817fde18u)) < f18 && (f64)(f32)ppc_fabs((f64)rdf32(0x817fde1cu)) < f18)) {
                        wrf32d(0x817fde08u, f17);
                        wrf32d(0x817fde0cu, f24);
                        wrf32d(0x817fde10u, f24);
                    } else {
                        f1 = (f64)(f32)(f1 * f27);
                        a.f[0] = f1;
                        f1 = tc_callf(0x80262be8u, &a);
                        f4 = (f64)(f32)f1;
                        f1 = (f64)rdf32(0x817fde18u);
                        f0 = (f64)rdf32(0x817fde1cu);
                        f1 = (f64)(f32)(f1 * f1);
                        f15 = (f64)(f32)ppc_fres(f4);
                        f0 = (f64)(f32)(f0 * f0);
                        f16 = (f64)(f32)(f1 + f0);
                        t46 = ppc_fnmsubs(f4, (f64)(f32)(f15 * f15), (f64)(f32)(f15 + f15));
                        if (!((f16 < f24) || (f16 == f24))) {
                            a.f[0] = f16;
                            f1 = tc_callf(0x802eff54u, &a);
                            f0 = (f64)(f32)(f16 * f1);
                        } else {
                            f0 = f24;
                        }
                        f2 = -f0;
                        f0 = (f64)rdf32(0x817fde1cu);
                        wrf32d(0x817fde0cu, (f64)rdf32(0x817fde18u));
                        wrf32d(0x817fde10u, f0);
                        wrf32d(0x817fde08u, (f64)(f32)(t46 * f2));
                    }
                    a.f[0] = param_f1;
                    a.r[0] = param_1;
                    a.r[1] = 0x817fde14u;
                    a.r[2] = 0x817fde08u;
                    a.r[3] = param_2;
                    a.r[4] = param_3;
                    a.r[5] = param_7;
                    a.r[6] = param_8;
                    (void)tc_call(0x80323cc0u, &a);
                    r22 = r22 - 1u;
                }
                r21 = r21 + 1u;
            }
            r21 = param_4 - 1u;
            f20 = (f64)rdf32(0x80577bb8u);
            f22 = rdf64(0x80577bc8u);
            r22 = r21;
            f21 = (f64)rdf32(0x80577bb4u);
            r18 = 1u;
            f19 = rdf64(0x80577bc0u);
            r19 = 1u;
            f18 = (f64)rdf32(0x80577bacu);
            r20 = 2u;
            f17 = (f64)rdf32(0x80577bd0u);
            r17 = 0u;
            while ((s32)r17 < (s32)r23) {
                if (r17 != 0u) {
                    c0lt = (s32)r20 < 2;
                    if (r20 == 2u) {
                        r18 = r18 + 1u;
                    } else if (!c0lt) {
                        if ((s32)r20 < 4) {
                            r19 = r19 - 1u;
                        }
                    } else {
                        c0lt = (s32)r20 < 0;
                        if (r20 == 0u) {
                            r18 = r18 - 1u;
                        } else if (!c0lt) {
                            r19 = r19 + 1u;
                        }
                    }
                    r22 = r22 - 1u;
                    if ((s32)r22 <= 0) {
                        r4 = 3u;
                        if (r20 != 0u) {
                            r4 = r20 - 1u;
                        }
                        r3 = (r4 >> 0x1fu) & 1u;
                        r20 = r4;
                        if ((((r4 & 1u) ^ r3) - r3) == 1u && (r4 != 1u || r21 != (param_4 - 1u))) {
                            r21 = r21 - 1u;
                        }
                        r22 = r21;
                    }
                }
                wr32(0x817fde84u, r18 ^ 0x80000000u);
                wr32(0x817fde8cu, r19 ^ 0x80000000u);
                f2 = (f64)(f32)((f64)(f32)((f64)(f32)(rdf64(0x817fde80u) - f22) * f29) - f21);
                f3 = (f64)(f32)((f64)(f32)((f64)(f32)(rdf64(0x817fde88u) - f22) * f29) - f21);
                f4 = (f64)(f32)(f2 * f31);
                f1 = (f64)(f32)ppc_fabs(f2);
                f0 = (f64)(f32)ppc_fabs(f3);
                f5 = (f64)(f32)(f3 * f30);
                if (!(f1 > f0)) {
                    f1 = f0;
                }
                f0 = ppc_fabs(f3);
                f2 = ppc_fabs(f2);
                f3 = (f64)(f32)(f21 - f1);
                f0 = (f64)(f32)f0;
                f1 = (f64)(f32)f2;
                if (!(f1 > f0)) {
                    f1 = f0;
                }
                f0 = (f64)rdf32(0x817fde94u);
                wrf32d(0x817fddfcu, f4);
                wrf32d(0x817fde00u, f0);
                wrf32d(0x817fde04u, f5);
                if (f20 != f28) {
                    if (r25 == 0u) {
                        r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                        wr32(param_2 + 0xecu, r3);
                        wr32(0x817fde8cu, (r3 >> 0x10u) & 0xffffu);
                        f2 = (f64)(f32)(f21 - (f64)(f32)(f3 * (f64)(f32)(f28 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde88u) - f19), f18))));
                    } else {
                        r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                        wr32(param_2 + 0xecu, r3);
                        wr32(0x817fde84u, (r3 >> 0x10u) & 0xffffu);
                        f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde80u) - f19), f18);
                        f0 = (f64)(f32)(f0 * f0);
                        f0 = (f64)(f32)(f0 * f28);
                        f0 = (f64)(f32)(f3 * f0);
                        f2 = (f64)(f32)(f21 - f0);
                    }
                    wrf32d(0x817fde00u, (f64)(f32)((f64)rdf32(0x817fde00u) * f2));
                }
                if (f20 == f27 || ((f64)(f32)ppc_fabs((f64)rdf32(0x817fddfcu)) < f17 && (f64)(f32)ppc_fabs((f64)rdf32(0x817fde04u)) < f17)) {
                    wrf32d(0x817fddf0u, f20);
                    wrf32d(0x817fddf4u, f21);
                    wrf32d(0x817fddf8u, f20);
                } else {
                    f1 = (f64)(f32)(f1 * f27);
                    a.f[0] = f1;
                    f1 = tc_callf(0x80262be8u, &a);
                    f4 = (f64)(f32)f1;
                    f2 = (f64)rdf32(0x817fddfcu);
                    f0 = (f64)rdf32(0x817fde04u);
                    wrf32d(0x817fddf0u, f2);
                    f14 = (f64)(f32)ppc_fres(f4);
                    f0 = (f64)(f32)(f0 * f0);
                    f15 = (f64)(f32)((f64)(f32)(f2 * f2) + f0);
                    t52 = ppc_fnmsubs(f4, (f64)(f32)(f14 * f14), (f64)(f32)(f14 + f14));
                    if (!((f15 < f20) || (f15 == f20))) {
                        a.f[0] = f15;
                        f1 = tc_callf(0x802eff54u, &a);
                        f0 = (f64)(f32)(f15 * f1);
                    } else {
                        f0 = f20;
                    }
                    wrf32d(0x817fddf8u, (f64)rdf32(0x817fde04u));
                    wrf32d(0x817fddf4u, (f64)(f32)(t52 * f0));
                }
                a.f[0] = param_f1;
                a.r[0] = param_1;
                a.r[1] = 0x817fddfcu;
                a.r[2] = 0x817fddf0u;
                a.r[3] = param_2;
                a.r[4] = param_3;
                a.r[5] = param_7;
                a.r[6] = param_8;
                (void)tc_call(0x80323cc0u, &a);
                r17 = r17 + 1u;
            }
        }
    }
    return;
}
