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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8032cc08(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r22 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t6 = 0, t9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t13 = 0.0, t15 = 0.0, t18 = 0.0;
    f64 t25 = 0.0, t26 = 0.0, t30 = 0.0, t34 = 0.0, t40 = 0.0, t42 = 0.0, t52 = 0.0, t54 = 0.0, t55 = 0.0, t57 = 0.0, t60 = 0.0, t66 = 0.0;
    f64 t68 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
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
    a.r[0] = param_1;
    a.r[1] = (u32)param_3;
    a.r[2] = rd32((u32)param_3 + 0x24u) + 0x9cu;
    a.r[3] = param_2;
    (void)tc_call(0x80325f9cu, &a);
    a.r[0] = 0u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    (void)tc_call(0x8024f870u, &a);
    a.r[0] = 9u;
    a.r[1] = 1u;
    (void)tc_call(0x8024f27cu, &a);
    if ((u32)rd8(param_1 + 0xc0u) != 0u) {
        a.r[0] = 0xdu;
        a.r[1] = 1u;
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
    a.r[3] = 4u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80254548u, &a);
    r31 = rd32((u32)param_3 + 0x24u) + 0x9cu;
    a.r[0] = (u32)param_3;
    a.r[1] = 0x817fdf68u;
    (void)tc_call(0x8031efa8u, &a);
    r12 = rd32(param_2 + 4u);
    c0eq = (f64)rdf32(0x80577c90u) == (f64)rdf32(param_2 + 0x88u);
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
    wr32(0x817fdf38u, rd32(param_2));
    wr32(0x817fdf3cu, r12);
    wr32(0x817fdf40u, r11);
    wr32(0x817fdf44u, r10);
    wr32(0x817fdf48u, r9);
    wr32(0x817fdf4cu, r8);
    wr32(0x817fdf50u, r7);
    wr32(0x817fdf54u, r6);
    wr32(0x817fdf58u, r5);
    wr32(0x817fdf5cu, r4);
    wr32(0x817fdf60u, r3);
    wr32(0x817fdf64u, r0);
    if (!c0eq) {
        a.r[0] = 0x817fdf1cu;
        (void)tc_call(0x80254460u, &a);
        f0 = (f64)rdf32(0x817fdf1cu);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdf98u, f0);
        r0 = rd32(0x817fdf9cu);
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            wrf32d(0x817fdf64u, (f64)(f32)((f64)rdf32(0x817fdf64u) + (f64)rdf32(param_2 + 0x88u)));
        } else if (c0lt && (s32)r0 >= 0) {
            a.r[0] = param_2;
            a.r[1] = param_2 + 0x8cu;
            a.r[2] = 0x817fdef8u;
            (void)tc_call(0x8023411cu, &a);
            a.r[0] = 0x817fdef8u;
            a.r[1] = 0x817fdef8u;
            r3 = tc_call(0x80320984u, &a);
            if (r3 == 0u) {
                wrf32d(0x817fdf64u, (f64)(f32)((f64)rdf32(0x817fdf64u) + (f64)rdf32(param_2 + 0x88u)));
            } else {
                f1 = (f64)rdf32(0x817fdf00u);
                f0 = (f64)rdf32(0x80577c90u);
                if (!((f1 > f0) || (f1 == f0))) {
                    f3 = (f64)rdf32(param_2 + 0x88u);
                    f1 = (f64)(f32)(f1 * f3);
                    f5 = (f64)(f32)((f64)rdf32(0x817fdef8u) * f3);
                    f3 = (f64)(f32)((f64)rdf32(0x817fdefcu) * f3);
                    f2 = (f64)(f32)((f64)rdf32(0x817fdf54u) - f3);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdf64u) - f1);
                    wrf32d(0x817fdf44u, (f64)(f32)((f64)rdf32(0x817fdf44u) - f5));
                    wrf32d(0x817fdf54u, f2);
                    wrf32d(0x817fdf64u, f0);
                } else {
                    f3 = (f64)rdf32(param_2 + 0x88u);
                    f1 = (f64)(f32)(f1 * f3);
                    f5 = (f64)(f32)((f64)rdf32(0x817fdef8u) * f3);
                    f3 = (f64)(f32)((f64)rdf32(0x817fdefcu) * f3);
                    f2 = (f64)(f32)((f64)rdf32(0x817fdf54u) + f3);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdf64u) + f1);
                    wrf32d(0x817fdf44u, (f64)(f32)((f64)rdf32(0x817fdf44u) + f5));
                    wrf32d(0x817fdf54u, f2);
                    wrf32d(0x817fdf64u, f0);
                }
            }
        }
    }
    a.r[0] = 0x817fdf38u;
    a.r[1] = 0x817fdf68u;
    a.r[2] = 0x817fdf38u;
    (void)tc_call(0x802337a0u, &a);
    a.r[0] = 0x817fdf38u;
    a.r[1] = 0u;
    f1 = tc_callf(0x802544a0u, &a);
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
    r3 = tc_call(rd32(rd32(param_1) + 0x10u), &a);
    f1 = tc_lastf();
    r22 = r3;
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
    r3 = tc_call(rd32(rd32(param_1) + 0x14u), &a);
    f1 = tc_lastf();
    r30 = r3;
    r29 = 0u;
    r28 = 1u;
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
    r3 = tc_call(r22, &a);
    f2 = 0.0;
    f3 = 0.0;
    f4 = 0.0;
    f30 = (f64)rdf32(0x80577c98u);
    r27 = r3;
    f29 = (f64)rdf32(0x80577c94u);
    while (r3 != 0u) {
        f1 = (f64)rdf32(r3 + 0x30u);
        f0 = (f64)rdf32(r3 + 0x38u);
        r3 = rd32(r3 + 0xc8u);
        f1 = (f64)(f32)(f1 * f0);
        f0 = (f64)(f32)(f1 * (f64)rdf32(r3 + 0x58u));
        wrf32d(0x817fdee8u, f0);
        if (!(f0 < f29)) {
            r4 = rd32(r27 + 0xc8u);
            r0 = (u32)rd16(rd32(r4 + 0x24u) + 0x9cu) & 0x6000u;
            c0lt = (s32)r0 < 16384;
            if (r0 == 0x4000u) {
                f1 = (f64)(f32)((f64)rdf32(r27 + 0x34u) * (f64)rdf32(r27 + 0x38u));
            } else if (!c0lt) {
                if (r0 == 0x6000u) {
                    f1 = (f64)(f32)((f64)rdf32(r27 + 0x30u) * (f64)rdf32(r27 + 0x38u));
                } else {
                    f1 = (f64)(f32)((f64)rdf32(r27 + 0x34u) * (f64)rdf32(r27 + 0x3cu));
                }
            } else if (r0 == 0x2000u) {
                f1 = (f64)(f32)((f64)rdf32(r27 + 0x30u) * (f64)rdf32(r27 + 0x3cu));
            } else {
                f1 = (f64)(f32)((f64)rdf32(r27 + 0x34u) * (f64)rdf32(r27 + 0x3cu));
            }
            f31 = (f64)(f32)(f1 * (f64)rdf32(r4 + 0x5cu));
            if (!(f31 < f29)) {
                t6 = r27 + 0xacu;
                t9 = r27 + 0xb8u;
                r4 = rd32(r27 + 0xacu);
                t13 = (f64)(f32)((f64)rdf32(t6 + 4u) - (f64)rdf32(t9 + 4u));
                t15 = (f64)rdf32(r27 + 0xb4u);
                t18 = (f64)rdf32(r27 + 0xc0u);
                r3 = rd32(r27 + 0xb0u);
                wrf32d(0x817fdeecu, (f64)(f32)((f64)rdf32(t6) - (f64)rdf32(t9)));
                wrf32d(0x817fdef0u, t13);
                r0 = rd32(r27 + 0xb4u);
                f1 = (f64)rdf32(0x817fdef0u);
                wrf32d(0x817fdef4u, (f64)(f32)(t15 - t18));
                f2 = (f64)rdf32(0x817fdeecu);
                f0 = (f64)rdf32(0x817fdef4u);
                wrf32d(0x817fdf08u, f1);
                wrf32d(0x817fdf0cu, f0);
                t25 = (f64)rdf32(0x817fdf08u);
                t26 = (f64)rdf32(0x817fdf0cu);
                wrf32d(0x817fdf04u, f2);
                t30 = (f64)rdf32(0x817fdf04u);
                wr32(0x817fdf10u, r4);
                wr32(0x817fdf14u, r3);
                t34 = (f64)(f32)(ppc_fmadds(t30, t30, (f64)(f32)(t25 * t25)) + (f64)(f32)(t26 * t26));
                f1 = t34;
                wr32(0x817fdf18u, r0);
                if (!(t34 < f29)) {
                    a.f[0] = t34;
                    f1 = tc_callf(0x802eff54u, &a);
                    f3 = 0.0;
                    f4 = 0.0;
                    r0 = 1u;
                    t40 = (f64)(f32)((f64)rdf32(0x817fdf08u) * f1);
                    t42 = (f64)rdf32(0x817fdf0cu);
                    f2 = t42;
                    wrf32d(0x817fdf04u, (f64)(f32)((f64)rdf32(0x817fdf04u) * f1));
                    wrf32d(0x817fdf08u, t40);
                    wrf32d(0x817fdf0cu, (f64)(f32)(t42 * f1));
                } else {
                    r0 = 0u;
                }
                if (r0 != 0u) {
                    f1 = (f64)rdf32(0x817fdee8u);
                    t52 = (f64)(f32)((f64)rdf32(0x817fdf08u) * f31);
                    t54 = (f64)rdf32(0x817fdf10u);
                    t55 = (f64)rdf32(0x817fdf14u);
                    t57 = (f64)rdf32(0x817fdf0cu);
                    f2 = t57;
                    c0lt = f1 < (f64)rdf32(0x80570fa8u);
                    wrf32d(0x817fdf04u, (f64)(f32)((f64)rdf32(0x817fdf04u) * f31));
                    wrf32d(0x817fdf08u, t52);
                    t60 = (f64)(f32)(t57 * f31);
                    f3 = t60;
                    t66 = (f64)(f32)(t55 - (f64)rdf32(0x817fdf08u));
                    t68 = (f64)rdf32(0x817fdf18u);
                    f4 = t68;
                    wrf32d(0x817fdf04u, (f64)(f32)(t54 - (f64)rdf32(0x817fdf04u)));
                    wrf32d(0x817fdf08u, t66);
                    wrf32d(0x817fdf0cu, (f64)(f32)(t68 - t60));
                    if (!c0lt) {
                        r3 = 0x80570fa8u;
                    } else {
                        r3 = 0x817fdee8u;
                    }
                    f0 = (f64)(f32)(f30 * (f64)rdf32(r3));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    wrf64(0x817fdf98u, f0);
                    r4 = rd32(0x817fdf9cu);
                    r3 = r4 & 0xffu;
                    if (r3 != 0u) {
                        if ((r29 & 0xffu) == r3) {
                            a.r[0] = param_1;
                            a.r[1] = r27;
                            a.r[2] = r31;
                            a.r[3] = param_2;
                            a.r[4] = r28;
                            (void)tc_call(0x80326730u, &a);
                        } else {
                            r29 = r4;
                            a.r[0] = r3;
                            a.r[1] = 5u;
                            (void)tc_call(0x80250d98u, &a);
                            a.r[0] = param_1;
                            a.r[1] = r27;
                            a.r[2] = r31;
                            a.r[3] = param_2;
                            a.r[4] = r28;
                            (void)tc_call(0x80326730u, &a);
                        }
                        r6 = (u32)rd8(param_1 + 0xc0u);
                        r28 = 0u;
                        r22 = (((0u - r6) | r6) >> 0x1fu) & 1u;
                        a.r[0] = 0xa8u;
                        a.r[1] = 0u;
                        a.r[2] = 2u;
                        (void)tc_call(0x80250b74u, &a);
                        f2 = 0.0;
                        f3 = 0.0;
                        f4 = 0.0;
                        f1 = (f64)rdf32(0x817fdf14u);
                        wrf32d(0xcc008000u, (f64)rdf32(0x817fdf10u));
                        f0 = (f64)rdf32(0x817fdf18u);
                        wrf32d(0xcc008000u, f1);
                        wrf32d(0xcc008000u, f0);
                        if (r22 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577c90u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577c90u));
                        }
                        f1 = (f64)rdf32(0x817fdf08u);
                        wrf32d(0xcc008000u, (f64)rdf32(0x817fdf04u));
                        f0 = (f64)rdf32(0x817fdf0cu);
                        wrf32d(0xcc008000u, f1);
                        wrf32d(0xcc008000u, f0);
                        if (r22 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577c90u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577c9cu));
                        }
                    }
                }
            }
        }
        a.r[0] = (u32)param_3;
        a.r[1] = r27;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = 0.0;
        r3 = tc_call(r30, &a);
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        r27 = r3;
    }
    return;
}
