#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80321e2c(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f27 = 0.0;
    f64 f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
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
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, 0.0);
    wrf32d(0x817fdf8cu, 0.0);
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, 0.0);
    wrf32d(0x817fdf7cu, 0.0);
    wr32(0x817fdf40u, 0u);
    wr32(0x817fdf44u, 0u);
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf60u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    wr32(0x817fdf28u, 0x43300000u);
    wr32(0x817fdf30u, 0x43300000u);
    if (param_4 >= 1) {
        f30 = rdf64(0x80577a78u);
        f28 = rdf64(0x80577a70u);
        r29 = param_5 & 0x20000u;
        f29 = (f64)rdf32(0x80577a58u);
        r28 = param_5 & 0x4000000u;
        f31 = (f64)rdf32(0x80577a60u);
        f23 = (f64)rdf32(0x80577a5cu);
        r27 = 0u;
        f24 = (f64)rdf32(0x80577a64u);
        f25 = (f64)rdf32(0x80577a68u);
        while ((s32)r27 < param_4) {
            if (r29 == 0u) {
                r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                wr32(param_2 + 0xecu, r3);
                wr32(0x817fdf2cu, (r3 >> 0x10u) & 0xffffu);
                f27 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf28u) - f28), f29);
            } else {
                if (param_4 > 1) {
                    wr32(0x817fdf34u, r27 ^ 0x80000000u);
                    wr32(0x817fdf2cu, ((u32)param_4 - 1u) ^ 0x80000000u);
                    f27 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf30u) - f30), (f64)(f32)(rdf64(0x817fdf28u) - f30));
                } else {
                    f27 = (f64)rdf32(0x80577a5cu);
                }
            }
            if (r28 != 0u) {
                f27 = (f64)(f32)(f27 - f31);
            }
            f27 = (f64)(f32)(f27 * (f64)rdf32(param_6));
            a.f[0] = (f64)rdf32(param_6 + 4u);
            a.r[0] = 0x817fdedcu;
            a.r[1] = 0x817fded8u;
            (void)tc_call(0x80320a58u, &a);
            a.f[0] = (f64)rdf32(param_6 + 8u);
            a.r[0] = 0x817fded4u;
            a.r[1] = 0x817fded0u;
            (void)tc_call(0x80320a58u, &a);
            a.f[0] = (f64)rdf32(param_6 + 0xcu);
            a.r[0] = 0x817fdeccu;
            a.r[1] = 0x817fdec8u;
            (void)tc_call(0x80320a58u, &a);
            f1 = (f64)rdf32(0x817fdec8u);
            f7 = (f64)rdf32(0x817fded8u);
            f5 = (f64)rdf32(0x817fded4u);
            f0 = -f1;
            f4 = (f64)rdf32(0x817fdedcu);
            f6 = (f64)(f32)(f7 * f1);
            f1 = (f64)(f32)(f7 * f5);
            f3 = (f64)rdf32(0x817fdeccu);
            f2 = (f64)(f32)(f0 * f4);
            f5 = (f64)(f32)(f5 * f6);
            f1 = (f64)(f32)(f3 * f1);
            f0 = (f64)(f32)(f7 * (f64)rdf32(0x817fded0u));
            wrf32d(0x817fdf10u, f23);
            f3 = (f64)(f32)(f4 * f3);
            f1 = (f64)(f32)(f2 + f1);
            f0 = (f64)(f32)(f27 * f0);
            wrf32d(0x817fdf14u, f24);
            f1 = (f64)(f32)(f27 * f1);
            wrf32d(0x817fdf24u, f0);
            wrf32d(0x817fdf0cu, f0);
            f0 = (f64)(f32)(f27 * (f64)(f32)(f5 + f3));
            wrf32d(0x817fdf18u, f23);
            wrf32d(0x817fdf08u, f23);
            wrf32d(0x817fdf20u, f1);
            wrf32d(0x817fdf1cu, f0);
            wrf32d(0x817fdf04u, f0);
            a.r[0] = param_1;
            a.r[1] = 0x817fdef8u;
            a.r[2] = param_2;
            a.r[3] = 0x817fdf1cu;
            a.r[4] = 0x817fdf10u;
            a.r[5] = 0x817fdf1cu;
            a.r[6] = 0x817fdf04u;
            (void)tc_call(0x80321050u, &a);
            r6 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_2 + 0xecu, r6);
            wr32(0x817fdf34u, (r6 >> 0x10u) & 0xffffu);
            r9 = rd32(0x817fdefcu);
            r8 = rd32(0x817fdf00u);
            r7 = rd32(0x817fdf1cu);
            r6 = rd32(0x817fdf20u);
            f27 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf30u) - f28), f29);
            r0 = rd32(0x817fdf24u);
            wr32(0x817fdee0u, rd32(0x817fdef8u));
            wr32(0x817fdee4u, r9);
            wr32(0x817fdee8u, r8);
            wr32(0x817fdeecu, r7);
            wr32(0x817fdef0u, r6);
            wr32(0x817fdef4u, r0);
            a.f[0] = param_f1;
            a.r[0] = param_1;
            a.r[1] = param_7;
            a.r[2] = param_2;
            r3 = tc_call(0x80321518u, &a);
            r12 = rd32(rd32((u32)param_3 + 0x1cu) + 0x14u);
            wr32(0x817fdf2cu, (u32)(s8)rd8(param_2 + 0x67u) ^ 0x80000000u);
            a.r[0] = (u32)param_3;
            a.r[1] = r3 & 0xffffu;
            a.r[2] = 0x817fdeecu;
            a.r[3] = 0x817fdee0u;
            a.r[4] = param_8;
            a.r[5] = param_2 + 0xfcu;
            a.r[6] = rd32(param_2 + 0xf8u);
            a.r[7] = (u32)rd16(param_2 + 0xe8u);
            a.f[0] = (f64)(f32)(f24 + (f64)(f32)((f64)(f32)(f25 * (f64)(f32)(rdf64(0x817fdf28u) - f30)) * f27));
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            (void)tc_call(r12, &a);
            r27 = r27 + 1u;
        }
    }
    return;
}
