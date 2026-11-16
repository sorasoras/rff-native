#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802f6b98(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0;
    f64 f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
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
    wr32(0x817fdf7cu, 0u);
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    r6 = rd32(param_r3 + 0x10u);
    r5 = rd32(param_r3 + 0x9cu);
    r4 = rd32(param_r3 + 0xa0u);
    f31 = (f64)(f32)((f64)(f32)((f64)rdf32(0x805775a8u) * (f64)rdf32(param_r3 + 0xa4u)) * (f64)rdf32(r6 + 0x2cu));
    wr32(0x817fdf68u, 0x43300000u);
    wr32(0x817fdf70u, 0x43300000u);
    if ((s32)r4 >= (s32)r5) {
        f0 = (f64)rdf32(param_r3 + 0x98u);
    } else {
        r4 = r4 ^ 0x80000000u;
        wr32(0x817fdf6cu, r4);
        f4 = rdf64(0x805775b0u);
        f1 = (f64)rdf32(param_r3 + 0x98u);
        f2 = (f64)rdf32(param_r3 + 0x94u);
        f3 = (f64)(f32)(rdf64(0x817fdf68u) - f4);
        wr32(0x817fdf74u, r5 ^ 0x80000000u);
        f1 = (f64)(f32)(f1 - f2);
        f1 = (f64)(f32)(f3 * f1);
        f0 = (f64)(f32)(f2 + (f64)(f32)px_fdiv(f1, (f64)(f32)(rdf64(0x817fdf70u) - f4)));
    }
    r5 = rd32(param_r3 + 0x60u);
    f31 = (f64)(f32)(f31 * f0);
    r0 = rd32(param_r3 + 0x64u);
    if ((s32)r0 >= (s32)r5) {
        f0 = (f64)rdf32(param_r3 + 0x5cu);
    } else {
        wr32(0x817fdf6cu, r0 ^ 0x80000000u);
        f4 = rdf64(0x805775b0u);
        f1 = (f64)rdf32(param_r3 + 0x5cu);
        f2 = (f64)rdf32(param_r3 + 0x58u);
        f3 = (f64)(f32)(rdf64(0x817fdf68u) - f4);
        wr32(0x817fdf74u, r5 ^ 0x80000000u);
        f1 = (f64)(f32)(f1 - f2);
        f1 = (f64)(f32)(f3 * f1);
        f0 = (f64)(f32)(f2 + (f64)(f32)px_fdiv(f1, (f64)(f32)(rdf64(0x817fdf70u) - f4)));
    }
    r5 = rd32(param_r3 + 0x70u);
    f31 = (f64)(f32)(f31 * f0);
    r0 = rd32(param_r3 + 0x74u);
    if ((s32)r0 >= (s32)r5) {
        f0 = (f64)rdf32(param_r3 + 0x6cu);
    } else {
        wr32(0x817fdf6cu, r0 ^ 0x80000000u);
        f4 = rdf64(0x805775b0u);
        f1 = (f64)rdf32(param_r3 + 0x6cu);
        f2 = (f64)rdf32(param_r3 + 0x68u);
        f3 = (f64)(f32)(rdf64(0x817fdf68u) - f4);
        wr32(0x817fdf74u, r5 ^ 0x80000000u);
        f1 = (f64)(f32)(f1 - f2);
        f1 = (f64)(f32)(f3 * f1);
        f0 = (f64)(f32)(f2 + (f64)(f32)px_fdiv(f1, (f64)(f32)(rdf64(0x817fdf70u) - f4)));
    }
    f31 = (f64)(f32)(f31 * f0);
    r29 = param_r3;
    r30 = 0x817fdf58u;
    r27 = 0u;
    f28 = (f64)(f32)((f64)(f32)((f64)(f32)((f64)rdf32(0x805775a8u) * (f64)rdf32(param_r3 + 0xb0u)) * (f64)rdf32(param_r3 + 0x34u)) * (f64)rdf32(param_r3 + 0x50u));
    f31 = (f64)(f32)(f31 * (f64)rdf32(param_r3 + 0x30u));
    f30 = (f64)(f32)((f64)(f32)((f64)(f32)((f64)rdf32(0x805775acu) + (f64)rdf32(param_r3 + 0xa8u)) + (f64)rdf32(param_r3 + 0x38u)) + (f64)rdf32(param_r3 + 0x54u));
    f31 = (f64)(f32)(f31 * (f64)rdf32(param_r3 + 0x4cu));
    f29 = (f64)(f32)((f64)(f32)((f64)rdf32(0x805775acu) + (f64)rdf32(param_r3 + 0xacu)) + (f64)rdf32(param_r3 + 0x3cu));
    f27 = (f64)(f32)((f64)(f32)((f64)rdf32(param_r3 + 0xb4u) + (f64)rdf32(param_r3 + 0x44u)) + (f64)rdf32(r6 + 0x30u));
    r28 = rd32(param_r3 + 0xb8u);
    f26 = (f64)(f32)((f64)(f32)((f64)rdf32(0x805775a8u) * (f64)rdf32(param_r3 + 0xbcu)) * (f64)rdf32(r6 + 0x38u));
    f25 = (f64)rdf32(0x805775a8u);
    do {
        wrf32d(r30, f25);
        a.r[0] = rd32(param_r3 + 0x10u);
        a.r[1] = r27;
        f1 = tc_callf(0x80305c50u, &a);
        r27 = r27 + 1u;
        f0 = (f64)rdf32(r29 + 0xd0u);
        f1 = (f64)(f32)((f64)rdf32(r30) * f1);
        r29 = r29 + 4u;
        f0 = (f64)(f32)(f1 * f0);
        wrf32d(r30, f0);
        r30 = r30 + 4u;
    } while ((s32)r27 < 4);
    f5 = (f64)rdf32(0x805775acu);
    r4 = rd32(param_r3 + 0x10u);
    f1 = (f64)rdf32(param_r3 + 0xc8u);
    f4 = (f64)(f32)(f5 + (f64)rdf32(param_r3 + 0xc4u));
    f3 = (f64)rdf32(r4 + 0x50u);
    wrf32d(0x817fdf48u, f5);
    f2 = (f64)(f32)(f5 + f1);
    f7 = (f64)rdf32(r4 + 0x54u);
    f1 = (f64)(f32)(f5 + (f64)rdf32(param_r3 + 0xccu));
    f6 = (f64)rdf32(r4 + 0x58u);
    r12 = rd32(param_r3);
    f3 = (f64)(f32)(f4 + f3);
    wrf32d(0x817fdf48u, f4);
    f2 = (f64)(f32)(f2 + f7);
    f1 = (f64)(f32)(f1 + f6);
    f0 = (f64)rdf32(param_r3 + 0x40u);
    f25 = (f64)(f32)(f5 + (f64)rdf32(param_r3 + 0xc0u));
    f4 = (f64)rdf32(r4 + 0x4cu);
    wrf32d(0x817fdf4cu, f5);
    f0 = (f64)(f32)(f3 + f0);
    r12 = rd32(r12 + 0x24u);
    wrf32d(0x817fdf50u, f5);
    f25 = (f64)(f32)(f25 + f4);
    wrf32d(0x817fdf48u, f3);
    wrf32d(0x817fdf4cu, f2);
    wrf32d(0x817fdf50u, f1);
    wrf32d(0x817fdf48u, f0);
    a.r[0] = param_r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    r3 = tc_call(r12, &a);
    wrf32d(r3 + 4u, f31);
    r27 = r3;
    r31 = 0x817fdf58u;
    r29 = 0u;
    wrf32d(r3 + 0xcu, f30);
    wrf32d(r3 + 0x10u, f29);
    wrf32d(r3 + 8u, f28);
    wrf32d(r3 + 0x14u, f27);
    wr32(r3 + 0x1cu, r28);
    wrf32d(r3 + 0x20u, f26);
    do {
        a.f[0] = (f64)rdf32(r31);
        a.r[0] = r27;
        a.r[1] = r29;
        (void)tc_call(0x802f5d28u, &a);
        r29 = r29 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r29 < 4);
    wrf32d(r27 + 0x24u, f25);
    r31 = 0x817fdf48u;
    r28 = 0u;
    do {
        a.f[0] = (f64)rdf32(r31);
        a.r[0] = r27;
        a.r[1] = r28;
        (void)tc_call(0x802f5d08u, &a);
        r28 = r28 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r28 < 3);
    return;
}
