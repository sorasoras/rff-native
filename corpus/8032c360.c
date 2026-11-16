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

void fn_8032c360(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r23 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f21 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fddf0u, 0x817fe000u);
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
    wr32(0x817fdf2cu, 0u);
    wr32(0x817fdf30u, 0u);
    wr32(0x817fdf34u, 0u);
    wr32(0x817fdf38u, 0u);
    wr32(0x817fdf3cu, 0u);
    wr32(0x817fdf40u, 0u);
    wr32(0x817fdf44u, 0u);
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    r7 = rd32((u32)param_3 + 0x24u);
    wr32(0x817fdf08u, 0x43300000u);
    wr32(0x817fdf10u, 0x43300000u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_3;
    a.r[2] = r7 + 0x9cu;
    a.r[3] = param_2;
    (void)tc_call(0x80325f9cu, &a);
    a.r[0] = 0u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    a.r[0] = 0xdu;
    a.r[1] = 0x80570fa0u;
    a.r[2] = 2u;
    (void)tc_call(0x8024fef4u, &a);
    (void)tc_call(0x8024f870u, &a);
    a.r[0] = 9u;
    a.r[1] = 1u;
    (void)tc_call(0x8024f27cu, &a);
    if ((u32)rd8(param_1 + 0xc0u) != 0u) {
        a.r[0] = 0xdu;
        a.r[1] = 2u;
        (void)tc_call(0x8024f27cu, &a);
    }
    a.r[0] = 0u;
    a.r[1] = 9u;
    a.r[2] = 1u;
    a.r[3] = 4u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 0u;
    a.r[1] = 0xdu;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80254548u, &a);
    r31 = rd32((u32)param_3 + 0x24u) + 0x9cu;
    a.r[0] = (u32)param_3;
    a.r[1] = 0x817fded8u;
    (void)tc_call(0x8031efa8u, &a);
    r12 = rd32(param_2 + 4u);
    c0eq = (f64)rdf32(0x80577c68u) == (f64)rdf32(param_2 + 0x88u);
    r11 = rd32(param_2 + 8u);
    r10 = rd32(param_2 + 0xcu);
    r9 = rd32(param_2 + 0x10u);
    r8 = rd32(param_2 + 0x14u);
    r7 = rd32(param_2 + 0x18u);
    r6 = rd32(param_2 + 0x1cu);
    r5 = rd32(param_2 + 0x20u);
    r4 = rd32(param_2 + 0x24u);
    r3 = rd32(param_2 + 0x28u);
    r0 = rd32(param_2 + 0x2cu);
    wr32(0x817fdea8u, rd32(param_2));
    wr32(0x817fdeacu, r12);
    wr32(0x817fdeb0u, r11);
    wr32(0x817fdeb4u, r10);
    wr32(0x817fdeb8u, r9);
    wr32(0x817fdebcu, r8);
    wr32(0x817fdec0u, r7);
    wr32(0x817fdec4u, r6);
    wr32(0x817fdec8u, r5);
    wr32(0x817fdeccu, r4);
    wr32(0x817fded0u, r3);
    wr32(0x817fded4u, r0);
    if (!c0eq) {
        a.r[0] = 0x817fde28u;
        (void)tc_call(0x80254460u, &a);
        f0 = (f64)rdf32(0x817fde28u);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdf18u, f0);
        r0 = rd32(0x817fdf1cu);
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            wrf32d(0x817fded4u, (f64)(f32)((f64)rdf32(0x817fded4u) + (f64)rdf32(param_2 + 0x88u)));
        } else if (c0lt && (s32)r0 >= 0) {
            a.r[0] = param_2;
            a.r[1] = param_2 + 0x8cu;
            a.r[2] = 0x817fde1cu;
            (void)tc_call(0x8023411cu, &a);
            a.r[0] = 0x817fde1cu;
            a.r[1] = 0x817fde1cu;
            r3 = tc_call(0x80320984u, &a);
            if (r3 == 0u) {
                wrf32d(0x817fded4u, (f64)(f32)((f64)rdf32(0x817fded4u) + (f64)rdf32(param_2 + 0x88u)));
            } else {
                f1 = (f64)rdf32(0x817fde24u);
                f0 = (f64)rdf32(0x80577c68u);
                if (!((f1 > f0) || (f1 == f0))) {
                    f3 = (f64)rdf32(param_2 + 0x88u);
                    f1 = (f64)(f32)(f1 * f3);
                    f5 = (f64)(f32)((f64)rdf32(0x817fde1cu) * f3);
                    f3 = (f64)(f32)((f64)rdf32(0x817fde20u) * f3);
                    f2 = (f64)(f32)((f64)rdf32(0x817fdec4u) - f3);
                    f0 = (f64)(f32)((f64)rdf32(0x817fded4u) - f1);
                    wrf32d(0x817fdeb4u, (f64)(f32)((f64)rdf32(0x817fdeb4u) - f5));
                    wrf32d(0x817fdec4u, f2);
                    wrf32d(0x817fded4u, f0);
                } else {
                    f3 = (f64)rdf32(param_2 + 0x88u);
                    f1 = (f64)(f32)(f1 * f3);
                    f5 = (f64)(f32)((f64)rdf32(0x817fde1cu) * f3);
                    f3 = (f64)(f32)((f64)rdf32(0x817fde20u) * f3);
                    f2 = (f64)(f32)((f64)rdf32(0x817fdec4u) + f3);
                    f0 = (f64)(f32)((f64)rdf32(0x817fded4u) + f1);
                    wrf32d(0x817fdeb4u, (f64)(f32)((f64)rdf32(0x817fdeb4u) + f5));
                    wrf32d(0x817fdec4u, f2);
                    wrf32d(0x817fded4u, f0);
                }
            }
        }
    }
    a.r[0] = 0x817fdea8u;
    a.r[1] = 0x817fded8u;
    a.r[2] = 0x817fdea8u;
    (void)tc_call(0x802337a0u, &a);
    a.r[0] = 0x817fdea8u;
    a.r[1] = 0u;
    (void)tc_call(0x802544a0u, &a);
    r12 = rd32(param_1);
    f3 = rdf64(0x80577c80u);
    r6 = (u32)(s8)rd8(r31 + 0xa9u) ^ 0x80000000u;
    f1 = (f64)rdf32(0x80577c6cu);
    r5 = (u32)(s8)rd8(r31 + 0xaau) ^ 0x80000000u;
    wr32(0x817fdf0cu, r6);
    r0 = (u32)rd16(r31);
    wr32(0x817fdf14u, r5);
    f2 = (f64)(f32)(rdf64(0x817fdf08u) - f3);
    r12 = rd32(r12 + 0x10u);
    f24 = (f64)(f32)px_fdiv(f2, f1);
    f23 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf10u) - f3), f1);
    a.r[0] = param_1;
    a.r[1] = r0 & 0x800u;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    r23 = r3;
    a.r[0] = param_1;
    a.r[1] = (u32)rd16(r31) & 0x800u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x14u), &a);
    f1 = tc_lastf();
    r30 = r3;
    r29 = 1u;
    a.r[0] = (u32)param_3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(r23, &a);
    f28 = rdf64(0x80577c88u);
    r28 = r3;
    f29 = (f64)rdf32(0x80577c74u);
    f31 = (f64)rdf32(0x80577c68u);
    f30 = (f64)rdf32(0x80577c78u);
    f27 = (f64)rdf32(0x80577c70u);
    while (r3 != 0u) {
        f2 = (f64)rdf32(r3 + 0x30u);
        f1 = (f64)rdf32(r3 + 0x38u);
        r3 = rd32(r3 + 0xc8u);
        f3 = (f64)(f32)(f2 * f1);
        f26 = (f64)(f32)(f3 * (f64)rdf32(r3 + 0x58u));
        if (!(f26 < f27)) {
            r3 = rd32(r3 + 0x24u);
            r0 = (u32)rd16(r3 + 0x9cu) & 0x6000u;
            c0lt = (s32)r0 < 16384;
            if (r0 == 0x4000u) {
                f3 = (f64)(f32)((f64)rdf32(r28 + 0x34u) * f1);
            } else if (!c0lt) {
                if (r0 != 0x6000u) {
                    f1 = (f64)rdf32(r28 + 0x34u);
                    f3 = (f64)(f32)(f1 * (f64)rdf32(r28 + 0x3cu));
                }
            } else if (r0 == 0x2000u) {
                f3 = (f64)(f32)(f2 * (f64)rdf32(r28 + 0x3cu));
            } else {
                f1 = (f64)rdf32(r28 + 0x34u);
                f3 = (f64)(f32)(f1 * (f64)rdf32(r28 + 0x3cu));
            }
            f25 = (f64)(f32)(f3 * (f64)rdf32(rd32(r28 + 0xc8u) + 0x5cu));
            if (!(f25 < f27)) {
                a.r[0] = param_1;
                a.r[1] = r28;
                a.r[2] = r31;
                a.r[3] = param_2;
                a.r[4] = r29;
                (void)tc_call(0x80326730u, &a);
                r0 = (u32)rd8(r28 + 0x9au);
                r29 = 0u;
                f2 = (f64)rdf32(r28 + 0x40u);
                f1 = (f64)rdf32(r28 + 0x44u);
                f0 = (f64)rdf32(r28 + 0x48u);
                wrf32d(0x817fde10u, f2);
                r3 = (u32)rd8(r31 + 0xafu);
                wrf32d(0x817fde14u, f1);
                wrf32d(0x817fde18u, f0);
                if (r0 != 0u) {
                    wr32(0x817fdf0cu, r0);
                    wrf32d(0x817fde10u, (f64)(f32)(f2 + (f64)(f32)(f29 * (f64)(f32)(rdf64(0x817fdf08u) - f28))));
                }
                r0 = (u32)rd8(r28 + 0x9bu);
                if (r0 != 0u) {
                    wr32(0x817fdf14u, r0);
                    wrf32d(0x817fde14u, (f64)(f32)((f64)rdf32(0x817fde14u) + (f64)(f32)(f29 * (f64)(f32)(rdf64(0x817fdf10u) - f28))));
                }
                r0 = (u32)rd8(r28 + 0x9cu);
                if (r0 != 0u) {
                    wr32(0x817fdf0cu, r0);
                    wrf32d(0x817fde18u, (f64)(f32)((f64)rdf32(0x817fde18u) + (f64)(f32)(f29 * (f64)(f32)(rdf64(0x817fdf08u) - f28))));
                }
                r4 = rd32(r28 + 0xc8u);
                c0lt = (s32)r3 < 2;
                f1 = (f64)(f32)((f64)rdf32(0x817fde10u) + (f64)rdf32(r4 + 0x60u));
                f2 = (f64)rdf32(0x817fde18u);
                f0 = (f64)rdf32(r4 + 0x68u);
                f3 = (f64)(f32)((f64)rdf32(0x817fde14u) + (f64)rdf32(r4 + 0x64u));
                wrf32d(0x817fde10u, f1);
                f0 = (f64)(f32)(f2 + f0);
                wrf32d(0x817fde14u, f3);
                wrf32d(0x817fde18u, f0);
                do {
                    if (r3 == 2u) {
                        a.f[0] = f0;
                        a.r[0] = 0x817fde08u;
                        a.r[1] = 0x817fde0cu;
                        (void)tc_call(0x80320a58u, &a);
                        f1 = (f64)rdf32(0x817fde08u);
                        f0 = (f64)rdf32(0x817fde0cu);
                        wrf32d(0x817fde80u, f31);
                        wrf32d(0x817fde78u, f0);
                        wrf32d(0x817fde7cu, -f1);
                        wrf32d(0x817fde84u, f31);
                        wrf32d(0x817fde88u, f1);
                        wrf32d(0x817fde8cu, f0);
                        wrf32d(0x817fde90u, f31);
                        wrf32d(0x817fde94u, f31);
                        wrf32d(0x817fde98u, f31);
                        wrf32d(0x817fde9cu, f31);
                        wrf32d(0x817fdea0u, f30);
                        wrf32d(0x817fdea4u, f31);
                    } else {
                        if (c0lt) {
                            c0lt = (s32)r3 < 0;
                            if (r3 == 0u) {
                                a.f[0] = f1;
                                a.r[0] = 0x817fddf8u;
                                a.r[1] = 0x817fddfcu;
                                (void)tc_call(0x80320a58u, &a);
                                f1 = (f64)rdf32(0x817fddf8u);
                                f0 = (f64)rdf32(0x817fddfcu);
                                wrf32d(0x817fde78u, f30);
                                wrf32d(0x817fde7cu, f31);
                                wrf32d(0x817fde80u, f31);
                                wrf32d(0x817fde84u, f31);
                                wrf32d(0x817fde88u, f31);
                                wrf32d(0x817fde8cu, f0);
                                wrf32d(0x817fde90u, -f1);
                                wrf32d(0x817fde94u, f31);
                                wrf32d(0x817fde98u, f31);
                                wrf32d(0x817fde9cu, f1);
                                wrf32d(0x817fdea0u, f0);
                                wrf32d(0x817fdea4u, f31);
                                break;
                            }
                            if (!c0lt) {
                                a.f[0] = f3;
                                a.r[0] = 0x817fde00u;
                                a.r[1] = 0x817fde04u;
                                (void)tc_call(0x80320a58u, &a);
                                f0 = (f64)rdf32(0x817fde00u);
                                f1 = (f64)rdf32(0x817fde04u);
                                wrf32d(0x817fde7cu, f31);
                                wrf32d(0x817fde78u, f1);
                                wrf32d(0x817fde80u, f0);
                                wrf32d(0x817fde84u, f31);
                                wrf32d(0x817fde88u, f31);
                                wrf32d(0x817fde8cu, f30);
                                wrf32d(0x817fde90u, f31);
                                wrf32d(0x817fde94u, f31);
                                wrf32d(0x817fde98u, -f0);
                                wrf32d(0x817fde9cu, f31);
                                wrf32d(0x817fdea0u, f1);
                                wrf32d(0x817fdea4u, f31);
                                break;
                            }
                        }
                        a.f[0] = (f64)rdf32(0x817fde10u);
                        a.r[0] = 0x817fddf8u;
                        a.r[1] = 0x817fddfcu;
                        (void)tc_call(0x80320a58u, &a);
                        a.f[0] = (f64)rdf32(0x817fde14u);
                        a.r[0] = 0x817fde00u;
                        a.r[1] = 0x817fde04u;
                        (void)tc_call(0x80320a58u, &a);
                        a.f[0] = (f64)rdf32(0x817fde18u);
                        a.r[0] = 0x817fde08u;
                        a.r[1] = 0x817fde0cu;
                        (void)tc_call(0x80320a58u, &a);
                        f0 = (f64)rdf32(0x817fde00u);
                        f7 = (f64)rdf32(0x817fddfcu);
                        f8 = (f64)rdf32(0x817fddf8u);
                        f4 = (f64)rdf32(0x817fde0cu);
                        f1 = (f64)(f32)(f7 * f0);
                        f5 = (f64)rdf32(0x817fde08u);
                        f12 = (f64)(f32)(f8 * f0);
                        f3 = (f64)(f32)(f1 * f5);
                        f6 = (f64)rdf32(0x817fde04u);
                        wrf32d(0x817fde98u, -f0);
                        f1 = (f64)(f32)(f1 * f4);
                        f11 = (f64)(f32)(f3 - (f64)(f32)(f8 * f4));
                        wrf32d(0x817fde84u, f31);
                        f10 = (f64)(f32)(f1 + (f64)(f32)(f8 * f5));
                        wrf32d(0x817fde94u, f31);
                        wrf32d(0x817fde88u, (f64)(f32)(f6 * f5));
                        wrf32d(0x817fde78u, (f64)(f32)(f6 * f4));
                        f8 = (f64)(f32)(f6 * f8);
                        wrf32d(0x817fde80u, f10);
                        wrf32d(0x817fde9cu, f8);
                        wrf32d(0x817fde90u, f11);
                        wrf32d(0x817fde8cu, (f64)(f32)((f64)(f32)(f12 * f5) + (f64)(f32)(f7 * f4)));
                        wrf32d(0x817fde7cu, (f64)(f32)((f64)(f32)(f12 * f4) - (f64)(f32)(f7 * f5)));
                        wrf32d(0x817fdea0u, (f64)(f32)(f7 * f6));
                        wrf32d(0x817fdea4u, f31);
                    }
                } while (0);
                f11 = (f64)rdf32(0x817fde88u);
                f1 = (f64)(f32)(f26 * f24);
                f6 = (f64)rdf32(0x817fde78u);
                f0 = (f64)(f32)(f25 * f23);
                f21 = (f64)rdf32(0x817fde98u);
                f2 = -f6;
                f9 = (f64)rdf32(0x817fde8cu);
                f6 = (f64)(f32)(f6 * f26);
                f4 = (f64)rdf32(0x817fde7cu);
                f13 = (f64)rdf32(0x817fde9cu);
                f12 = (f64)rdf32(0x817fdea0u);
                f7 = (f64)rdf32(0x817fde90u);
                f5 = (f64)(f32)(f2 * f1);
                f2 = (f64)rdf32(0x817fde80u);
                wrf32d(0x817fde48u, f6);
                wrf32d(0x817fde70u, (f64)(f32)(f12 * f26));
                f8 = (f64)(f32)(f23 + (f64)(f32)((f64)(f32)(-f11 * f1) - (f64)(f32)(f9 * f0)));
                f7 = (f64)(f32)(f7 * f26);
                wrf32d(0x817fde6cu, (f64)(f32)(f13 * f25));
                f9 = (f64)(f32)(f9 * f25);
                wrf32d(0x817fde68u, (f64)(f32)(f21 * f26));
                f3 = (f64)(f32)(f24 + (f64)(f32)(f5 - (f64)(f32)(f4 * f0)));
                f2 = (f64)(f32)(f2 * f26);
                wrf32d(0x817fde5cu, f9);
                f4 = (f64)(f32)(f4 * f25);
                f1 = (f64)(f32)(-f21 * f1);
                wrf32d(0x817fde58u, (f64)(f32)(f11 * f26));
                f0 = (f64)(f32)(f13 * f0);
                wrf32d(0x817fde50u, f2);
                f1 = (f64)(f32)(f1 - f0);
                wrf32d(0x817fde4cu, f4);
                wrf32d(0x817fde54u, f3);
                wrf32d(0x817fde60u, f7);
                wrf32d(0x817fde64u, f8);
                wrf32d(0x817fde74u, f1);
                wrf32d(0x817fde54u, (f64)(f32)(f3 + (f64)rdf32(r28 + 0xacu)));
                wrf32d(0x817fde64u, (f64)(f32)(f8 + (f64)rdf32(r28 + 0xb0u)));
                wrf32d(0x817fde74u, (f64)(f32)(f1 + (f64)rdf32(r28 + 0xb4u)));
                r5 = (u32)rd8(param_1 + 0xc0u);
                r5 = (((0u - r5) | r5) >> 0x1fu) & 1u;
                a.r[0] = 0x817fde48u;
                a.r[1] = 0x8034c388u;
                a.r[2] = r5;
                f1 = tc_callf(0x8032c228u, &a);
                f2 = 0.0;
                f3 = 0.0;
                if ((u32)rd8(r31 + 0xadu) == 1u) {
                    r5 = (u32)rd8(param_1 + 0xc0u);
                    r5 = (((0u - r5) | r5) >> 0x1fu) & 1u;
                    a.r[0] = 0x817fde48u;
                    a.r[1] = 0x8034c3b8u;
                    a.r[2] = r5;
                    f1 = tc_callf(0x8032c228u, &a);
                    f2 = 0.0;
                    f3 = 0.0;
                }
            }
        }
        a.r[0] = (u32)param_3;
        a.r[1] = r28;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        r3 = tc_call(r30, &a);
        r28 = r3;
    }
    return;
}
