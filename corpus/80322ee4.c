#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80322ee4(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, f64 param_7, f64 param_8, u32 param_9, u32 param_10, s32 param_11, s32 param_12, u32 param_13, s32 param_14, u32 param_15, u32 param_16)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f14 = 0.0, f15 = 0.0, f16 = 0.0, f17 = 0.0, f18 = 0.0, f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0;
    f64 f23 = 0.0, f28 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde30u, 0x817fe000u);
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
    wr32(0x817fde98u, 0x43300000u);
    f28 = param_5;
    wr32(0x817fdea0u, 0x43300000u);
    f19 = (f64)rdf32(0x80577b24u);
    f20 = (f64)rdf32(0x80577b20u);
    f16 = rdf64(0x80577b30u);
    f17 = (f64)rdf32(0x80577b18u);
    f18 = (f64)rdf32(0x80577b1cu);
    f21 = (f64)rdf32(0x80577b28u);
    f22 = rdf64(0x80577b38u);
    f23 = (f64)rdf32(0x80577b2cu);
    r29 = param_13 & 0x1000000u;
    r28 = param_13 & 0x20000u;
    r27 = 0u;
    while ((s32)r27 < param_12) {
        r3 = (rd32(param_10 + 0xecu) * 0x343fdu) + 0x269ec3u;
        wr32(param_10 + 0xecu, r3);
        wr32(0x817fde9cu, (r3 >> 0x10u) & 0xffffu);
        f14 = (f64)(f32)px_fdiv((f64)rdf32((u32)param_14 + 4u), f18);
        f15 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde98u) - f16), f17);
        if (r29 == 0u) {
            f15 = (f64)(f32)(f15 + (f64)(f32)(f14 * (f64)(f32)(f19 - f15)));
        } else {
            f1 = (f64)(f32)(f15 + (f64)(f32)((f64)(f32)(f19 - f15) * (f64)(f32)(f14 * f14)));
            if (!((f1 < f20) || (f1 == f20))) {
                a.f[0] = f1;
                f1 = tc_callf(0x802eff54u, &a);
                f15 = (f64)(f32)((f64)(f32)(f15 + (f64)(f32)((f64)(f32)(f19 - f15) * (f64)(f32)(f14 * f14))) * f1);
            } else {
                f15 = f20;
            }
        }
        if (r28 == 0u) {
            r3 = (rd32(param_10 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_10 + 0xecu, r3);
            wr32(0x817fdea4u, (r3 >> 0x10u) & 0xffffu);
            f28 = (f64)(f32)((f64)(f32)((f64)rdf32((u32)param_14 + 0xcu) - (f64)rdf32((u32)param_14 + 8u)) * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdea0u) - f16), f17));
        }
        a.f[0] = (f64)(f32)(param_7 + f28);
        a.r[0] = 0x817fde3cu;
        a.r[1] = 0x817fde38u;
        (void)tc_call(0x80320a58u, &a);
        f2 = (f64)rdf32(0x817fde3cu);
        f1 = (f64)rdf32(0x817fde38u);
        wrf32d(0x817fde70u, f2);
        f1 = -f1;
        wrf32d(0x817fde74u, f20);
        wrf32d(0x817fde78u, f1);
        wrf32d(0x817fde88u, (f64)(f32)(param_2 * (f64)(f32)(f2 * f15)));
        if (r28 == 0u) {
            r3 = (rd32(param_10 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_10 + 0xecu, r3);
            wr32(0x817fde9cu, (r3 >> 0x10u) & 0xffffu);
            wrf32d(0x817fde8cu, (f64)(f32)(param_3 * (f64)(f32)((f64)(f32)(f21 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fde98u) - f16), f17)) - f19)));
        } else {
            wrf32d(0x817fde8cu, param_8);
        }
        f1 = (f64)rdf32(0x817fde88u);
        f0 = (f64)(f32)((f64)rdf32(0x817fde78u) * f15);
        wrf32d(0x817fde68u, f20);
        wrf32d(0x817fde64u, f1);
        f0 = (f64)(f32)(param_4 * f0);
        wrf32d(0x817fde90u, f0);
        wrf32d(0x817fde6cu, f0);
        a.r[0] = 0x817fde64u;
        a.r[1] = 0x817fde64u;
        (void)tc_call(0x80320984u, &a);
        r5 = rd32(0x817fde8cu);
        r0 = rd32(0x817fde90u);
        wr32(0x817fde58u, rd32(0x817fde88u));
        wr32(0x817fde5cu, r5);
        wr32(0x817fde60u, r0);
        a.r[0] = 0x817fde58u;
        a.r[1] = 0x817fde58u;
        (void)tc_call(0x80320984u, &a);
        a.r[0] = param_9;
        a.r[1] = 0x817fde7cu;
        a.r[2] = param_10;
        a.r[3] = 0x817fde88u;
        a.r[4] = 0x817fde64u;
        a.r[5] = 0x817fde58u;
        a.r[6] = 0x817fde70u;
        (void)tc_call(0x80321050u, &a);
        r6 = (rd32(param_10 + 0xecu) * 0x343fdu) + 0x269ec3u;
        wr32(param_10 + 0xecu, r6);
        wr32(0x817fdea4u, (r6 >> 0x10u) & 0xffffu);
        r9 = rd32(0x817fde80u);
        r8 = rd32(0x817fde84u);
        r7 = rd32(0x817fde88u);
        r6 = rd32(0x817fde8cu);
        f15 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdea0u) - f16), f17);
        r0 = rd32(0x817fde90u);
        wr32(0x817fde40u, rd32(0x817fde7cu));
        wr32(0x817fde44u, r9);
        wr32(0x817fde48u, r8);
        wr32(0x817fde4cu, r7);
        wr32(0x817fde50u, r6);
        wr32(0x817fde54u, r0);
        a.f[0] = param_1;
        a.r[0] = param_9;
        a.r[1] = param_15;
        a.r[2] = param_10;
        r3 = tc_call(0x80321518u, &a);
        r12 = rd32(rd32((u32)param_11 + 0x1cu) + 0x14u);
        wr32(0x817fde9cu, (u32)(s8)rd8(param_10 + 0x67u) ^ 0x80000000u);
        a.r[0] = (u32)param_11;
        a.r[1] = r3 & 0xffffu;
        a.r[2] = 0x817fde4cu;
        a.r[3] = 0x817fde40u;
        a.r[4] = param_16;
        a.r[5] = param_10 + 0xfcu;
        a.r[6] = rd32(param_10 + 0xf8u);
        a.r[7] = (u32)rd16(param_10 + 0xe8u);
        a.f[0] = (f64)(f32)(f19 + (f64)(f32)((f64)(f32)(f23 * (f64)(f32)(rdf64(0x817fde98u) - f22)) * f15));
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        (void)tc_call(r12, &a);
        if (r28 != 0u) {
            f28 = (f64)(f32)(f28 + param_6);
        }
        r27 = r27 + 1u;
    }
    return;
}
