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

void fn_80260934(u32 param_1, u32 param_2, s32 param_3, u32 param_4, s32 param_5, s32 param_6)
{
    u32 c0eq = 0, c0lt = 0, c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    u32 r10 = 0, r11 = 0, r12 = 0, r14 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f23 = 0.0;
    f64 f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdc90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdfb8u, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf64(0x817fdfc8u, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf64(0x817fdfd8u, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf64(0x817fdfe8u, 0.0);
    wrf64(0x817fdff0u, 0.0);
    wrf64(0x817fdff8u, 0.0);
    wr32(0x817fdf70u, 0u);
    wr32(0x817fdf74u, 0u);
    wr32(0x817fdf78u, 0u);
    wr32(0x817fdf7cu, 0u);
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    r21 = rd32((((u32)param_5 << 2u) & 0xfffffffcu) - 0x7fcc26c8u);
    wr32(0x817fded0u, 0x43300000u);
    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)param_3 - 3u)) >> 2);
    wr32(0x817fded8u, 0x43300000u);
    r22 = param_4 - 1u;
    r10 = r0 + ((r0 >> 0x1fu) & 1u);
    wr32(0x817fdc98u, (u32)param_5);
    if ((s32)r10 < 0) {
        r10 = 0u;
    }
    r9 = r22 + r21;
    r7 = r10 - r22;
    f1 = rdf64(0x805771a0u);
    r19 = (u32)param_3 - ((r10 + 1u) * 0x18u);
    r4 = (u32)param_6 + ((r7 << 2u) & 0xfffffffcu);
    r5 = 0x817fde30u;
    ctr = r9 + 1u;
    if ((s32)r9 >= 0) {
        do {
            if ((s32)r7 >= 0) {
                wr32(0x817fded4u, rd32(r4) ^ 0x80000000u);
                f0 = rdf64(0x817fded0u) - f1;
            } else {
                f0 = rdf64(0x80577168u);
            }
            wrf64(r5, f0);
            r5 = r5 + 8u;
            r4 = r4 + 4u;
            r7 = r7 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    r5 = 0x817fdcf0u;
    r25 = r22 & 0x80000000u;
    r24 = (r22 + 1u) & 0x80000000u;
    r9 = 0u;
    while ((s32)r9 <= (s32)r21) {
        c1lt = (s32)r22 < 0;
        f6 = rdf64(0x80577168u);
        r7 = 0u;
        if (!c1lt) {
            r14 = r22 - 8u;
            if ((s32)(r22 + 1u) > 8) {
                r6 = 0u;
                r11 = 0u;
                if (!c1lt && (s32)r22 <= 2147483646) {
                    r11 = 1u;
                }
                if (r11 != 0u) {
                    r0 = 1u;
                    if (r25 == 0u && r24 != 0u) {
                        r0 = 0u;
                    }
                    if (r0 != 0u) {
                        r6 = 1u;
                    }
                }
                if (r6 != 0u) {
                    r6 = param_1;
                    r0 = r22 + r9;
                    ctr = ((r14 + 8u) >> 3u) & 0x1fffffffu;
                    if ((s32)r14 >= 0) {
                        do {
                            f6 = f6 + (rdf64(r6) * rdf64((((r0 - r7) << 3u) & 0xfffffff8u) - 0x7e8021d0u));
                            f6 = f6 + (rdf64(r6 + 8u) * rdf64((((r0 - (r7 + 1u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u));
                            f6 = f6 + (rdf64(r6 + 0x10u) * rdf64((((r0 - (r7 + 2u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u));
                            f6 = f6 + (rdf64(r6 + 0x18u) * rdf64((((r0 - (r7 + 3u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u));
                            f4 = rdf64(r6 + 0x28u) * rdf64((((r0 - (r7 + 5u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u);
                            f6 = f6 + (rdf64(r6 + 0x20u) * rdf64((((r0 - (r7 + 4u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u));
                            f1 = rdf64(r6 + 0x38u);
                            f2 = rdf64(r6 + 0x30u) * rdf64((((r0 - (r7 + 6u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u);
                            f0 = rdf64((((r0 - (r7 + 7u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u);
                            r7 = r7 + 8u;
                            f6 = f6 + f4;
                            r6 = r6 + 0x40u;
                            f0 = f1 * f0;
                            f6 = f6 + f2;
                            f6 = f6 + f0;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r11 = r22 + r9;
            r6 = param_1 + ((r7 << 3u) & 0xfffffff8u);
            ctr = r22 + 1u - r7;
            if ((s32)r7 <= (s32)r22) {
                do {
                    f1 = rdf64(r6);
                    r6 = r6 + 8u;
                    f0 = rdf64((((r11 - r7) << 3u) & 0xfffffff8u) - 0x7e8021d0u);
                    r7 = r7 + 1u;
                    f0 = f1 * f0;
                    f6 = f6 + f0;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        wrf64(r5, f6);
        r5 = r5 + 8u;
        r9 = r9 + 1u;
    }
    r28 = 0x18u - r19;
    f24 = rdf64(0x80577170u);
    r23 = r21;
    f25 = rdf64(0x805771a0u);
    r14 = (0u - r21) & 0x80000000u;
    f26 = rdf64(0x80577178u);
    r27 = (u32)param_6 + ((r10 << 2u) & 0xfffffffcu);
    wr32(0x817fdf60u, 0x17u - r19);
    r26 = ((r22 << 3u) & 0xfffffff8u) - 0x7e8021d0u;
    f27 = rdf64(0x80577188u);
    f28 = rdf64(0x80577180u);
    f29 = rdf64(0x80577190u);
    f30 = rdf64(0x80577198u);
    f31 = rdf64(0x80577168u);
    for (;;) {
        c1lt = (s32)r23 < 0;
        r3 = ((r23 << 3u) & 0xfffffff8u) - 0x7e802310u;
        f1 = rdf64(r3);
        r4 = r23;
        r5 = 0u;
        r6 = 0u;
        if ((s32)r23 > 0) {
            if ((s32)r23 > 8) {
                r7 = 0u;
                if (!c1lt && (s32)r23 >= -2147483647) {
                    r7 = 1u;
                }
                if (r7 != 0u) {
                    ctr = ((r23 - 1u) >> 3u) & 0x1fffffffu;
                    if ((s32)r23 > 8) {
                        do {
                            f0 = f24 * f1;
                            f4 = rdf64(r3 - 8u);
                            f5 = px_ctiw(f0, ppc_fctiwz(f0));
                            f3 = rdf64(r3 - 0x10u);
                            f2 = rdf64(r3 - 0x18u);
                            f0 = rdf64(r3 - 0x20u);
                            wrf64(0x817fdee0u, f5);
                            wr32(0x817fdedcu, rd32(0x817fdee4u) ^ 0x80000000u);
                            f5 = rdf64(0x817fded8u) - f25;
                            f6 = f5 + f4;
                            f5 = f26 * f5;
                            f4 = f24 * f6;
                            f5 = f1 - f5;
                            wrf64(0x817fdef0u, px_ctiw(f4, ppc_fctiwz(f4)));
                            r10 = rd32(0x817fdef4u);
                            wrf64(0x817fdee8u, px_ctiw(f5, ppc_fctiwz(f5)));
                            r10 = r10 ^ 0x80000000u;
                            wr32(0x817fded4u, r10);
                            f1 = rdf64(0x817fded0u);
                            wr32(r6 - 0x7e802360u, rd32(0x817fdeecu));
                            f1 = f1 - f25;
                            f4 = f1 + f3;
                            f3 = f26 * f1;
                            f1 = f24 * f4;
                            f3 = f6 - f3;
                            f1 = px_ctiw(f1, ppc_fctiwz(f1));
                            f3 = px_ctiw(f3, ppc_fctiwz(f3));
                            wrf64(0x817fdf00u, f1);
                            r10 = rd32(0x817fdf04u);
                            wrf64(0x817fdef8u, f3);
                            r10 = r10 ^ 0x80000000u;
                            wr32(0x817fdedcu, r10);
                            f1 = rdf64(0x817fded8u);
                            wr32((((r5 + 1u) << 2u) & 0xfffffffcu) - 0x7e802360u, rd32(0x817fdefcu));
                            f1 = f1 - f25;
                            f3 = f1 + f2;
                            f2 = f26 * f1;
                            f1 = f24 * f3;
                            f2 = f4 - f2;
                            f1 = px_ctiw(f1, ppc_fctiwz(f1));
                            f2 = px_ctiw(f2, ppc_fctiwz(f2));
                            wrf64(0x817fdf10u, f1);
                            r0 = rd32(0x817fdf14u);
                            wrf64(0x817fdf08u, f2);
                            r0 = r0 ^ 0x80000000u;
                            wr32(0x817fded4u, r0);
                            f1 = rdf64(0x817fded0u);
                            wr32((((r5 + 2u) << 2u) & 0xfffffffcu) - 0x7e802360u, rd32(0x817fdf0cu));
                            f1 = f1 - f25;
                            f2 = f1 + f0;
                            f1 = f26 * f1;
                            f0 = f24 * f2;
                            f1 = f3 - f1;
                            f0 = px_ctiw(f0, ppc_fctiwz(f0));
                            f1 = px_ctiw(f1, ppc_fctiwz(f1));
                            wrf64(0x817fdf20u, f0);
                            r0 = rd32(0x817fdf24u);
                            wrf64(0x817fdf18u, f1);
                            r0 = r0 ^ 0x80000000u;
                            wr32(0x817fdedcu, r0);
                            f0 = rdf64(0x817fded8u);
                            wr32((((r5 + 3u) << 2u) & 0xfffffffcu) - 0x7e802360u, rd32(0x817fdf1cu));
                            f1 = f0 - f25;
                            f0 = f2 - (f26 * f1);
                            f0 = px_ctiw(f0, ppc_fctiwz(f0));
                            wrf64(0x817fdf28u, f0);
                            wr32((((r5 + 4u) << 2u) & 0xfffffffcu) - 0x7e802360u, rd32(0x817fdf2cu));
                            f5 = f1 + rdf64(r3 - 0x28u);
                            r9 = ((r5 + 5u) << 2u) & 0xfffffffcu;
                            r8 = ((r5 + 6u) << 2u) & 0xfffffffcu;
                            f2 = rdf64(r3 - 0x30u);
                            f1 = rdf64(r3 - 0x38u);
                            r0 = ((r5 + 7u) << 2u) & 0xfffffffcu;
                            f3 = f24 * f5;
                            r3 = r3 - 0x40u;
                            f0 = rdf64(r3);
                            r5 = r5 + 8u;
                            r6 = r6 + 0x20u;
                            r4 = r4 - 8u;
                            f3 = px_ctiw(f3, ppc_fctiwz(f3));
                            wrf64(0x817fdf30u, f3);
                            wr32(0x817fded4u, rd32(0x817fdf34u) ^ 0x80000000u);
                            f3 = rdf64(0x817fded0u) - f25;
                            f4 = f3 + f2;
                            f3 = f26 * f3;
                            f2 = f24 * f4;
                            f3 = f5 - f3;
                            f2 = px_ctiw(f2, ppc_fctiwz(f2));
                            f3 = px_ctiw(f3, ppc_fctiwz(f3));
                            wrf64(0x817fdf40u, f2);
                            r7 = rd32(0x817fdf44u);
                            wrf64(0x817fdf38u, f3);
                            r7 = r7 ^ 0x80000000u;
                            wr32(0x817fdedcu, r7);
                            f2 = rdf64(0x817fded8u);
                            wr32(r9 - 0x7e802360u, rd32(0x817fdf3cu));
                            f2 = f2 - f25;
                            f3 = f2 + f1;
                            f2 = f26 * f2;
                            f1 = f24 * f3;
                            f2 = f4 - f2;
                            f1 = px_ctiw(f1, ppc_fctiwz(f1));
                            f2 = px_ctiw(f2, ppc_fctiwz(f2));
                            wrf64(0x817fdf50u, f1);
                            r7 = rd32(0x817fdf54u);
                            wrf64(0x817fdf48u, f2);
                            r7 = r7 ^ 0x80000000u;
                            wr32(0x817fded4u, r7);
                            f1 = rdf64(0x817fded0u);
                            wr32(r8 - 0x7e802360u, rd32(0x817fdf4cu));
                            f1 = f1 - f25;
                            f2 = f26 * f1;
                            f1 = f1 + f0;
                            f0 = f3 - f2;
                            f0 = px_ctiw(f0, ppc_fctiwz(f0));
                            wrf64(0x817fdf58u, f0);
                            wr32(r0 - 0x7e802360u, rd32(0x817fdf5cu));
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r5 = ((r5 << 2u) & 0xfffffffcu) - 0x7e802360u;
            r6 = ((r4 << 3u) & 0xfffffff8u) - 0x7e802310u;
            ctr = r4;
            if ((s32)r4 > 0) {
                do {
                    f2 = f24 * f1;
                    r6 = r6 - 8u;
                    f0 = rdf64(r6);
                    r4 = r4 - 1u;
                    f2 = px_ctiw(f2, ppc_fctiwz(f2));
                    wrf64(0x817fdf58u, f2);
                    wr32(0x817fdedcu, rd32(0x817fdf5cu) ^ 0x80000000u);
                    f3 = rdf64(0x817fded8u) - f25;
                    f2 = f1 - (f26 * f3);
                    f1 = f3 + f0;
                    wrf64(0x817fdf50u, px_ctiw(f2, ppc_fctiwz(f2)));
                    wr32(r5, rd32(0x817fdf54u));
                    r5 = r5 + 4u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        a.f[0] = f1;
        a.r[0] = r19;
        f1 = tc_callf(0x8025ec98u, &a);
        f23 = f1;
        f1 = f27 * f1;
        a.f[0] = f1;
        f1 = tc_callf(0x802627d8u, &a);
        c0eq = r19 == 0u;
        r18 = 0u;
        f23 = f23 - (f28 * f1);
        wrf64(0x817fdf58u, px_ctiw(f23, ppc_fctiwz(f23)));
        wr32(0x817fded4u, rd32(0x817fdf5cu) ^ 0x80000000u);
        f23 = f23 - (rdf64(0x817fded0u) - f25);
        if ((s32)r19 <= 0) {
            if (!c0eq) {
                if ((f23 > f29) || (f23 == f29)) {
                    r18 = 2u;
                }
            } else {
                r18 = (u32)((s32)rd32(((r23 << 2u) & 0xfffffffcu) - 0x7e802364u) >> 23);
            }
        } else {
            r4 = ((r23 << 2u) & 0xfffffffcu) - 0x7e802360u;
            r3 = rd32(r4 - 4u);
            r3 = r3 - (((r28 & 0x20u) != 0u) ? 0u : ((((r28 & 0x20u) != 0u) ? (u32)((s32)r3 >> 31) : (u32)((s32)r3 >> (s32)(r28 & 0x1fu))) << (r28 & 0x1fu)));
            r0 = rd32(0x817fdf60u);
            wr32(r4 - 4u, r3);
            r18 = ((r0 & 0x20u) != 0u) ? (u32)((s32)r3 >> 31) : (u32)((s32)r3 >> (s32)(r0 & 0x1fu));
        }
        if ((s32)r18 > 0) {
            r5 = 0x817fdca0u;
            r0 = 0u;
            ctr = r23;
            if ((s32)r23 > 0) {
                do {
                    r3 = rd32(r5);
                    if (r0 != 0u) {
                        r3 = 0xffffffu - r3;
                        wr32(r5, r3);
                    } else if (r3 != 0u) {
                        r3 = 0x1000000u - r3;
                        r0 = 1u;
                        wr32(r5, r3);
                    }
                    r5 = r5 + 4u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
            if ((s32)r19 > 0) {
                c0lt = (s32)r19 < 2;
                if (r19 == 2u) {
                    r4 = ((r23 << 2u) & 0xfffffffcu) - 0x7e802360u;
                    wr32(r4 - 4u, rd32(r4 - 4u) & 0x3fffffu);
                } else if (c0lt && (s32)r19 >= 1) {
                    r4 = ((r23 << 2u) & 0xfffffffcu) - 0x7e802360u;
                    wr32(r4 - 4u, rd32(r4 - 4u) & 0x7fffffu);
                }
            }
            if (r18 == 2u) {
                f23 = f30 - f23;
                if (r0 != 0u) {
                    a.f[0] = f30;
                    a.r[0] = r19;
                    f1 = tc_callf(0x8025ec98u, &a);
                    f23 = f23 - f1;
                }
            }
        }
        if (f31 != f23) break;
        r10 = r23 - 1u;
        r9 = 0u;
        c1lt = (s32)r10 < (s32)r21;
        if (!c1lt) {
            r7 = r10 - r21;
            r0 = r21 + 8u;
            r8 = r7 + 1u;
            if ((s32)r8 > 8) {
                r3 = 0u;
                r4 = 0u;
                r5 = 0u;
                r6 = 0u;
                r12 = 0u;
                if (!c1lt && (s32)r21 >= -2147483647) {
                    r12 = 1u;
                }
                if (r12 != 0u && (s32)(r23 - 1u) >= -2147483647) {
                    r6 = 1u;
                }
                if (r6 != 0u && (r21 - 0x80000000u) != 0u) {
                    r5 = 1u;
                }
                if (r5 != 0u) {
                    r6 = 1u;
                    r11 = (r23 - 1u) & 0x80000000u;
                    if (r11 == r14 && r11 != (r7 & 0x80000000u)) {
                        r6 = 0u;
                    }
                    if (r6 != 0u) {
                        r4 = 1u;
                    }
                }
                if (r4 != 0u) {
                    r5 = 1u;
                    if ((r7 & 0x80000000u) == 0u && (r8 & 0x80000000u) != 0u) {
                        r5 = 0u;
                    }
                    if (r5 != 0u) {
                        r3 = 1u;
                    }
                }
                if (r3 != 0u) {
                    r3 = ((r10 << 2u) & 0xfffffffcu) - 0x7e802360u;
                    ctr = ((r10 + 8u - r0) >> 3u) & 0x1fffffffu;
                    if ((s32)r10 >= (s32)r0) {
                        do {
                            r10 = r10 - 8u;
                            r9 = r9 | rd32(r3);
                            r9 = r9 | rd32(r3 - 4u);
                            r9 = r9 | rd32(r3 - 8u);
                            r9 = r9 | rd32(r3 - 0xcu);
                            r9 = r9 | rd32(r3 - 0x10u);
                            r9 = r9 | rd32(r3 - 0x14u);
                            r0 = rd32(r3 - 0x1cu);
                            r9 = r9 | rd32(r3 - 0x18u);
                            r3 = r3 - 0x20u;
                            r9 = r9 | r0;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r4 = ((r10 << 2u) & 0xfffffffcu) - 0x7e802360u;
            ctr = r10 + 1u - r21;
            if ((s32)r10 >= (s32)r21) {
                do {
                    r0 = rd32(r4);
                    r4 = r4 - 4u;
                    r10 = r10 - 1u;
                    r9 = r9 | r0;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        if (r9 != 0u) break;
        r18 = 1u;
        while (rd32((((r21 - r18) << 2u) & 0xfffffffcu) - 0x7e802360u) == 0u) {
            r18 = r18 + 1u;
        }
        r12 = r23 + 1u;
        r3 = (r12 << 3u) & 0xfffffff8u;
        r8 = r23 + r18;
        r5 = r27 + ((r12 << 2u) & 0xfffffffcu);
        r6 = r26 + r3;
        r7 = r3 - 0x7e802310u;
        while ((s32)r12 <= (s32)r8) {
            c1lt = (s32)r22 < 0;
            f0 = rdf64(0x80577168u);
            r11 = 0u;
            wr32(0x817fdedcu, rd32(r5) ^ 0x80000000u);
            wrf64(r6, rdf64(0x817fded8u) - f25);
            if (!c1lt) {
                r3 = r22 - 8u;
                if ((s32)(r22 + 1u) > 8) {
                    r4 = 0u;
                    r9 = 0u;
                    if (!c1lt && (s32)r22 <= 2147483646) {
                        r9 = 1u;
                    }
                    if (r9 != 0u) {
                        r0 = 1u;
                        if (r25 == 0u && r24 != 0u) {
                            r0 = 0u;
                        }
                        if (r0 != 0u) {
                            r4 = 1u;
                        }
                    }
                    if (r4 != 0u) {
                        r9 = param_1;
                        r10 = r22 + r12;
                        ctr = ((r3 + 8u) >> 3u) & 0x1fffffffu;
                        if ((s32)r3 >= 0) {
                            do {
                                f0 = f0 + (rdf64(r9) * rdf64((((r10 - r11) << 3u) & 0xfffffff8u) - 0x7e8021d0u));
                                f0 = f0 + (rdf64(r9 + 8u) * rdf64((((r10 - (r11 + 1u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u));
                                f0 = f0 + (rdf64(r9 + 0x10u) * rdf64((((r10 - (r11 + 2u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u));
                                f6 = rdf64(r9 + 0x20u) * rdf64((((r10 - (r11 + 4u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u);
                                r20 = ((r10 - (r11 + 7u)) << 3u) & 0xfffffff8u;
                                f0 = f0 + (rdf64(r9 + 0x18u) * rdf64((((r10 - (r11 + 3u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u));
                                f5 = rdf64(r9 + 0x28u) * rdf64((((r10 - (r11 + 5u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u);
                                f3 = rdf64((((r10 - (r11 + 6u)) << 3u) & 0xfffffff8u) - 0x7e8021d0u);
                                r11 = r11 + 8u;
                                f0 = f0 + f6;
                                f2 = rdf64(r9 + 0x38u);
                                f3 = rdf64(r9 + 0x30u) * f3;
                                r9 = r9 + 0x40u;
                                f0 = f0 + f5;
                                f0 = f0 + f3;
                                f0 = f0 + (f2 * rdf64(r20 - 0x7e8021d0u));
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r0 = r22 + r12;
                r3 = param_1 + ((r11 << 3u) & 0xfffffff8u);
                ctr = r22 + 1u - r11;
                if ((s32)r11 <= (s32)r22) {
                    do {
                        f2 = rdf64(r3);
                        r3 = r3 + 8u;
                        f1 = rdf64((((r0 - r11) << 3u) & 0xfffffff8u) - 0x7e8021d0u);
                        r11 = r11 + 1u;
                        f1 = f2 * f1;
                        f0 = f0 + f1;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            wrf64(r7, f0);
            r5 = r5 + 4u;
            r6 = r6 + 8u;
            r7 = r7 + 8u;
            r12 = r12 + 1u;
        }
        r23 = r23 + r18;
    }
    if (rdf64(0x80577168u) != f23) {
        a.f[0] = f23;
        a.r[0] = 0u - r19;
        f1 = tc_callf(0x8025ec98u, &a);
        f3 = rdf64(0x80577178u);
        if (!((f1 > f3) || (f1 == f3))) {
            wrf64(0x817fdf58u, px_ctiw(f1, ppc_fctiwz(f1)));
            wr32(((r23 << 2u) & 0xfffffffcu) - 0x7e802360u, rd32(0x817fdf5cu));
        } else {
            r5 = (r23 << 2u) & 0xfffffffcu;
            r23 = r23 + 1u;
            f2 = rdf64(0x805771a0u);
            f0 = rdf64(0x80577170u) * f1;
            r19 = r19 + 0x18u;
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdf58u, f0);
            wr32(0x817fded4u, rd32(0x817fdf5cu) ^ 0x80000000u);
            f0 = rdf64(0x817fded0u) - f2;
            f2 = f3 * f0;
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            f1 = f1 - f2;
            wrf64(0x817fdf48u, f0);
            r3 = rd32(0x817fdf4cu);
            wrf64(0x817fdf50u, px_ctiw(f1, ppc_fctiwz(f1)));
            wr32(r5 - 0x7e802360u, rd32(0x817fdf54u));
            wr32(((r23 << 2u) & 0xfffffffcu) - 0x7e802360u, r3);
        }
    } else {
        r23 = r23 - 1u;
        r19 = r19 - 0x18u;
        r3 = ((r23 << 2u) & 0xfffffffcu) - 0x7e802360u;
        while (rd32(r3) == 0u) {
            r3 = r3 - 4u;
            r23 = r23 - 1u;
            r19 = r19 - 0x18u;
        }
    }
    a.f[0] = rdf64(0x80577198u);
    a.r[0] = r19;
    f1 = tc_callf(0x8025ec98u, &a);
    c1lt = (s32)r23 < 0;
    r3 = r23;
    if (!c1lt) {
        if ((s32)(r23 + 1u) > 8) {
            r5 = 0u;
            r6 = 0u;
            if (!c1lt && (s32)r23 >= -2147483647) {
                r6 = 1u;
            }
            if (r6 != 0u) {
                r4 = 1u;
                if ((r23 & 0x80000000u) == 0u && ((r23 + 1u) & 0x80000000u) != 0u) {
                    r4 = 0u;
                }
                if (r4 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r6 = ((r23 << 2u) & 0xfffffffcu) - 0x7e802360u;
                r7 = ((r23 << 3u) & 0xfffffff8u) - 0x7e802310u;
                f10 = rdf64(0x805771a0u);
                f8 = rdf64(0x80577170u);
                ctr = (r23 >> 3u) & 0x1fffffffu;
                if ((s32)r23 >= 8) {
                    do {
                        r3 = r3 - 8u;
                        r0 = rd32(r6 - 4u);
                        r4 = rd32(r6 - 8u);
                        wr32(0x817fdedcu, rd32(r6) ^ 0x80000000u);
                        r5 = r0 ^ 0x80000000u;
                        r4 = r4 ^ 0x80000000u;
                        r0 = rd32(r6 - 0xcu);
                        f0 = rdf64(0x817fded8u);
                        wr32(0x817fded4u, r5);
                        r5 = r0 ^ 0x80000000u;
                        f0 = f0 - f10;
                        r0 = rd32(r6 - 0x10u);
                        f2 = rdf64(0x817fded0u);
                        wr32(0x817fdedcu, r4);
                        r4 = r0 ^ 0x80000000u;
                        f9 = f1 * f0;
                        f0 = rdf64(0x817fded8u);
                        f1 = f1 * f8;
                        wr32(0x817fded4u, r5);
                        r0 = rd32(r6 - 0x14u);
                        f2 = f2 - f10;
                        f3 = f0 - f10;
                        f0 = rdf64(0x817fded0u);
                        f7 = f1 * f2;
                        wr32(0x817fdedcu, r4);
                        r5 = r0 ^ 0x80000000u;
                        r4 = rd32(r6 - 0x18u);
                        f1 = f1 * f8;
                        r0 = rd32(r6 - 0x1cu);
                        f2 = rdf64(0x817fded8u);
                        f5 = f0 - f10;
                        f6 = f1 * f3;
                        wr32(0x817fded4u, r5);
                        r4 = r4 ^ 0x80000000u;
                        r0 = r0 ^ 0x80000000u;
                        f0 = rdf64(0x817fded0u);
                        f1 = f1 * f8;
                        wrf64(r7, f9);
                        f4 = f2 - f10;
                        f3 = f0 - f10;
                        r6 = r6 - 0x20u;
                        f5 = f1 * f5;
                        wr32(0x817fdedcu, r4);
                        f1 = f1 * f8;
                        f0 = rdf64(0x817fded8u);
                        wrf64(r7 - 8u, f7);
                        f2 = f0 - f10;
                        f4 = f1 * f4;
                        wr32(0x817fded4u, r0);
                        f1 = f1 * f8;
                        wrf64(r7 - 0x10u, f6);
                        f0 = rdf64(0x817fded0u);
                        wrf64(r7 - 0x18u, f5);
                        f0 = f0 - f10;
                        f3 = f1 * f3;
                        wrf64(r7 - 0x20u, f4);
                        f1 = f1 * f8;
                        wrf64(r7 - 0x28u, f3);
                        f2 = f1 * f2;
                        f1 = f1 * f8;
                        wrf64(r7 - 0x30u, f2);
                        f0 = f1 * f0;
                        f1 = f1 * f8;
                        wrf64(r7 - 0x38u, f0);
                        r7 = r7 - 0x40u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r6 = ((r3 << 2u) & 0xfffffffcu) - 0x7e802360u;
        r7 = ((r3 << 3u) & 0xfffffff8u) - 0x7e802310u;
        f3 = rdf64(0x805771a0u);
        f0 = rdf64(0x80577170u);
        ctr = r3 + 1u;
        if ((s32)r3 >= 0) {
            do {
                r0 = rd32(r6);
                r6 = r6 - 4u;
                r0 = r0 ^ 0x80000000u;
                wr32(0x817fdedcu, r0);
                f2 = f1 * (rdf64(0x817fded8u) - f3);
                f1 = f1 * f0;
                wrf64(r7, f2);
                r7 = r7 - 8u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r8 = r23;
    r3 = (r23 << 3u) & 0xfffffff8u;
    ctr = r23 + 1u;
    if ((s32)r23 >= 0) {
        do {
            f2 = rdf64(0x80577168u);
            r6 = r3 - 0x7e802310u;
            r7 = 0x8033d948u;
            r0 = r23 - r8;
            r9 = 0u;
            while ((s32)r9 <= (s32)r21 && (s32)r9 <= (s32)r0) {
                f1 = rdf64(r7);
                r7 = r7 + 8u;
                f0 = rdf64(r6);
                r6 = r6 + 8u;
                r9 = r9 + 1u;
                f0 = f1 * f0;
                f2 = f2 + f0;
            }
            r0 = (r0 << 3u) & 0xfffffff8u;
            r3 = r3 - 8u;
            wrf64(r0 - 0x7e802270u, f2);
            r8 = r8 - 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    r0 = rd32(0x817fdc98u);
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        c1lt = (s32)r23 < 0;
        r5 = r23;
        if ((s32)r23 > 0) {
            if ((s32)r23 > 8) {
                r4 = 0u;
                if (!c1lt && (s32)r23 >= -2147483647) {
                    r4 = 1u;
                }
                if (r4 != 0u) {
                    r4 = ((r23 << 3u) & 0xfffffff8u) - 0x7e802270u;
                    ctr = ((r23 - 1u) >> 3u) & 0x1fffffffu;
                    if ((s32)r23 > 8) {
                        do {
                            f0 = rdf64(r4 - 8u);
                            r5 = r5 - 8u;
                            f1 = rdf64(r4);
                            f2 = f0 + f1;
                            f0 = f0 - f2;
                            f0 = f1 + f0;
                            wrf64(r4, f0);
                            f0 = rdf64(r4 - 0x10u);
                            f1 = f0 + f2;
                            f0 = f0 - f1;
                            f0 = f2 + f0;
                            wrf64(r4 - 8u, f0);
                            f0 = rdf64(r4 - 0x18u);
                            f2 = f0 + f1;
                            f0 = f0 - f2;
                            f0 = f1 + f0;
                            wrf64(r4 - 0x10u, f0);
                            f0 = rdf64(r4 - 0x20u);
                            f1 = f0 + f2;
                            f0 = f0 - f1;
                            f0 = f2 + f0;
                            wrf64(r4 - 0x18u, f0);
                            f0 = rdf64(r4 - 0x28u);
                            f2 = f0 + f1;
                            f0 = f0 - f2;
                            f0 = f1 + f0;
                            wrf64(r4 - 0x20u, f0);
                            f0 = rdf64(r4 - 0x30u);
                            f1 = f0 + f2;
                            f0 = f0 - f1;
                            f0 = f2 + f0;
                            wrf64(r4 - 0x28u, f0);
                            f0 = rdf64(r4 - 0x38u);
                            f2 = f0 + f1;
                            f0 = f0 - f2;
                            f0 = f1 + f0;
                            wrf64(r4 - 0x30u, f0);
                            f0 = rdf64(r4 - 0x40u);
                            f1 = f0 + f2;
                            f0 = f0 - f1;
                            f0 = f2 + f0;
                            wrf64(r4 - 0x38u, f0);
                            wrf64(r4 - 0x40u, f1);
                            r4 = r4 - 0x40u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r3 = ((r5 << 3u) & 0xfffffff8u) - 0x7e802270u;
            ctr = r5;
            if ((s32)r5 > 0) {
                do {
                    f0 = rdf64(r3 - 8u);
                    f1 = rdf64(r3);
                    f2 = f0 + f1;
                    f0 = f0 - f2;
                    f0 = f1 + f0;
                    wrf64(r3, f0);
                    wrf64(r3 - 8u, f2);
                    r3 = r3 - 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        c1lt = (s32)r23 < 1;
        r6 = r23;
        if ((s32)r23 > 1) {
            if ((s32)(r23 - 1u) > 8) {
                r4 = 0u;
                r5 = 0u;
                if (!c1lt && (s32)r23 >= -2147483647) {
                    r5 = 1u;
                }
                if (r5 != 0u) {
                    r5 = r23 & 0x80000000u;
                    r3 = 1u;
                    if ((r5 - 0x80000000u) == 0u && r5 != ((r23 - 1u) & 0x80000000u)) {
                        r3 = 0u;
                    }
                    if (r3 != 0u) {
                        r4 = 1u;
                    }
                }
                if (r4 != 0u) {
                    r4 = ((r23 << 3u) & 0xfffffff8u) - 0x7e802270u;
                    ctr = ((r23 - 2u) >> 3u) & 0x1fffffffu;
                    if ((s32)r23 > 9) {
                        do {
                            f0 = rdf64(r4 - 8u);
                            r6 = r6 - 8u;
                            f1 = rdf64(r4);
                            f2 = f0 + f1;
                            f0 = f0 - f2;
                            f0 = f1 + f0;
                            wrf64(r4, f0);
                            f0 = rdf64(r4 - 0x10u);
                            f1 = f0 + f2;
                            f0 = f0 - f1;
                            f0 = f2 + f0;
                            wrf64(r4 - 8u, f0);
                            f0 = rdf64(r4 - 0x18u);
                            f2 = f0 + f1;
                            f0 = f0 - f2;
                            f0 = f1 + f0;
                            wrf64(r4 - 0x10u, f0);
                            f0 = rdf64(r4 - 0x20u);
                            f1 = f0 + f2;
                            f0 = f0 - f1;
                            f0 = f2 + f0;
                            wrf64(r4 - 0x18u, f0);
                            f0 = rdf64(r4 - 0x28u);
                            f2 = f0 + f1;
                            f0 = f0 - f2;
                            f0 = f1 + f0;
                            wrf64(r4 - 0x20u, f0);
                            f0 = rdf64(r4 - 0x30u);
                            f1 = f0 + f2;
                            f0 = f0 - f1;
                            f0 = f2 + f0;
                            wrf64(r4 - 0x28u, f0);
                            f0 = rdf64(r4 - 0x38u);
                            f2 = f0 + f1;
                            f0 = f0 - f2;
                            f0 = f1 + f0;
                            wrf64(r4 - 0x30u, f0);
                            f0 = rdf64(r4 - 0x40u);
                            f1 = f0 + f2;
                            f0 = f0 - f1;
                            f0 = f2 + f0;
                            wrf64(r4 - 0x38u, f0);
                            wrf64(r4 - 0x40u, f1);
                            r4 = r4 - 0x40u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r4 = ((r6 << 3u) & 0xfffffff8u) - 0x7e802270u;
            ctr = r6 - 1u;
            if ((s32)r6 > 1) {
                do {
                    f0 = rdf64(r4 - 8u);
                    f1 = rdf64(r4);
                    f2 = f0 + f1;
                    f0 = f0 - f2;
                    f0 = f1 + f0;
                    wrf64(r4, f0);
                    wrf64(r4 - 8u, f2);
                    r4 = r4 - 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        c1lt = (s32)r23 < 2;
        f6 = rdf64(0x80577168u);
        if (!c1lt) {
            if ((s32)(r23 - 1u) > 8) {
                r4 = 0u;
                r5 = 0u;
                r6 = 0u;
                if (!c1lt && (s32)r23 >= -2147483647) {
                    r6 = 1u;
                }
                if (r6 != 0u) {
                    r6 = r23 & 0x80000000u;
                    r3 = 1u;
                    if ((r6 - 0x80000000u) == 0u && r6 != ((r23 - 2u) & 0x80000000u)) {
                        r3 = 0u;
                    }
                    if (r3 != 0u) {
                        r5 = 1u;
                    }
                }
                if (r5 != 0u) {
                    r3 = 1u;
                    if (((r23 - 2u) & 0x80000000u) == 0u && ((r23 - 1u) & 0x80000000u) != 0u) {
                        r3 = 0u;
                    }
                    if (r3 != 0u) {
                        r4 = 1u;
                    }
                }
                if (r4 != 0u) {
                    r4 = ((r23 << 3u) & 0xfffffff8u) - 0x7e802270u;
                    ctr = ((r23 - 2u) >> 3u) & 0x1fffffffu;
                    if ((s32)r23 >= 10) {
                        do {
                            r23 = r23 - 8u;
                            f6 = f6 + rdf64(r4);
                            f5 = rdf64(r4 - 0x10u);
                            f4 = rdf64(r4 - 0x18u);
                            f3 = rdf64(r4 - 0x20u);
                            f6 = f6 + rdf64(r4 - 8u);
                            f2 = rdf64(r4 - 0x28u);
                            f1 = rdf64(r4 - 0x30u);
                            f0 = rdf64(r4 - 0x38u);
                            r4 = r4 - 0x40u;
                            f6 = f6 + f5;
                            f6 = f6 + f4;
                            f6 = f6 + f3;
                            f6 = f6 + f2;
                            f6 = f6 + f1;
                            f6 = f6 + f0;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r4 = ((r23 << 3u) & 0xfffffff8u) - 0x7e802270u;
            ctr = r23 - 1u;
            if ((s32)r23 >= 2) {
                do {
                    f0 = rdf64(r4);
                    r4 = r4 - 8u;
                    f6 = f6 + f0;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        if (r18 != 0u) {
            f2 = -rdf64(0x817fdd90u);
            f1 = -rdf64(0x817fdd98u);
            wrf64(param_2 + 0x10u, -f6);
            wrf64(param_2, f2);
            wrf64(param_2 + 8u, f1);
        } else {
            f0 = rdf64(0x817fdd98u);
            wrf64(param_2, rdf64(0x817fdd90u));
            wrf64(param_2 + 8u, f0);
            wrf64(param_2 + 0x10u, f6);
        }
    } else if (c0lt) {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            c1lt = (s32)r23 < 0;
            f6 = rdf64(0x80577168u);
            if (!c1lt) {
                if ((s32)(r23 + 1u) > 8) {
                    r4 = 0u;
                    r5 = 0u;
                    if (!c1lt && (s32)r23 >= -2147483647) {
                        r5 = 1u;
                    }
                    if (r5 != 0u) {
                        r3 = 1u;
                        if ((r23 & 0x80000000u) == 0u && ((r23 + 1u) & 0x80000000u) != 0u) {
                            r3 = 0u;
                        }
                        if (r3 != 0u) {
                            r4 = 1u;
                        }
                    }
                    if (r4 != 0u) {
                        r4 = ((r23 << 3u) & 0xfffffff8u) - 0x7e802270u;
                        ctr = (r23 >> 3u) & 0x1fffffffu;
                        if ((s32)r23 >= 8) {
                            do {
                                r23 = r23 - 8u;
                                f6 = f6 + rdf64(r4);
                                f5 = rdf64(r4 - 0x10u);
                                f4 = rdf64(r4 - 0x18u);
                                f3 = rdf64(r4 - 0x20u);
                                f6 = f6 + rdf64(r4 - 8u);
                                f2 = rdf64(r4 - 0x28u);
                                f1 = rdf64(r4 - 0x30u);
                                f0 = rdf64(r4 - 0x38u);
                                r4 = r4 - 0x40u;
                                f6 = f6 + f5;
                                f6 = f6 + f4;
                                f6 = f6 + f3;
                                f6 = f6 + f2;
                                f6 = f6 + f1;
                                f6 = f6 + f0;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r4 = ((r23 << 3u) & 0xfffffff8u) - 0x7e802270u;
                ctr = r23 + 1u;
                if ((s32)r23 >= 0) {
                    do {
                        f0 = rdf64(r4);
                        r4 = r4 - 8u;
                        f6 = f6 + f0;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            if (r18 != 0u) {
                f6 = -f6;
            }
            wrf64(param_2, f6);
        } else if (!c0lt) {
            c1lt = (s32)r23 < 0;
            f6 = rdf64(0x80577168u);
            r6 = r23;
            if (!c1lt) {
                if ((s32)(r23 + 1u) > 8) {
                    r4 = 0u;
                    r5 = 0u;
                    if (!c1lt && (s32)r23 >= -2147483647) {
                        r5 = 1u;
                    }
                    if (r5 != 0u) {
                        r3 = 1u;
                        if ((r23 & 0x80000000u) == 0u && ((r23 + 1u) & 0x80000000u) != 0u) {
                            r3 = 0u;
                        }
                        if (r3 != 0u) {
                            r4 = 1u;
                        }
                    }
                    if (r4 != 0u) {
                        r4 = ((r23 << 3u) & 0xfffffff8u) - 0x7e802270u;
                        ctr = (r23 >> 3u) & 0x1fffffffu;
                        if ((s32)r23 >= 8) {
                            do {
                                r6 = r6 - 8u;
                                f6 = f6 + rdf64(r4);
                                f5 = rdf64(r4 - 0x10u);
                                f4 = rdf64(r4 - 0x18u);
                                f3 = rdf64(r4 - 0x20u);
                                f6 = f6 + rdf64(r4 - 8u);
                                f2 = rdf64(r4 - 0x28u);
                                f1 = rdf64(r4 - 0x30u);
                                f0 = rdf64(r4 - 0x38u);
                                r4 = r4 - 0x40u;
                                f6 = f6 + f5;
                                f6 = f6 + f4;
                                f6 = f6 + f3;
                                f6 = f6 + f2;
                                f6 = f6 + f1;
                                f6 = f6 + f0;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r4 = ((r6 << 3u) & 0xfffffff8u) - 0x7e802270u;
                ctr = r6 + 1u;
                if ((s32)r6 >= 0) {
                    do {
                        f0 = rdf64(r4);
                        r4 = r4 - 8u;
                        f6 = f6 + f0;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            if (r18 != 0u) {
                f1 = -f6;
            } else {
                f1 = f6;
            }
            f0 = rdf64(0x817fdd90u);
            c1lt = (s32)r23 < 1;
            wrf64(param_2, f1);
            r8 = 1u;
            f6 = f0 - f6;
            if (!c1lt) {
                r4 = r23 - 8u;
                if ((s32)r23 > 8) {
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                    if (!c1lt && (s32)r23 <= 2147483646) {
                        r7 = 1u;
                    }
                    if (r7 != 0u) {
                        r7 = r23 & 0x80000000u;
                        r3 = 1u;
                        if ((r7 - 0x80000000u) == 0u && r7 != ((r23 - 1u) & 0x80000000u)) {
                            r3 = 0u;
                        }
                        if (r3 != 0u) {
                            r6 = 1u;
                        }
                    }
                    if (r6 != 0u) {
                        r3 = 1u;
                        if (((r23 - 1u) & 0x80000000u) == 0u && (r23 & 0x80000000u) != 0u) {
                            r3 = 0u;
                        }
                        if (r3 != 0u) {
                            r5 = 1u;
                        }
                    }
                    if (r5 != 0u) {
                        r3 = 0x817fdd98u;
                        ctr = ((r4 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r4 >= 1) {
                            do {
                                r8 = r8 + 8u;
                                f6 = f6 + rdf64(r3);
                                f5 = rdf64(r3 + 0x10u);
                                f4 = rdf64(r3 + 0x18u);
                                f3 = rdf64(r3 + 0x20u);
                                f6 = f6 + rdf64(r3 + 8u);
                                f2 = rdf64(r3 + 0x28u);
                                f1 = rdf64(r3 + 0x30u);
                                f0 = rdf64(r3 + 0x38u);
                                r3 = r3 + 0x40u;
                                f6 = f6 + f5;
                                f6 = f6 + f4;
                                f6 = f6 + f3;
                                f6 = f6 + f2;
                                f6 = f6 + f1;
                                f6 = f6 + f0;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r4 = ((r8 << 3u) & 0xfffffff8u) - 0x7e802270u;
                ctr = r23 + 1u - r8;
                if ((s32)r8 <= (s32)r23) {
                    do {
                        f0 = rdf64(r4);
                        r4 = r4 + 8u;
                        f6 = f6 + f0;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            if (r18 != 0u) {
                f6 = -f6;
            }
            wrf64(param_2 + 8u, f6);
        }
    }
    return;
}
