#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80322690(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r12 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0;
    u32 r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f6 = 0.0, f7 = 0.0, f14 = 0.0, f15 = 0.0, f16 = 0.0, f17 = 0.0, f18 = 0.0;
    f64 f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdde0u, 0x817fe000u);
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
    wr32(0x817fdea0u, 0u);
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
    wr32(0x817fde88u, 0x43300000u);
    wr32(0x817fde90u, 0x43300000u);
    if (param_4 >= 1) {
        f31 = (f64)rdf32(param_6);
        f30 = (f64)(f32)px_fdiv((f64)rdf32(param_6 + 4u), (f64)rdf32(0x80577ac8u));
        f0 = (f64)rdf32(0x80577accu);
        if (!((f64)(f32)ppc_fabs(f31) > f0)) {
            f31 = f0;
        }
        if ((param_5 & 0x2000000u) == 0u) {
            f29 = (f64)rdf32(param_6 + 0x10u);
            f0 = (f64)rdf32(0x80577accu);
            if (!((f64)(f32)ppc_fabs(f29) > f0)) {
                f29 = f0;
            }
            f28 = (f64)rdf32(param_6 + 0x14u);
            f0 = (f64)rdf32(0x80577accu);
            if (!((f64)(f32)ppc_fabs(f28) > f0)) {
                f28 = f0;
            }
        } else {
            f29 = f31;
            f28 = f31;
        }
        f27 = (f64)rdf32(param_6 + 8u);
        if ((param_5 & 0x40000u) == 0u) {
            f4 = rdf64(0x80577b08u);
            f2 = (f64)rdf32(0x80577ad0u);
            f1 = (f64)rdf32(0x80577ad8u);
            f0 = (f64)rdf32(0x80577ad4u);
            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_2 + 0xecu, r3);
            wr32(0x817fde8cu, (r3 >> 0x10u) & 0xffffu);
            f2 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde88u) - f4), f2);
            f1 = (f64)(f32)(f1 * f2);
            f0 = (f64)(f32)(f0 * f1);
            f27 = (f64)(f32)(f27 + f0);
        }
        if ((param_5 & 0x20000u) == 0u) {
            f19 = rdf64(0x80577b08u);
            f20 = (f64)rdf32(0x80577ad0u);
            r25 = param_5 & 0x1000000u;
            f21 = (f64)rdf32(0x80577ac8u);
            f22 = (f64)rdf32(0x80577af4u);
            r16 = 0u;
            f23 = (f64)rdf32(0x80577ad8u);
            f24 = (f64)rdf32(0x80577af0u);
            f30 = (f64)rdf32(0x80577af8u);
            f26 = rdf64(0x80577b10u);
            f14 = (f64)rdf32(0x80577b00u);
            while ((s32)r16 < param_4) {
                r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                wr32(param_2 + 0xecu, r3);
                wr32(0x817fde8cu, (r3 >> 0x10u) & 0xffffu);
                f2 = (f64)(f32)px_fdiv((f64)rdf32(param_6 + 4u), f21);
                f1 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde88u) - f19), f20);
                if (r25 == 0u) {
                    f15 = (f64)(f32)(f1 + (f64)(f32)(f2 * (f64)(f32)(f22 - f1)));
                } else {
                    f1 = (f64)(f32)(f22 - (f64)(f32)(f1 * (f64)(f32)(f1 * f1)));
                    f15 = (f64)(f32)(f1 + (f64)(f32)(f2 * (f64)(f32)(f22 - f1)));
                }
                r0 = (r3 * 0x343fdu) + 0x269ec3u;
                r5 = r0 * 0x343fdu;
                wr32(param_2 + 0xecu, r0);
                r0 = (r0 >> 0x10u) & 0xffffu;
                wr32(0x817fde94u, r0);
                f2 = (f64)rdf32(param_6 + 0xcu);
                r5 = r5 + 0x270000u;
                f0 = (f64)(f32)(rdf64(0x817fde90u) - f19);
                r5 = r5 - 0x613du;
                f1 = (f64)rdf32(param_6 + 8u);
                wr32(0x817fde8cu, (r5 >> 0x10u) & 0xffffu);
                f3 = (f64)(f32)px_fdiv(f0, f20);
                f0 = rdf64(0x817fde88u);
                wr32(param_2 + 0xecu, r5);
                f0 = (f64)(f32)(f0 - f19);
                f1 = (f64)(f32)(f2 - f1);
                f0 = (f64)(f32)px_fdiv(f0, f20);
                f0 = (f64)(f32)(f23 * f0);
                a.f[0] = (f64)(f32)(f24 + f0);
                a.r[0] = 0x817fddf4u;
                a.r[1] = 0x817fddf0u;
                (void)tc_call(0x80320a58u, &a);
                a.f[0] = (f64)(f32)(f27 + (f64)(f32)(f1 * f3));
                a.r[0] = 0x817fddecu;
                a.r[1] = 0x817fdde8u;
                (void)tc_call(0x80320a58u, &a);
                f7 = (f64)rdf32(0x817fddf0u);
                f0 = (f64)(f32)((f64)rdf32(0x817fdde8u) * (f64)(f32)(f7 * (f64)(f32)(f28 * f15)));
                f3 = (f64)(f32)((f64)rdf32(0x817fddecu) * (f64)(f32)(-f7 * (f64)(f32)(f31 * f15)));
                wrf32d(0x817fde50u, (f64)(f32)(-(f64)rdf32(0x817fddf4u) * (f64)(f32)(f29 * f15)));
                wrf32d(0x817fde4cu, f3);
                wrf32d(0x817fde54u, f0);
                a.r[0] = 0x817fde34u;
                a.r[1] = 0x817fde4cu;
                (void)tc_call(0x80320984u, &a);
                r5 = rd32(0x817fde4cu);
                wr32(0x817fde2cu, rd32(0x817fde50u));
                r0 = rd32(0x817fde54u);
                wr32(0x817fde28u, r5);
                wr32(0x817fde30u, r0);
                wrf32d(0x817fde2cu, f30);
                a.r[0] = 0x817fde28u;
                a.r[1] = 0x817fde28u;
                (void)tc_call(0x80320984u, &a);
                a.r[0] = param_1;
                a.r[1] = 0x817fde40u;
                a.r[2] = param_2;
                a.r[3] = 0x817fde4cu;
                a.r[4] = 0x817fde34u;
                a.r[5] = 0x817fde34u;
                a.r[6] = 0x817fde28u;
                (void)tc_call(0x80321050u, &a);
                r6 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                wr32(param_2 + 0xecu, r6);
                wr32(0x817fde94u, (r6 >> 0x10u) & 0xffffu);
                r9 = rd32(0x817fde44u);
                r8 = rd32(0x817fde48u);
                r7 = rd32(0x817fde4cu);
                r6 = rd32(0x817fde50u);
                f15 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde90u) - f19), f20);
                r0 = rd32(0x817fde54u);
                wr32(0x817fddf8u, rd32(0x817fde40u));
                wr32(0x817fddfcu, r9);
                wr32(0x817fde00u, r8);
                wr32(0x817fde04u, r7);
                wr32(0x817fde08u, r6);
                wr32(0x817fde0cu, r0);
                a.f[0] = param_f1;
                a.r[0] = param_1;
                a.r[1] = param_7;
                a.r[2] = param_2;
                r3 = tc_call(0x80321518u, &a);
                r12 = rd32(rd32((u32)param_3 + 0x1cu) + 0x14u);
                wr32(0x817fde8cu, (u32)(s8)rd8(param_2 + 0x67u) ^ 0x80000000u);
                a.r[0] = (u32)param_3;
                a.r[1] = r3 & 0xffffu;
                a.r[2] = 0x817fde04u;
                a.r[3] = 0x817fddf8u;
                a.r[4] = param_8;
                a.r[5] = param_2 + 0xfcu;
                a.r[6] = rd32(param_2 + 0xf8u);
                a.r[7] = (u32)rd16(param_2 + 0xe8u);
                a.f[0] = (f64)(f32)(f22 + (f64)(f32)((f64)(f32)(f14 * (f64)(f32)(rdf64(0x817fde88u) - f26)) * f15));
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                (void)tc_call(r12, &a);
                r16 = r16 + 1u;
            }
        } else {
            r21 = (((u32)param_4 << 1u) & 0xfffffffeu) + 1u;
            r20 = 0u;
            f26 = (f64)(f32)((f64)rdf32(param_6 + 0xcu) - (f64)rdf32(param_6 + 8u));
            r19 = 1u;
            r18 = 0u;
            r17 = 0u;
            a.f[0] = f26;
            a.f[1] = rdf64(0x80577ae0u);
            f1 = tc_callf(0x80262c6cu, &a);
            f1 = (f64)(f32)f1;
            if (f1 < (f64)rdf32(0x80577ae8u) || f1 > (f64)rdf32(0x80577aecu)) {
                r17 = 1u;
            }
            f23 = (f64)rdf32(0x80577af4u);
            f19 = -f29;
            f22 = (f64)(f32)(f23 - f30);
            r23 = param_5 & 0x1000000u;
            f16 = rdf64(0x80577b10u);
            f17 = (f64)rdf32(0x80577ad8u);
            r22 = ((u32)param_4 * (((u32)param_4 << 2u) & 0xfffffffcu)) + 2u;
            f18 = (f64)rdf32(0x80577af0u);
            r25 = (r21 - 1u) ^ 0x80000000u;
            f29 = rdf64(0x80577b08u);
            f24 = (f64)rdf32(0x80577ad0u);
            r16 = 0u;
            f21 = (f64)rdf32(0x80577af8u);
            r24 = 0u;
            f20 = (f64)rdf32(0x80577afcu);
            wrf64(0x817fde98u, (f64)rdf32(0x80577b00u));
            while ((s32)r16 < (s32)r22) {
                wr32(0x817fde8cu, r25);
                wr32(0x817fde94u, r20 ^ 0x80000000u);
                f14 = (f64)(f32)(f18 + (f64)(f32)(f17 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde90u) - f16), (f64)(f32)(rdf64(0x817fde88u) - f16))));
                if (r19 != 1u) {
                    if (r17 == 0u) {
                        wr32(0x817fde94u, r18 ^ 0x80000000u);
                        wr32(0x817fde8cu, (r19 - 1u) ^ 0x80000000u);
                        f1 = (f64)(f32)(f27 + (f64)(f32)(f26 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde90u) - f16), (f64)(f32)(rdf64(0x817fde88u) - f16))));
                    } else {
                        wr32(0x817fde94u, r18 ^ 0x80000000u);
                        wr32(0x817fde8cu, r19 ^ 0x80000000u);
                        f1 = (f64)(f32)(f27 + (f64)(f32)(f26 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde90u) - f16), (f64)(f32)(rdf64(0x817fde88u) - f16))));
                    }
                } else {
                    f1 = f27;
                }
                r18 = r18 + 1u;
                if (r18 == r19) {
                    r24 = r24 + 2u;
                    r18 = 0u;
                    r20 = r20 + 1u;
                    if ((s32)r24 >= (s32)r21) {
                        r0 = 1u;
                        if (r19 != 4u) {
                            r0 = r19 - 4u;
                        }
                        r19 = r0;
                    } else {
                        r0 = r19 + 3u;
                        if (r19 != 1u) {
                            r0 = r19 + 4u;
                        }
                        r19 = r0;
                    }
                }
                r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                wr32(param_2 + 0xecu, r3);
                wr32(0x817fde94u, (r3 >> 0x10u) & 0xffffu);
                f2 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde90u) - f29), f24);
                if (r23 != 0u) {
                    f2 = (f64)(f32)(f23 - (f64)(f32)(f2 * (f64)(f32)(f2 * f2)));
                }
                wrf32d(0x817fde5cu, f21);
                f15 = (f64)(f32)(f30 + (f64)(f32)(f2 * f22));
                a.f[0] = f1;
                a.r[0] = 0x817fde58u;
                a.r[1] = 0x817fde60u;
                (void)tc_call(0x80320a58u, &a);
                wrf32d(0x817fde58u, (f64)(f32)((f64)rdf32(0x817fde58u) * f20));
                a.f[0] = f14;
                a.r[0] = 0x817fde80u;
                (void)tc_call(0x803209e8u, &a);
                f6 = (f64)rdf32(0x817fde84u);
                f2 = (f64)(f32)((f64)rdf32(0x817fde58u) * (f64)(f32)(f6 * (f64)(f32)(f31 * f15)));
                f0 = (f64)(f32)(f6 * (f64)(f32)((f64)rdf32(0x817fde60u) * (f64)(f32)(f28 * f15)));
                wrf32d(0x817fde80u, (f64)(f32)((f64)rdf32(0x817fde80u) * (f64)(f32)(f19 * f15)));
                wrf32d(0x817fde7cu, f2);
                wrf32d(0x817fde84u, f0);
                a.r[0] = 0x817fde64u;
                a.r[1] = 0x817fde7cu;
                (void)tc_call(0x80320984u, &a);
                a.f[0] = f14;
                f1 = tc_callf(0x80262704u, &a);
                if ((f64)(f32)f1 < f21) {
                    f0 = -(f64)rdf32(0x817fde60u);
                    wrf32d(0x817fde58u, -(f64)rdf32(0x817fde58u));
                    wrf32d(0x817fde60u, f0);
                }
                a.r[0] = param_1;
                a.r[1] = 0x817fde70u;
                a.r[2] = param_2;
                a.r[3] = 0x817fde7cu;
                a.r[4] = 0x817fde64u;
                a.r[5] = 0x817fde64u;
                a.r[6] = 0x817fde58u;
                (void)tc_call(0x80321050u, &a);
                r6 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                wr32(param_2 + 0xecu, r6);
                wr32(0x817fde8cu, (r6 >> 0x10u) & 0xffffu);
                r9 = rd32(0x817fde74u);
                r8 = rd32(0x817fde78u);
                r7 = rd32(0x817fde7cu);
                r6 = rd32(0x817fde80u);
                f15 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde88u) - f29), f24);
                r0 = rd32(0x817fde84u);
                wr32(0x817fde10u, rd32(0x817fde70u));
                wr32(0x817fde14u, r9);
                wr32(0x817fde18u, r8);
                wr32(0x817fde1cu, r7);
                wr32(0x817fde20u, r6);
                wr32(0x817fde24u, r0);
                a.f[0] = param_f1;
                a.r[0] = param_1;
                a.r[1] = param_7;
                a.r[2] = param_2;
                r3 = tc_call(0x80321518u, &a);
                r12 = rd32(rd32((u32)param_3 + 0x1cu) + 0x14u);
                wr32(0x817fde94u, (u32)(s8)rd8(param_2 + 0x67u) ^ 0x80000000u);
                a.r[0] = (u32)param_3;
                a.r[1] = r3 & 0xffffu;
                a.r[2] = 0x817fde1cu;
                a.r[3] = 0x817fde10u;
                a.r[4] = param_8;
                a.r[5] = param_2 + 0xfcu;
                a.r[6] = rd32(param_2 + 0xf8u);
                a.r[7] = (u32)rd16(param_2 + 0xe8u);
                a.f[0] = (f64)(f32)(f23 + (f64)(f32)((f64)(f32)(rdf64(0x817fde98u) * (f64)(f32)(rdf64(0x817fde90u) - f16)) * f15));
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                (void)tc_call(r12, &a);
                r16 = r16 + 1u;
            }
        }
    }
    return;
}
