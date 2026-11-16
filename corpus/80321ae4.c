#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80321ae4(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r12 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0;
    f64 f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_5;
    (void)param_6;
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
    wr32(0x817fdf20u, 0u);
    wr32(0x817fdf24u, 0u);
    wr32(0x817fdf28u, 0u);
    wr32(0x817fdf2cu, 0u);
    wr32(0x817fdf30u, 0u);
    wr32(0x817fdf34u, 0u);
    wr32(0x817fdf38u, 0u);
    wr32(0x817fdf3cu, 0u);
    wr32(0x817fdf10u, 0x43300000u);
    wr32(0x817fdf18u, 0x43300000u);
    if (param_4 >= 1) {
        f24 = (f64)rdf32(0x80577a28u);
        f25 = rdf64(0x80577a48u);
        f26 = (f64)rdf32(0x80577a2cu);
        r30 = 0u;
        f27 = (f64)rdf32(0x80577a30u);
        f28 = (f64)rdf32(0x80577a34u);
        f29 = (f64)rdf32(0x80577a3cu);
        f30 = (f64)rdf32(0x80577a38u);
        f31 = (f64)rdf32(0x80577a40u);
        f21 = rdf64(0x80577a50u);
        f22 = (f64)rdf32(0x80577a44u);
        while ((s32)r30 < param_4) {
            wrf32d(0x817fdf04u, f24);
            wrf32d(0x817fdf08u, f24);
            wrf32d(0x817fdf0cu, f24);
            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_2 + 0xecu, r3);
            wr32(0x817fdf14u, (r3 >> 0x10u) & 0xffffu);
            f1 = (f64)(f32)((f64)(f32)(f27 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf10u) - f25), f26)) - f28);
            if ((f1 > f24) || (f1 == f24)) {
                f1 = (f64)(f32)((f64)(f32)(f30 + (f64)(f32)(f29 * f1)) * f1);
            } else {
                f1 = (f64)(f32)((f64)(f32)(f30 - (f64)(f32)(f29 * f1)) * f1);
            }
            f0 = (f64)(f32)f1;
            wrf32d(0x817fdef8u, f1);
            f0 = (f64)(f32)(f0 * f0);
            f20 = (f64)(f32)(f28 - f0);
            if ((f20 < f24) || (f20 == f24)) {
                f20 = f24;
            } else {
                a.f[0] = f20;
                f1 = tc_callf(0x802eff54u, &a);
                f20 = (f64)(f32)(f20 * f1);
            }
            r5 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_2 + 0xecu, r5);
            wr32(0x817fdf1cu, (r5 >> 0x10u) & 0xffffu);
            a.f[0] = (f64)(f32)(f27 * (f64)(f32)(f31 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf18u) - f25), f26)));
            a.r[0] = 0x817fdf00u;
            a.r[1] = 0x817fdefcu;
            (void)tc_call(0x80320a58u, &a);
            f1 = (f64)(f32)((f64)rdf32(0x817fdefcu) * f20);
            f2 = (f64)rdf32(0x817fdef8u);
            f0 = (f64)(f32)((f64)rdf32(0x817fdf00u) * f20);
            wrf32d(0x817fdef0u, f24);
            wrf32d(0x817fdefcu, f1);
            wrf32d(0x817fdf00u, f0);
            wrf32d(0x817fdeecu, f2);
            wrf32d(0x817fdef4u, f0);
            a.r[0] = 0x817fdeecu;
            a.r[1] = 0x817fdeecu;
            (void)tc_call(0x80320984u, &a);
            a.r[0] = param_1;
            a.r[1] = 0x817fdee0u;
            a.r[2] = param_2;
            a.r[3] = 0x817fdf04u;
            a.r[4] = 0x817fdef8u;
            a.r[5] = 0x817fdef8u;
            a.r[6] = 0x817fdeecu;
            (void)tc_call(0x80321050u, &a);
            r6 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_2 + 0xecu, r6);
            wr32(0x817fdf14u, (r6 >> 0x10u) & 0xffffu);
            r9 = rd32(0x817fdee4u);
            r8 = rd32(0x817fdee8u);
            r7 = rd32(0x817fdf04u);
            r6 = rd32(0x817fdf08u);
            f20 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf10u) - f25), f26);
            r0 = rd32(0x817fdf0cu);
            wr32(0x817fdec8u, rd32(0x817fdee0u));
            wr32(0x817fdeccu, r9);
            wr32(0x817fded0u, r8);
            wr32(0x817fded4u, r7);
            wr32(0x817fded8u, r6);
            wr32(0x817fdedcu, r0);
            a.f[0] = param_f1;
            a.r[0] = param_1;
            a.r[1] = param_7;
            a.r[2] = param_2;
            r3 = tc_call(0x80321518u, &a);
            r12 = rd32(rd32((u32)param_3 + 0x1cu) + 0x14u);
            wr32(0x817fdf1cu, (u32)(s8)rd8(param_2 + 0x67u) ^ 0x80000000u);
            a.r[0] = (u32)param_3;
            a.r[1] = r3 & 0xffffu;
            a.r[2] = 0x817fded4u;
            a.r[3] = 0x817fdec8u;
            a.r[4] = param_8;
            a.r[5] = param_2 + 0xfcu;
            a.r[6] = rd32(param_2 + 0xf8u);
            a.r[7] = (u32)rd16(param_2 + 0xe8u);
            a.f[0] = (f64)(f32)(f28 + (f64)(f32)((f64)(f32)(f22 * (f64)(f32)(rdf64(0x817fdf18u) - f21)) * f20));
            a.f[1] = 0.0;
            (void)tc_call(r12, &a);
            r30 = r30 + 1u;
        }
    }
    return;
}
