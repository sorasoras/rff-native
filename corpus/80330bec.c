#include "tc_rt.h"

void fn_80330bec(f64 param_1, f64 param_2, u32 param_3, u32 param_4, s32 param_5, u32 param_6, s32 param_7, u32 param_8, u32 param_9, u32 param_10, u32 param_11)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f11 = 0.0, f29 = 0.0;
    f64 t5 = 0.0, t6 = 0.0, t8 = 0.0, t14 = 0.0, t20 = 0.0, t22 = 0.0, t29 = 0.0, t30 = 0.0, t32 = 0.0, t38 = 0.0, t44 = 0.0, t46 = 0.0;
    TcArgs a = {0};
    (void)param_3;
    (void)param_11;
    wr32(0x817fded0u, 0x817fe000u);
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
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    r30 = rd32(0x817fe008u);
    a.r[0] = 0x817fdf04u;
    a.r[1] = (u32)param_5;
    a.r[2] = (u32)param_7;
    a.r[3] = param_6;
    a.r[4] = (u32)param_7;
    a.r[5] = param_8;
    a.r[6] = param_9;
    a.r[7] = param_10;
    a.f[0] = param_1;
    a.f[1] = param_2;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    (void)tc_call(param_8, &a);
    if ((param_6 & 2u) == 0u) {
        a.r[0] = 0x817fdf04u;
        a.r[1] = (u32)param_7 + 0xccu;
        a.r[2] = 0x817fdeecu;
        (void)tc_call(0x80234484u, &a);
    } else {
        a.r[0] = 0x817fdf04u;
        a.r[1] = (u32)param_5 + 0xc8u;
        a.r[2] = 0x817fdeecu;
        (void)tc_call(0x80234484u, &a);
    }
    t5 = (f64)rdf32(0x817fdef0u);
    t6 = (f64)rdf32(0x817fdef4u);
    t8 = (f64)rdf32(0x817fdeecu);
    t14 = (f64)(f32)(ppc_fmadds(t8, t8, (f64)(f32)(t5 * t5)) + (f64)(f32)(t6 * t6));
    if (t14 < (f64)rdf32(0x80577ce8u)) {
        r0 = 0u;
    } else {
        a.f[0] = t14;
        f1 = tc_callf(0x802eff54u, &a);
        r0 = 1u;
        t20 = (f64)(f32)((f64)rdf32(0x817fdef0u) * f1);
        t22 = (f64)rdf32(0x817fdef4u);
        wrf32d(0x817fdeecu, (f64)(f32)((f64)rdf32(0x817fdeecu) * f1));
        wrf32d(0x817fdef0u, t20);
        wrf32d(0x817fdef4u, (f64)(f32)(t22 * f1));
    }
    if (r0 == 0u) {
        wrf32d(0x817fdeecu, (f64)rdf32((u32)param_5 + 0xbcu));
        wrf32d(0x817fdef0u, (f64)rdf32((u32)param_5 + 0xc0u));
        wrf32d(0x817fdef4u, (f64)rdf32((u32)param_5 + 0xc4u));
    }
    a.r[0] = 0x817fdeecu;
    a.r[1] = 0x817fdf04u;
    a.r[2] = 0x817fdef8u;
    (void)tc_call(0x80234484u, &a);
    t29 = (f64)rdf32(0x817fdefcu);
    t30 = (f64)rdf32(0x817fdf00u);
    t32 = (f64)rdf32(0x817fdef8u);
    t38 = (f64)(f32)(ppc_fmadds(t32, t32, (f64)(f32)(t29 * t29)) + (f64)(f32)(t30 * t30));
    if (!(t38 < (f64)rdf32(0x80577ce8u))) {
        a.f[0] = t38;
        f1 = tc_callf(0x802eff54u, &a);
        t44 = (f64)(f32)((f64)rdf32(0x817fdefcu) * f1);
        t46 = (f64)rdf32(0x817fdf00u);
        wrf32d(0x817fdef8u, (f64)(f32)((f64)rdf32(0x817fdef8u) * f1));
        wrf32d(0x817fdefcu, t44);
        wrf32d(0x817fdf00u, (f64)(f32)(t46 * f1));
    }
    f1 = (f64)rdf32(param_9 + 8u);
    wrf32d((u32)param_7 + 0xccu, (f64)rdf32(0x817fdef8u));
    f4 = (f64)rdf32(param_9 + 4u);
    f8 = (f64)rdf32(param_9);
    wrf32d((u32)param_7 + 0xd0u, (f64)rdf32(0x817fdefcu));
    wrf32d((u32)param_7 + 0xd4u, (f64)rdf32(0x817fdf00u));
    f0 = (f64)rdf32(0x817fdf00u);
    f2 = (f64)rdf32(0x817fdf0cu);
    f3 = (f64)rdf32(0x817fdef4u);
    f5 = (f64)rdf32(0x817fdefcu);
    f6 = (f64)rdf32(0x817fdf08u);
    f7 = (f64)rdf32(0x817fdef0u);
    f9 = (f64)rdf32(0x817fdef8u);
    f11 = (f64)rdf32(0x817fdeecu);
    wrf32d(0x817fdf44u, (f64)rdf32(0x817fdf04u));
    wrf32d(0x817fdf40u, f11);
    wrf32d(0x817fdf48u, f9);
    wrf32d(0x817fdf4cu, f8);
    wrf32d(0x817fdf50u, f7);
    wrf32d(0x817fdf54u, f6);
    wrf32d(0x817fdf58u, f5);
    wrf32d(0x817fdf5cu, f4);
    wrf32d(0x817fdf60u, f3);
    wrf32d(0x817fdf64u, f2);
    wrf32d(0x817fdf68u, f0);
    wrf32d(0x817fdf6cu, f1);
    r3 = (u32)rd8((u32)param_7 + 0x9au);
    f3 = (f64)rdf32((u32)param_7 + 0x40u);
    f1 = (f64)rdf32((u32)param_7 + 0x44u);
    f0 = (f64)rdf32((u32)param_7 + 0x48u);
    wrf32d(0x817fdee0u, f3);
    wrf32d(0x817fdee4u, f1);
    wrf32d(0x817fdee8u, f0);
    if (r3 != 0u) {
        wr32(0x817fdfa4u, r3);
        f2 = rdf64(0x80577cf8u);
        wr32(0x817fdfa0u, 0x43300000u);
        wrf32d(0x817fdee0u, (f64)(f32)(f3 + (f64)(f32)((f64)rdf32(0x80577cecu) * (f64)(f32)(rdf64(0x817fdfa0u) - f2))));
    }
    r3 = (u32)rd8((u32)param_7 + 0x9bu);
    if (r3 != 0u) {
        wr32(0x817fdfa4u, r3);
        f3 = rdf64(0x80577cf8u);
        wr32(0x817fdfa0u, 0x43300000u);
        wrf32d(0x817fdee4u, (f64)(f32)((f64)rdf32(0x817fdee4u) + (f64)(f32)((f64)rdf32(0x80577cecu) * (f64)(f32)(rdf64(0x817fdfa0u) - f3))));
    }
    r3 = (u32)rd8((u32)param_7 + 0x9cu);
    if (r3 != 0u) {
        wr32(0x817fdfa4u, r3);
        f3 = rdf64(0x80577cf8u);
        wr32(0x817fdfa0u, 0x43300000u);
        wrf32d(0x817fdee8u, (f64)(f32)((f64)rdf32(0x817fdee8u) + (f64)(f32)((f64)rdf32(0x80577cecu) * (f64)(f32)(rdf64(0x817fdfa0u) - f3))));
    }
    r5 = rd32((u32)param_7 + 0xc8u);
    f1 = (f64)(f32)((f64)rdf32(0x817fdee4u) + (f64)rdf32(r5 + 0x64u));
    f4 = (f64)(f32)((f64)rdf32(0x817fdee0u) + (f64)rdf32(r5 + 0x60u));
    f3 = (f64)rdf32(0x817fdee8u);
    f2 = (f64)rdf32(r5 + 0x68u);
    f29 = (f64)(f32)((f64)(f32)((f64)rdf32((u32)param_7 + 0x30u) * (f64)rdf32((u32)param_7 + 0x38u)) * (f64)rdf32(r5 + 0x58u));
    wrf32d(0x817fdee4u, f1);
    wrf32d(0x817fdee0u, f4);
    wrf32d(0x817fdee8u, (f64)(f32)(f3 + f2));
    a.f[0] = f1;
    a.r[0] = 0x817fdedcu;
    a.r[1] = 0x817fded8u;
    (void)tc_call(0x80320a58u, &a);
    f5 = (f64)(f32)((f64)rdf32(0x817fded8u) * f29);
    f1 = (f64)rdf32(0x80577cf0u);
    f4 = (f64)(f32)((f64)rdf32(0x817fdedcu) * f29);
    f0 = (f64)rdf32(0x80577cf4u);
    wrf32d(0x817fdf14u, f1);
    f3 = -f4;
    wrf32d(0x817fded8u, f5);
    wrf32d(0x817fdedcu, f4);
    wrf32d(0x817fdf10u, f5);
    wrf32d(0x817fdf18u, f3);
    wrf32d(0x817fdf1cu, (f64)(f32)(param_1 - (f64)(f32)(f5 * param_1)));
    wrf32d(0x817fdf20u, f1);
    wrf32d(0x817fdf24u, f0);
    wrf32d(0x817fdf28u, f1);
    wrf32d(0x817fdf2cu, f1);
    wrf32d(0x817fdf30u, f4);
    wrf32d(0x817fdf34u, f1);
    wrf32d(0x817fdf38u, f5);
    wrf32d(0x817fdf3cu, (f64)(f32)(f3 * param_1));
    a.r[0] = 0x817fdf40u;
    a.r[1] = 0x817fdf10u;
    a.r[2] = 0x817fdf70u;
    (void)tc_call(0x802337a0u, &a);
    a.r[0] = 0x817fdf70u;
    a.r[1] = param_10;
    a.r[2] = param_4;
    (void)tc_call(0x8023411cu, &a);
    a.r[0] = 0x817fdf70u;
    a.r[1] = r30;
    a.r[2] = param_4 + 0xcu;
    (void)tc_call(0x8023411cu, &a);
    wrf32d(param_4 + 0x18u, param_2);
    return;
}
