#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_800bbc34(u32 param_r3)
{
    u32 c1eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r15 = 0, r23 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
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
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    a.r[0] = param_r3;
    (void)tc_call(0x800bc158u, &a);
    a.r[0] = param_r3 + 0x78cu;
    (void)tc_call(0x8005250cu, &a);
    f0 = (f64)rdf32(param_r3 + 0xc1cu);
    f1 = (f64)rdf32(param_r3 + 0x1db4u);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r26 = 0u;
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    wr32(param_r3 + 0x7b4u, 1u);
    r30 = param_r3;
    wrf64(0x817fdf88u, f0);
    f31 = (f64)rdf32(0x80572d90u);
    r29 = param_r3 + 0x830u;
    wrf64(0x817fdf80u, f1);
    r28 = param_r3 + 0x8a4u;
    r31 = rd32(0x817fdf84u);
    wr8(param_r3 + 0x7b8u, (u8)rd32(0x817fdf8cu));
    r23 = 0u;
    f30 = rdf64(0x80572dd0u);
    do {
        r15 = rd32(r30 + 0x81cu);
        c1eq = r15 == 0u;
        if (!c1eq && (u32)rd16(r23 - 0x7fb66cd0u) == 0x2e8u) {
            if (!c1eq) {
                r3 = tc_call(0x800545e4u, &a);
                r6 = r3;
                if (rd32(r3 + 0x10u) != 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r15;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                } else {
                    if (rd32(r3 + 0x20u) != 0u) {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = r15;
                        (void)tc_call(0x80094ec0u, &a);
                    } else {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r15;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        (void)tc_call(0x80040e98u, &a);
                    }
                }
            }
            wr32(r30 + 0x81cu, 0u);
        } else {
            if (r15 == 0u) {
                r27 = r23 - 0x7fb66fa0u;
                r4 = (u32)rd16(r27 + 0x2d0u);
                if (r4 != 0x2e8u) {
                    a.r[0] = 0x80472f48u;
                    a.r[1] = r4;
                    r3 = tc_call(0x800bede4u, &a);
                    r25 = r3;
                    r3 = tc_call(0x800545e4u, &a);
                    r4 = r3;
                    if (rd32(r3 + 0x10u) != 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x48u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040db8u, &a);
                        r15 = r3;
                    } else {
                        if (rd32(r3 + 0x20u) != 0u) {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = 0x48u;
                            r3 = tc_call(0x80094e80u, &a);
                        } else {
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = 0x48u;
                            a.r[2] = rd32(r4 + 0xcu);
                            a.r[3] = r4 + 0x18u;
                            r3 = tc_call(0x80040cd8u, &a);
                        }
                        r15 = r3;
                    }
                    if (r3 != 0u) {
                        r3 = r3;
                        a.r[0] = r3;
                        a.r[1] = r25;
                        (void)tc_call(0x800514a0u, &a);
                    }
                    wr32(r30 + 0x81cu, r15);
                    f1 = (f64)rdf32(0x80572dc8u);
                    f2 = (f64)rdf32(r30 + 0x820u);
                    r9 = ((u32)rd16(r27 + 0x2d0u) * 0x34u) - 0x7fb60e50u;
                    r8 = rd32(r9 + 0x2874u);
                    wr32(0x817fdf64u, rd32(r9 + 0x2868u));
                    r7 = rd32(r9 + 0x2878u);
                    r6 = rd32(r9 + 0x287cu);
                    f0 = (f64)(f32)(f2 + (f64)rdf32(0x817fdf64u));
                    r0 = rd32(r9 + 0x2870u);
                    wr32(0x817fdf68u, rd32(r9 + 0x286cu));
                    wrf32d(r30 + 0x820u, f0);
                    f0 = (f64)rdf32(0x817fdf68u);
                    f2 = (f64)rdf32(r30 + 0x824u);
                    wr32(0x817fdf6cu, r0);
                    f2 = (f64)(f32)(f2 + f0);
                    f0 = (f64)rdf32(0x817fdf6cu);
                    wr32(0x817fdf70u, r8);
                    wrf32d(r30 + 0x824u, f2);
                    f2 = (f64)rdf32(0x817fdf70u);
                    wrf32d(r30 + 0x828u, f0);
                    f3 = (f64)(f32)(f31 * f2);
                    r0 = (u32)rd16(r27 + 0x2d0u);
                    wr32(0x817fdf74u, r7);
                    r0 = r0 * 0x34u;
                    wr32(0x817fdf78u, r6);
                    r7 = r0 - 0x7fb60e50u;
                    f2 = (f64)(f32)(f31 * (f64)rdf32(0x817fdf74u));
                    r6 = rd32(r7 + 0x2880u);
                    f0 = (f64)(f32)(f31 * (f64)rdf32(0x817fdf78u));
                    r5 = rd32(r7 + 0x2884u);
                    r0 = rd32(r7 + 0x2888u);
                    wrf32d(0x817fdf70u, f3);
                    wrf32d(0x817fdf74u, f2);
                    wrf32d(0x817fdf78u, f0);
                    wr32(0x817fdf58u, r6);
                    wr32(0x817fdf5cu, r5);
                    wr32(0x817fdf60u, r0);
                    a.f[0] = f1;
                    a.r[0] = 0x817fdf58u;
                    a.r[1] = 0x817fdf58u;
                    (void)tc_call(0x802343c8u, &a);
                    r3 = rd32(r30 + 0x81cu);
                    f2 = (f64)rdf32(0x817fdf70u);
                    wrf32d(r3 + 0x1cu, (f64)rdf32(0x817fdf58u));
                    f1 = (f64)rdf32(0x817fdf74u);
                    f0 = (f64)rdf32(0x817fdf78u);
                    wrf32d(r3 + 0x20u, (f64)rdf32(0x817fdf5cu));
                    wrf32d(r3 + 0x24u, (f64)rdf32(0x817fdf60u));
                    r3 = rd32(r30 + 0x81cu);
                    wrf32d(r3 + 0x10u, f2);
                    wrf32d(r3 + 0x14u, f1);
                    wrf32d(r3 + 0x18u, f0);
                    f2 = (f64)rdf32(r30 + 0x828u);
                    f1 = (f64)rdf32(r30 + 0x824u);
                    r3 = rd32(r30 + 0x81cu);
                    wrf32d(r3 + 4u, (f64)(f32)((f64)rdf32(r30 + 0x820u) + (f64)rdf32(r30 + 0x82cu)));
                    wrf32d(r3 + 8u, f1);
                    wrf32d(r3 + 0xcu, f2);
                    wrf32d(rd32(r30 + 0x81cu) + 0x40u, (f64)(f32)px_fdiv((f64)rdf32(param_r3 + 0xc1cu), f30));
                    wr8(r30 + 0x87cu, 0xffu);
                    wr8(r30 + 0x87du, 0xffu);
                    wr8(r30 + 0x87eu, 0xffu);
                    wr8(r30 + 0x87fu, (u8)r31);
                    wr8(r30 + 0x880u, 0xffu);
                    wr8(r30 + 0x881u, 0xffu);
                    wr8(r30 + 0x882u, 0xffu);
                    wr8(r30 + 0x883u, (u8)r31);
                    wr8(r30 + 0x884u, 0xffu);
                    wr8(r30 + 0x885u, 0xffu);
                    wr8(r30 + 0x886u, 0xffu);
                    wr8(r30 + 0x887u, (u8)r31);
                    wr8(r30 + 0x888u, 0xffu);
                    wr8(r30 + 0x889u, 0xffu);
                    wr8(r30 + 0x88au, 0xffu);
                    wr8(r30 + 0x88bu, (u8)r31);
                    wr8(r30 + 0x8f0u, 0xffu);
                    wr8(r30 + 0x8f1u, 0xffu);
                    wr8(r30 + 0x8f2u, 0xffu);
                    wr8(r30 + 0x8f3u, (u8)r31);
                    wr8(r30 + 0x8f4u, 0xffu);
                    wr8(r30 + 0x8f5u, 0xffu);
                    wr8(r30 + 0x8f6u, 0xffu);
                    wr8(r30 + 0x8f7u, (u8)r31);
                    wr8(r30 + 0x8f8u, 0xffu);
                    wr8(r30 + 0x8f9u, 0xffu);
                    wr8(r30 + 0x8fau, 0xffu);
                    wr8(r30 + 0x8fbu, (u8)r31);
                    wr8(r30 + 0x8fcu, 0xffu);
                    wr8(r30 + 0x8fdu, 0xffu);
                    wr8(r30 + 0x8feu, 0xffu);
                    wr8(r30 + 0x8ffu, (u8)r31);
                }
            }
        }
        r4 = rd32(r30 + 0x81cu);
        if (r4 != 0u && rd32(param_r3 + 0x10u) == 0u) {
            a.r[0] = 0x803cb934u;
            a.r[1] = r4;
            (void)tc_call(0x8007b03cu, &a);
            r15 = r23 - 0x7fb66fa0u;
            r6 = (u32)rd8(r15 + 0x2d2u);
            r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r6) >> 2);
            r0 = r0 + ((r0 >> 0x1fu) & 1u);
            r0 = r0 * 0xau;
            r0 = r6 - r0;
            a.r[0] = param_r3;
            a.r[1] = r29;
            a.r[2] = (u32)(s8)r0;
            (void)tc_call(0x800bac2cu, &a);
            a.r[0] = r29;
            (void)tc_call(0x8005250cu, &a);
            wr32(r30 + 0x858u, 1u);
            r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)rd8(r15 + 0x2d2u)) >> 2);
            r0 = r0 + ((r0 >> 0x1fu) & 1u);
            a.r[0] = param_r3;
            a.r[1] = r28;
            a.r[2] = (u32)(s8)r0;
            (void)tc_call(0x800bac2cu, &a);
            if ((u32)rd8(r15 + 0x2d2u) >= 0xau) {
                a.r[0] = r28;
                (void)tc_call(0x8005250cu, &a);
                wr32(r30 + 0x8ccu, 1u);
            }
            wrf32d(rd32(r30 + 0x81cu) + 0x40u, (f64)(f32)px_fdiv((f64)rdf32(param_r3 + 0xc1cu), f30));
            wr8(r30 + 0x87cu, 0xffu);
            wr8(r30 + 0x87du, 0xffu);
            wr8(r30 + 0x87eu, 0xffu);
            wr8(r30 + 0x87fu, (u8)r31);
            wr8(r30 + 0x880u, 0xffu);
            wr8(r30 + 0x881u, 0xffu);
            wr8(r30 + 0x882u, 0xffu);
            wr8(r30 + 0x883u, (u8)r31);
            wr8(r30 + 0x884u, 0xffu);
            wr8(r30 + 0x885u, 0xffu);
            wr8(r30 + 0x886u, 0xffu);
            wr8(r30 + 0x887u, (u8)r31);
            wr8(r30 + 0x888u, 0xffu);
            wr8(r30 + 0x889u, 0xffu);
            wr8(r30 + 0x88au, 0xffu);
            wr8(r30 + 0x88bu, (u8)r31);
            wr8(r30 + 0x8f0u, 0xffu);
            wr8(r30 + 0x8f1u, 0xffu);
            wr8(r30 + 0x8f2u, 0xffu);
            wr8(r30 + 0x8f3u, (u8)r31);
            wr8(r30 + 0x8f4u, 0xffu);
            wr8(r30 + 0x8f5u, 0xffu);
            wr8(r30 + 0x8f6u, 0xffu);
            wr8(r30 + 0x8f7u, (u8)r31);
            wr8(r30 + 0x8f8u, 0xffu);
            wr8(r30 + 0x8f9u, 0xffu);
            wr8(r30 + 0x8fau, 0xffu);
            wr8(r30 + 0x8fbu, (u8)r31);
            wr8(r30 + 0x8fcu, 0xffu);
            wr8(r30 + 0x8fdu, 0xffu);
            wr8(r30 + 0x8feu, 0xffu);
            wr8(r30 + 0x8ffu, (u8)r31);
        }
        r26 = r26 + 1u;
        r29 = r29 + 0xfcu;
        r28 = r28 + 0xfcu;
        r23 = r23 + 4u;
        r30 = r30 + 0xfcu;
    } while ((s32)r26 < 4);
    r3 = tc_call(0x80059e38u, &a);
    if (r3 != 0u) {
        f1 = rdf64(0x80572dd8u) + (f64)rdf32(param_r3 + 0xc1cu);
        if (f1 < rdf64(0x80572dd0u)) {
            wrf32d(param_r3 + 0xc1cu, (f64)(f32)f1);
        } else {
            wrf32d(param_r3 + 0xc1cu, (f64)rdf32(0x80572dc4u));
        }
    }
    return;
}
