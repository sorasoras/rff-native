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

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

static f64 px_pq(f64 x)
{
    u64 b = px_f2b(x);
    if ((b & 0x7ff0000000000000ull) == 0x7ff0000000000000ull && (b & 0x000fffffffffffffull) != 0)
        return px_b2f(b | 0x0008000000000000ull);
    return x;
}

static f64 px_padd(f64 a, f64 b)
{
    f64 r = a + b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

static f64 px_psub(f64 a, f64 b)
{
    f64 r = a - b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_80216658(u32 param_1, u32 param_2, f32 param_3, f32 param_4, u32 param_5)
{
    u32 c0eq = 0, c1lt = 0, ctr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    u32 r15 = 0, r17 = 0, r18 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r5 = ppc_single_bits((f64)param_3);
    r6 = ppc_single_bits((f64)param_4);
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_lo(0.0));
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
    wr32(0x817fdf58u, r5);
    r29 = (param_2 << 2u) & 0xfffffffcu;
    r8 = rd32(param_1 + 0x3f8u);
    wr32(0x817fdf78u, 0x43300000u);
    r27 = rd32(r8 + r29);
    r18 = r6;
    wr32(0x817fdf80u, 0x43300000u);
    if (r5 != r6) {
        if (r5 == 0xffffffffu || r6 == 0xffffffffu) {
            wr32(param_5, 0u);
        } else if (param_2 != 0xffffffffu) {
            a.r[0] = 0x817fdf60u;
            r3 = tc_call(0x80216c48u, &a);
            f1 = tc_lastf();
            a.r[0] = param_1;
            a.r[1] = param_2;
            r3 = tc_call(0x80215954u, &a);
            f1 = tc_lastf();
            r4 = (r3 << 2u) & 0xfffffffcu;
            r15 = r3;
            r26 = (0u - r4) & 0xfffffff8u;
            wr32(r26 - 0x7e8020b0u, rd32(0x817fdf50u));
            r1 = r26 - 0x7e8020b0u;
            r25 = (0u - r4) & 0xfffffff8u;
            r26 = r1 + 8u;
            wr32(r1 + r25, rd32(r1));
            r1 = r1 + r25;
            r24 = (0u - r4) & 0xfffffff8u;
            r25 = r1 + 8u;
            wr32(r1 + r24, rd32(r1));
            r1 = r1 + r24;
            r23 = (0u - r4) & 0xfffffff8u;
            r24 = r1 + 8u;
            wr32(r1 + r23, rd32(r1));
            r1 = r1 + r23;
            c1lt = (s32)r3 < 0;
            r4 = 0u;
            r23 = r1 + 8u;
            wr32(0x80571410u, r23);
            if ((s32)r3 > 0) {
                r6 = r3 - 8u;
                if ((s32)r3 > 8) {
                    r7 = 0u;
                    if (!c1lt && (s32)r3 <= 2147483646) {
                        r7 = 1u;
                    }
                    if (r7 != 0u) {
                        r7 = r26;
                        r8 = r25;
                        r9 = r24;
                        f0 = (f64)rdf32(0x805769c0u);
                        ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r6 > 0) {
                            do {
                                wr32(r7, 0u);
                                r4 = r4 + 8u;
                                wr32(r8, 0u);
                                wrf32d(r9, f0);
                                wr32(r7 + 4u, 0u);
                                wr32(r8 + 4u, 0u);
                                wrf32d(r9 + 4u, f0);
                                wr32(r7 + 8u, 0u);
                                wr32(r8 + 8u, 0u);
                                wrf32d(r9 + 8u, f0);
                                wr32(r7 + 0xcu, 0u);
                                wr32(r8 + 0xcu, 0u);
                                wrf32d(r9 + 0xcu, f0);
                                wr32(r7 + 0x10u, 0u);
                                wr32(r8 + 0x10u, 0u);
                                wrf32d(r9 + 0x10u, f0);
                                wr32(r7 + 0x14u, 0u);
                                wr32(r8 + 0x14u, 0u);
                                wrf32d(r9 + 0x14u, f0);
                                wr32(r7 + 0x18u, 0u);
                                wr32(r8 + 0x18u, 0u);
                                wrf32d(r9 + 0x18u, f0);
                                wr32(r7 + 0x1cu, 0u);
                                r7 = r7 + 0x20u;
                                wr32(r8 + 0x1cu, 0u);
                                r8 = r8 + 0x20u;
                                wrf32d(r9 + 0x1cu, f0);
                                r9 = r9 + 0x20u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r5 = (r4 << 2u) & 0xfffffffcu;
                r6 = r26 + r5;
                f0 = (f64)rdf32(0x805769c0u);
                r7 = r25 + r5;
                r8 = r24 + r5;
                ctr = r3 - r4;
                if ((s32)r4 < (s32)r3) {
                    do {
                        wr32(r6, 0u);
                        r6 = r6 + 4u;
                        wr32(r7, 0u);
                        r7 = r7 + 4u;
                        wrf32d(r8, f0);
                        r8 = r8 + 4u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            a.r[0] = 0x817fdf60u;
            a.r[1] = 0x817fdf58u;
            r3 = tc_call(0x80216e98u, &a);
            f1 = tc_lastf();
            f31 = rdf64(0x805769c8u);
            for (;;) {
                a.r[0] = 0x817fdf60u;
                r3 = tc_call(0x8021852cu, &a);
                f1 = tc_lastf();
                if ((s32)r3 <= 0) {
                    a.r[0] = 0x817fdf60u;
                    a.r[1] = 0xffffffffu;
                    r3 = tc_call(0x80216dd8u, &a);
                    f1 = tc_lastf();
                    return;
                }
                a.r[0] = 0x817fdf60u;
                r3 = tc_call(0x802172a8u, &a);
                f1 = tc_lastf();
                r28 = (r3 << 2u) & 0xfffffffcu;
                r22 = r3;
                wr32(r25 + r28, rd32(r26 + r28));
                if (r3 == r18) break;
                r21 = rd32(r27 + r28);
                while (r21 != 0u) {
                    r20 = rd32(r21);
                    a.r[0] = r20;
                    a.r[1] = r22;
                    r3 = tc_call(0x80216c28u, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        a.r[0] = r20;
                        a.r[1] = r22;
                        r3 = tc_call(0x80216c0cu, &a);
                        f1 = tc_lastf();
                        wr32(0x817fdf5cu, r3);
                        a.r[0] = param_1;
                        a.r[1] = param_2;
                        a.r[2] = r18;
                        a.r[3] = r3;
                        f1 = tc_callf(0x80215c58u, &a);
                        r3 = tc_lastr();
                        f30 = f1;
                        r3 = tc_call(0x80216c40u, &a);
                        f1 = tc_lastf();
                        r3 = r3 ^ 0x80000000u;
                        r0 = rd32(0x817fdf5cu);
                        wr32(0x817fdf7cu, r3);
                        r6 = (r0 << 2u) & 0xfffffffcu;
                        f0 = (f64)rdf32(r28 + r24);
                        f1 = (f64)(f32)px_psub(rdf64(0x817fdf78u), f31);
                        c0eq = rd32(r26 + r6) == 0u;
                        f0 = (f64)(f32)px_padd(f0, f1);
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        wrf64(0x817fdf88u, f0);
                        r0 = rd32(0x817fdf8cu);
                        if (!c0eq) {
                            r4 = r0 ^ 0x80000000u;
                            f0 = (f64)rdf32(r24 + r6);
                            wr32(0x817fdf84u, r4);
                            if ((f64)(f32)px_psub(rdf64(0x817fdf80u), f31) < f0 && rd32(r25 + r6) == 0u) {
                                wr32(0x817fdf7cu, r4);
                                f0 = rdf64(0x817fdf78u);
                                wr32(0x817fdf84u, r4);
                                f1 = (f64)(f32)px_padd((f64)(f32)px_psub(f0, f31), f30);
                                f0 = (f64)(f32)px_psub(rdf64(0x817fdf80u), f31);
                                wrf32d(r23 + r6, f1);
                                wrf32d(r24 + ((rd32(0x817fdf5cu) << 2u) & 0xfffffffcu), f0);
                                a.r[0] = 0x817fdf60u;
                                a.r[1] = rd32(0x817fdf5cu);
                                r3 = tc_call(0x802180acu, &a);
                                f1 = tc_lastf();
                                if (r3 != 0xffffffffu) {
                                    a.r[0] = 0x817fdf60u;
                                    a.r[1] = r3;
                                    r3 = tc_call(0x802180f0u, &a);
                                    f1 = tc_lastf();
                                }
                                a.r[0] = 0x817fdf60u;
                                a.r[1] = 0x817fdf5cu;
                                a.r[2] = 0x80215cb8u;
                                r3 = tc_call(0x802176dcu, &a);
                                f1 = tc_lastf();
                                wr32(r26 + ((rd32(0x817fdf5cu) << 2u) & 0xfffffffcu), r20);
                            }
                        } else {
                            r0 = r0 ^ 0x80000000u;
                            wr32(0x817fdf84u, r0);
                            f0 = rdf64(0x817fdf80u);
                            wr32(0x817fdf7cu, r0);
                            f1 = (f64)(f32)px_padd((f64)(f32)px_psub(f0, f31), f30);
                            f0 = (f64)(f32)px_psub(rdf64(0x817fdf78u), f31);
                            wrf32d(r23 + r6, f1);
                            wrf32d(r24 + ((rd32(0x817fdf5cu) << 2u) & 0xfffffffcu), f0);
                            a.r[0] = 0x817fdf60u;
                            a.r[1] = 0x817fdf5cu;
                            a.r[2] = 0x80215cb8u;
                            r3 = tc_call(0x802176dcu, &a);
                            f1 = tc_lastf();
                            wr32(r26 + ((rd32(0x817fdf5cu) << 2u) & 0xfffffffcu), r20);
                        }
                    }
                    r21 = rd32(r21 + 4u);
                }
            }
            r15 = 0u - (((r15 + 1u) << 2u) & 0xfffffffcu);
            r15 = r15 & 0xfffffff8u;
            wr32(r1 + r15, rd32(r1));
            r1 = r1 + r15;
            r20 = 1u;
            r15 = r1 + 8u;
            wr32(r1 + 8u, r18);
            r17 = r15 + 4u;
            while (r18 != rd32(0x817fdf58u)) {
                r3 = rd32(r25 + ((r18 << 2u) & 0xfffffffcu));
                if (r3 == 0u) break;
                a.r[0] = r3;
                a.r[1] = r18;
                r3 = tc_call(0x80216c0cu, &a);
                f1 = tc_lastf();
                wr32(r17, r3);
                r18 = r3;
                r17 = r17 + 4u;
                r20 = r20 + 1u;
            }
            r8 = (r20 << 2u) & 0xfffffffcu;
            wr32(r15 + r8, 0xffffffffu);
            r9 = r20;
            r20 = r20 - 1u;
            r7 = 0u;
            r4 = rd32(param_1 + 0x3fcu);
            r4 = rd32(r4 + r29);
            r3 = r20 + 1u;
            wr32(r4 + r8, 0xffffffffu);
            r6 = r15 + ((r20 << 2u) & 0xfffffffcu);
            do {
                if ((s32)r20 >= 0) {
                    r0 = (r3 >> 3u) & 0x1fffffffu;
                    ctr = r0;
                    if (r0 != 0u) {
                        do {
                            r0 = rd32(param_1 + 0x3fcu);
                            r5 = rd32(r6);
                            wr32(rd32(r29 + r0) + r7, r5);
                            r7 = r7 + 4u;
                            r0 = rd32(param_1 + 0x3fcu);
                            r5 = rd32(r6 - 4u);
                            wr32(rd32(r29 + r0) + r7, r5);
                            r7 = r7 + 4u;
                            r0 = rd32(param_1 + 0x3fcu);
                            r5 = rd32(r6 - 8u);
                            wr32(rd32(r29 + r0) + r7, r5);
                            r7 = r7 + 4u;
                            r0 = rd32(param_1 + 0x3fcu);
                            r5 = rd32(r6 - 0xcu);
                            wr32(rd32(r29 + r0) + r7, r5);
                            r7 = r7 + 4u;
                            r0 = rd32(param_1 + 0x3fcu);
                            r5 = rd32(r6 - 0x10u);
                            wr32(rd32(r29 + r0) + r7, r5);
                            r7 = r7 + 4u;
                            r0 = rd32(param_1 + 0x3fcu);
                            r5 = rd32(r6 - 0x14u);
                            wr32(rd32(r29 + r0) + r7, r5);
                            r7 = r7 + 4u;
                            r0 = rd32(param_1 + 0x3fcu);
                            r5 = rd32(r6 - 0x18u);
                            wr32(rd32(r29 + r0) + r7, r5);
                            r7 = r7 + 4u;
                            r0 = rd32(param_1 + 0x3fcu);
                            r5 = rd32(r6 - 0x1cu);
                            r6 = r6 - 0x20u;
                            wr32(rd32(r29 + r0) + r7, r5);
                            r7 = r7 + 4u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                        r3 = r3 & 7u;
                        if (r3 == 0u) break;
                    }
                    ctr = r3;
                    do {
                        r0 = rd32(param_1 + 0x3fcu);
                        r5 = rd32(r6);
                        r6 = r6 - 4u;
                        wr32(rd32(r29 + r0) + r7, r5);
                        r7 = r7 + 4u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            } while (0);
            if (param_5 != 0u) {
                wr32(param_5, r9);
            }
            a.r[0] = 0x817fdf60u;
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x80216dd8u, &a);
            f1 = tc_lastf();
        }
    } else {
        wr32(param_5, 0u);
    }
    return;
}
