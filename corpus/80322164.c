#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80322164(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f17 = 0.0, f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0;
    f64 f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde60u, 0x817fe000u);
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
    wr32(0x817fdee0u, 0u);
    wr32(0x817fdee4u, 0u);
    wr32(0x817fdee8u, 0u);
    wr32(0x817fdeecu, 0u);
    wr32(0x817fdef0u, 0u);
    wr32(0x817fdef4u, 0u);
    wr32(0x817fdef8u, 0u);
    wr32(0x817fdefcu, 0u);
    wr32(0x817fdf00u, 0u);
    wr32(0x817fdf04u, 0u);
    wr32(0x817fdf08u, 0u);
    wr32(0x817fdf0cu, 0u);
    wr32(0x817fdec8u, 0x43300000u);
    wr32(0x817fded0u, 0x43300000u);
    if (param_4 >= 1) {
        f25 = (f64)rdf32(param_6);
        f0 = (f64)rdf32(0x80577a80u);
        if (!((f64)(f32)ppc_fabs(f25) > f0)) {
            f25 = f0;
        }
        if ((param_5 & 0x2000000u) == 0u) {
            f23 = (f64)rdf32(param_6 + 0x10u);
            f0 = (f64)rdf32(0x80577a80u);
            if (!((f64)(f32)ppc_fabs(f23) > f0)) {
                f23 = f0;
            }
        } else {
            f23 = f25;
        }
        f22 = (f64)rdf32(0x80577a84u);
        f21 = f22;
        if ((param_5 & 0x40000u) == 0u) {
            f4 = rdf64(0x80577ab8u);
            f2 = (f64)rdf32(0x80577a88u);
            f1 = (f64)rdf32(0x80577a90u);
            f0 = (f64)rdf32(0x80577a8cu);
            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_2 + 0xecu, r3);
            wr32(0x817fdeccu, (r3 >> 0x10u) & 0xffffu);
            f2 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdec8u) - f4), f2);
            f1 = (f64)(f32)(f1 * f2);
            f20 = (f64)(f32)(f0 * f1);
        } else {
            f20 = (f64)rdf32(param_6 + 8u);
        }
        r28 = param_5 & 0x20000u;
        if (r28 != 0u) {
            a.f[0] = (f64)(f32)((f64)rdf32(param_6 + 0xcu) - (f64)rdf32(param_6 + 8u));
            a.f[1] = rdf64(0x80577a98u);
            f1 = tc_callf(0x80262c6cu, &a);
            f1 = (f64)(f32)f1;
            if (f1 < (f64)rdf32(0x80577aa0u) || f1 > (f64)rdf32(0x80577aa4u)) {
                f3 = (f64)rdf32(param_6 + 0xcu);
                wr32(0x817fded4u, (u32)rd16(param_2 + 0x32u));
                f21 = (f64)(f32)px_fdiv((f64)(f32)(f3 - (f64)rdf32(param_6 + 8u)), (f64)(f32)(rdf64(0x817fded0u) - rdf64(0x80577ab8u)));
            } else {
                f2 = (f64)rdf32(param_6 + 0xcu);
                f0 = (f64)rdf32(param_6 + 8u);
                f1 = rdf64(0x80577ac0u);
                wr32(0x817fdeccu, ((u32)rd16(param_2 + 0x32u) - 1u) ^ 0x80000000u);
                f2 = (f64)(f32)(f2 - f0);
                f21 = (f64)(f32)px_fdiv(f2, (f64)(f32)(rdf64(0x817fdec8u) - f1));
            }
        }
        f29 = (f64)rdf32(0x80577aacu);
        r29 = param_5 & 0x1000000u;
        f30 = (f64)rdf32(0x80577a84u);
        f26 = rdf64(0x80577ab8u);
        f27 = (f64)rdf32(0x80577a88u);
        r27 = 0u;
        f28 = (f64)rdf32(0x80577aa8u);
        f31 = rdf64(0x80577ac0u);
        f17 = (f64)rdf32(0x80577ab0u);
        while ((s32)r27 < param_4) {
            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_2 + 0xecu, r3);
            wr32(0x817fded4u, (r3 >> 0x10u) & 0xffffu);
            f19 = (f64)(f32)px_fdiv((f64)rdf32(param_6 + 4u), f28);
            f24 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fded0u) - f26), f27);
            if (r29 == 0u) {
                f24 = (f64)(f32)(f24 + (f64)(f32)(f19 * (f64)(f32)(f29 - f24)));
            } else {
                f1 = (f64)(f32)(f24 + (f64)(f32)((f64)(f32)(f29 - f24) * (f64)(f32)(f19 * f19)));
                if (!((f1 < f30) || (f1 == f30))) {
                    a.f[0] = f1;
                    f1 = tc_callf(0x802eff54u, &a);
                    f24 = (f64)(f32)((f64)(f32)(f24 + (f64)(f32)((f64)(f32)(f29 - f24) * (f64)(f32)(f19 * f19))) * f1);
                } else {
                    f24 = f30;
                }
            }
            if (r28 == 0u) {
                r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                wr32(param_2 + 0xecu, r3);
                wr32(0x817fdeccu, (r3 >> 0x10u) & 0xffffu);
                f22 = (f64)(f32)((f64)(f32)((f64)rdf32(param_6 + 0xcu) - (f64)rdf32(param_6 + 8u)) * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdec8u) - f26), f27));
            }
            a.f[0] = (f64)(f32)(f20 + f22);
            a.r[0] = 0x817fde6cu;
            a.r[1] = 0x817fde68u;
            (void)tc_call(0x80320a58u, &a);
            f2 = (f64)rdf32(0x817fde6cu);
            f3 = -(f64)rdf32(0x817fde68u);
            wrf32d(0x817fdea4u, f30);
            wrf32d(0x817fdea0u, f2);
            r3 = rd32(0x817fdea4u);
            wrf32d(0x817fdea8u, f3);
            r4 = rd32(0x817fdea0u);
            r0 = rd32(0x817fdea8u);
            wrf32d(0x817fdeb8u, (f64)(f32)(f25 * (f64)(f32)(f2 * f24)));
            wrf32d(0x817fdebcu, f30);
            wrf32d(0x817fdec0u, (f64)(f32)(f23 * (f64)(f32)((f64)(f32)f3 * f24)));
            wr32(0x817fde94u, r4);
            wr32(0x817fde98u, r3);
            wr32(0x817fde9cu, r0);
            f0 = (f64)rdf32(param_2 + 0x78u);
            if (f30 != f0) {
                a.f[0] = (f64)(f32)(f24 * f0);
                a.r[0] = 0x817fde88u;
                (void)tc_call(0x803209e8u, &a);
                f1 = (f64)rdf32(0x817fde88u);
                f0 = (f64)(f32)(f1 * (f64)rdf32(0x817fde6cu));
                f1 = (f64)(f32)(-(f64)rdf32(0x817fde68u) * f1);
                wrf32d(0x817fde88u, f0);
                wrf32d(0x817fde90u, f1);
            } else {
                wrf32d(0x817fde88u, f30);
                wrf32d(0x817fde8cu, f29);
                wrf32d(0x817fde90u, f30);
            }
            a.r[0] = param_1;
            a.r[1] = 0x817fdeacu;
            a.r[2] = param_2;
            a.r[3] = 0x817fdeb8u;
            a.r[4] = 0x817fde88u;
            a.r[5] = 0x817fde94u;
            a.r[6] = 0x817fdea0u;
            (void)tc_call(0x80321050u, &a);
            r6 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_2 + 0xecu, r6);
            wr32(0x817fded4u, (r6 >> 0x10u) & 0xffffu);
            r9 = rd32(0x817fdeb0u);
            r8 = rd32(0x817fdeb4u);
            r7 = rd32(0x817fdeb8u);
            r6 = rd32(0x817fdebcu);
            f19 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fded0u) - f26), f27);
            r0 = rd32(0x817fdec0u);
            wr32(0x817fde70u, rd32(0x817fdeacu));
            wr32(0x817fde74u, r9);
            wr32(0x817fde78u, r8);
            wr32(0x817fde7cu, r7);
            wr32(0x817fde80u, r6);
            wr32(0x817fde84u, r0);
            a.f[0] = param_f1;
            a.r[0] = param_1;
            a.r[1] = param_7;
            a.r[2] = param_2;
            r3 = tc_call(0x80321518u, &a);
            r12 = rd32(rd32((u32)param_3 + 0x1cu) + 0x14u);
            wr32(0x817fdeccu, (u32)(s8)rd8(param_2 + 0x67u) ^ 0x80000000u);
            a.r[0] = (u32)param_3;
            a.r[1] = r3 & 0xffffu;
            a.r[2] = 0x817fde7cu;
            a.r[3] = 0x817fde70u;
            a.r[4] = param_8;
            a.r[5] = param_2 + 0xfcu;
            a.r[6] = rd32(param_2 + 0xf8u);
            a.r[7] = (u32)rd16(param_2 + 0xe8u);
            a.f[0] = (f64)(f32)(f29 + (f64)(f32)((f64)(f32)(f17 * (f64)(f32)(rdf64(0x817fdec8u) - f31)) * f19));
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            (void)tc_call(r12, &a);
            if (r28 != 0u) {
                f22 = (f64)(f32)(f22 + f21);
            }
            r27 = r27 + 1u;
        }
    }
    return;
}
