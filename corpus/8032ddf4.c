#include "tc_rt.h"

void fn_8032ddf4(f64 param_1, f64 param_2, f64 param_3, u32 param_4, u32 param_5, s32 param_6, u32 param_7, s32 param_8, u32 param_9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f11 = 0.0, f27 = 0.0;
    f64 f31 = 0.0, t7 = 0.0, t8 = 0.0, t10 = 0.0, t16 = 0.0, t22 = 0.0, t24 = 0.0, t31 = 0.0, t32 = 0.0, t34 = 0.0, t40 = 0.0, t46 = 0.0;
    f64 t48 = 0.0;
    TcArgs a = {0};
    (void)param_4;
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
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa0u, 0u);
    a.r[0] = 0x817fdef0u;
    a.r[1] = (u32)param_6;
    a.r[2] = (u32)param_8;
    a.r[3] = param_7;
    a.r[4] = (u32)param_8;
    a.r[5] = param_9;
    a.f[0] = param_1;
    a.f[1] = param_2;
    a.f[2] = param_3;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    (void)tc_call(param_9, &a);
    if ((param_7 & 2u) != 0u) {
        a.r[0] = 0x817fdef0u;
        a.r[1] = (u32)param_6 + 0xc8u;
        a.r[2] = 0x817fdec0u;
        (void)tc_call(0x80234484u, &a);
    } else {
        a.r[0] = 0x817fdef0u;
        a.r[1] = (u32)param_8 + 0xccu;
        a.r[2] = 0x817fdec0u;
        (void)tc_call(0x80234484u, &a);
    }
    t7 = (f64)rdf32(0x817fdec4u);
    t8 = (f64)rdf32(0x817fdec8u);
    t10 = (f64)rdf32(0x817fdec0u);
    t16 = (f64)(f32)(ppc_fmadds(t10, t10, (f64)(f32)(t7 * t7)) + (f64)(f32)(t8 * t8));
    if (!(t16 < (f64)rdf32(0x80577cc0u))) {
        a.f[0] = t16;
        f1 = tc_callf(0x802eff54u, &a);
        r0 = 1u;
        t22 = (f64)(f32)((f64)rdf32(0x817fdec4u) * f1);
        t24 = (f64)rdf32(0x817fdec8u);
        wrf32d(0x817fdec0u, (f64)(f32)((f64)rdf32(0x817fdec0u) * f1));
        wrf32d(0x817fdec4u, t22);
        wrf32d(0x817fdec8u, (f64)(f32)(t24 * f1));
    } else {
        r0 = 0u;
    }
    if (r0 == 0u) {
        wrf32d(0x817fdec0u, (f64)rdf32((u32)param_6 + 0xbcu));
        wrf32d(0x817fdec4u, (f64)rdf32((u32)param_6 + 0xc0u));
        wrf32d(0x817fdec8u, (f64)rdf32((u32)param_6 + 0xc4u));
    }
    a.r[0] = 0x817fdec0u;
    a.r[1] = 0x817fdef0u;
    a.r[2] = 0x817fdeccu;
    (void)tc_call(0x80234484u, &a);
    t31 = (f64)rdf32(0x817fded0u);
    t32 = (f64)rdf32(0x817fded4u);
    t34 = (f64)rdf32(0x817fdeccu);
    t40 = (f64)(f32)(ppc_fmadds(t34, t34, (f64)(f32)(t31 * t31)) + (f64)(f32)(t32 * t32));
    if (!(t40 < (f64)rdf32(0x80577cc0u))) {
        a.f[0] = t40;
        f1 = tc_callf(0x802eff54u, &a);
        t46 = (f64)(f32)((f64)rdf32(0x817fded0u) * f1);
        t48 = (f64)rdf32(0x817fded4u);
        wrf32d(0x817fdeccu, (f64)(f32)((f64)rdf32(0x817fdeccu) * f1));
        wrf32d(0x817fded0u, t46);
        wrf32d(0x817fded4u, (f64)(f32)(t48 * f1));
    }
    f1 = (f64)rdf32((u32)param_8 + 0xb4u);
    wrf32d((u32)param_8 + 0xccu, (f64)rdf32(0x817fdeccu));
    f4 = (f64)rdf32((u32)param_8 + 0xb0u);
    f8 = (f64)rdf32((u32)param_8 + 0xacu);
    wrf32d((u32)param_8 + 0xd0u, (f64)rdf32(0x817fded0u));
    wrf32d((u32)param_8 + 0xd4u, (f64)rdf32(0x817fded4u));
    f0 = (f64)rdf32(0x817fded4u);
    f2 = (f64)rdf32(0x817fdef8u);
    f3 = (f64)rdf32(0x817fdec8u);
    f5 = (f64)rdf32(0x817fded0u);
    f6 = (f64)rdf32(0x817fdef4u);
    f7 = (f64)rdf32(0x817fdec4u);
    f9 = (f64)rdf32(0x817fdeccu);
    f11 = (f64)rdf32(0x817fdec0u);
    wrf32d(0x817fdf64u, (f64)rdf32(0x817fdef0u));
    wrf32d(0x817fdf60u, f11);
    wrf32d(0x817fdf68u, f9);
    wrf32d(0x817fdf6cu, f8);
    wrf32d(0x817fdf70u, f7);
    wrf32d(0x817fdf74u, f6);
    wrf32d(0x817fdf78u, f5);
    wrf32d(0x817fdf7cu, f4);
    wrf32d(0x817fdf80u, f3);
    wrf32d(0x817fdf84u, f2);
    wrf32d(0x817fdf88u, f0);
    wrf32d(0x817fdf8cu, f1);
    r3 = (u32)rd8((u32)param_8 + 0x9au);
    f3 = (f64)rdf32((u32)param_8 + 0x40u);
    f1 = (f64)rdf32((u32)param_8 + 0x44u);
    f0 = (f64)rdf32((u32)param_8 + 0x48u);
    wrf32d(0x817fdee4u, f3);
    wrf32d(0x817fdee8u, f1);
    wrf32d(0x817fdeecu, f0);
    if (r3 != 0u) {
        wr32(0x817fdf94u, r3);
        f2 = rdf64(0x80577cd0u);
        wr32(0x817fdf90u, 0x43300000u);
        wrf32d(0x817fdee4u, (f64)(f32)(f3 + (f64)(f32)((f64)rdf32(0x80577cc4u) * (f64)(f32)(rdf64(0x817fdf90u) - f2))));
    }
    r3 = (u32)rd8((u32)param_8 + 0x9bu);
    if (r3 != 0u) {
        wr32(0x817fdf94u, r3);
        f3 = rdf64(0x80577cd0u);
        wr32(0x817fdf90u, 0x43300000u);
        wrf32d(0x817fdee8u, (f64)(f32)((f64)rdf32(0x817fdee8u) + (f64)(f32)((f64)rdf32(0x80577cc4u) * (f64)(f32)(rdf64(0x817fdf90u) - f3))));
    }
    r3 = (u32)rd8((u32)param_8 + 0x9cu);
    if (r3 != 0u) {
        wr32(0x817fdf94u, r3);
        f3 = rdf64(0x80577cd0u);
        wr32(0x817fdf90u, 0x43300000u);
        wrf32d(0x817fdeecu, (f64)(f32)((f64)rdf32(0x817fdeecu) + (f64)(f32)((f64)rdf32(0x80577cc4u) * (f64)(f32)(rdf64(0x817fdf90u) - f3))));
    }
    r4 = rd32((u32)param_8 + 0xc8u);
    f2 = (f64)rdf32((u32)param_8 + 0x30u);
    f1 = (f64)rdf32((u32)param_8 + 0x38u);
    f7 = (f64)(f32)(f2 * f1);
    f5 = (f64)(f32)((f64)rdf32(0x817fdee8u) + (f64)rdf32(r4 + 0x64u));
    f31 = (f64)(f32)(f7 * (f64)rdf32(r4 + 0x58u));
    r0 = (u32)rd16(rd32(r4 + 0x24u) + 0x9cu) & 0x6000u;
    f0 = (f64)(f32)((f64)rdf32(0x817fdeecu) + (f64)rdf32(r4 + 0x68u));
    c0lt = (s32)r0 < 16384;
    wrf32d(0x817fdee4u, (f64)(f32)((f64)rdf32(0x817fdee4u) + (f64)rdf32(r4 + 0x60u)));
    wrf32d(0x817fdee8u, f5);
    wrf32d(0x817fdeecu, f0);
    if (r0 == 0x4000u) {
        f7 = (f64)(f32)((f64)rdf32((u32)param_8 + 0x34u) * f1);
    } else if (!c0lt) {
        if (r0 != 0x6000u) {
            f7 = (f64)(f32)((f64)rdf32((u32)param_8 + 0x34u) * (f64)rdf32((u32)param_8 + 0x3cu));
        }
    } else if (r0 == 0x2000u) {
        f7 = (f64)(f32)(f2 * (f64)rdf32((u32)param_8 + 0x3cu));
    } else {
        f7 = (f64)(f32)((f64)rdf32((u32)param_8 + 0x34u) * (f64)rdf32((u32)param_8 + 0x3cu));
    }
    f27 = (f64)(f32)(f7 * (f64)rdf32(r4 + 0x5cu));
    a.f[0] = (f64)rdf32(0x817fdee8u);
    a.r[0] = 0x817fdebcu;
    a.r[1] = 0x817fdeb8u;
    (void)tc_call(0x80320a58u, &a);
    f3 = (f64)rdf32(0x817fdeb8u);
    f7 = (f64)rdf32(0x817fdebcu);
    f2 = (f64)(f32)(f3 * f31);
    f1 = (f64)rdf32(0x80577cc8u);
    f8 = (f64)(f32)(f7 * f31);
    f0 = (f64)rdf32(0x80577cb4u);
    f6 = (f64)(f32)(f3 * f27);
    wrf32d(0x817fdf34u, f1);
    wrf32d(0x817fdf30u, f2);
    wrf32d(0x817fdf44u, f0);
    wrf32d(0x817fdf40u, f1);
    wrf32d(0x817fdf48u, f1);
    wrf32d(0x817fdf4cu, f1);
    wrf32d(0x817fdf38u, (f64)(f32)(-f7 * f27));
    wrf32d(0x817fdf50u, f8);
    wrf32d(0x817fdf54u, f1);
    wrf32d(0x817fdf3cu, (f64)(f32)((f64)(f32)(param_1 - (f64)(f32)(param_1 * f2)) + (f64)(f32)(param_2 * (f64)(f32)(f7 * f27))));
    wrf32d(0x817fdf58u, f6);
    wrf32d(0x817fdf5cu, (f64)(f32)((f64)(f32)(param_2 - (f64)(f32)(param_1 * f8)) - (f64)(f32)(param_2 * f6)));
    a.r[0] = 0x817fdf60u;
    a.r[1] = 0x817fdf30u;
    a.r[2] = 0x817fdf00u;
    (void)tc_call(0x802337a0u, &a);
    f2 = (f64)rdf32(0x817fdf2cu);
    f1 = (f64)rdf32(0x817fdf1cu);
    f0 = (f64)rdf32(0x817fdf0cu);
    wrf32d(0x817fdedcu, f1);
    wrf32d(0x817fded8u, f0);
    wrf32d(0x817fdee0u, f2);
    wrf32d(param_5, f0);
    wrf32d(param_5 + 4u, f1);
    wrf32d(param_5 + 8u, f2);
    a.r[0] = param_5 + 0xcu;
    a.r[1] = 0x817fdf00u;
    a.r[2] = 0x805705b0u;
    (void)tc_call(0x802f031cu, &a);
    a.r[0] = param_5 + 0x18u;
    a.r[1] = 0x817fdf00u;
    a.r[2] = 0x805705c8u;
    (void)tc_call(0x802f031cu, &a);
    wrf32d(param_5 + 0x24u, param_3);
    return;
}
