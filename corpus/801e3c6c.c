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

void fn_801e3c6c(u32 param_r3)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r12 = 0, r25 = 0, r26 = 0, r27 = 0, r30 = 0;
    u32 r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde00u, 0x817fe000u);
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
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    r0 = rd32(param_r3 + 0x1a0u);
    wr32(0x817fdf78u, 0x43300000u);
    wr32(0x817fdf80u, 0x43300000u);
    if (r0 != 0u) {
        r3 = tc_call(0x8003c9c8u, &a);
        r3 = r3 ^ 0x80000000u;
        r0 = rd32(param_r3 + 0x1acu);
        wr32(0x817fdf7cu, r3);
        f28 = (f64)(f32)((f64)rdf32(param_r3 + 0x188u) + (f64)(f32)(rdf64(0x817fdf78u) - rdf64(0x80576210u)));
        wrf32d(param_r3 + 0x188u, f28);
        do {
            if (r0 == 0u) {
                f0 = (f64)rdf32(param_r3 + 0x18cu);
                if ((((((f28 < f0) << 0x1fu) | ((f28 > f0) << 0x1eu) | ((f28 == f0) << 0x1du) | (((f28 != f28) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u) == 0u) {
                    c0lt = (s32)rd32(param_r3 + 0xe8u) < 0;
                    wr32(param_r3 + 0x30u, rd32(param_r3 + 0x19cu));
                    wr32(param_r3 + 0x19cu, 0u);
                    if (!c0lt && rd32(param_r3 + 0xf8u) != 0u) {
                        r3 = tc_call(0x8003c9c8u, &a);
                        f3 = (f64)rdf32(param_r3 + 0xf4u);
                        wr32(0x817fdf7cu, r3 ^ 0x80000000u);
                        f0 = (f64)(f32)px_fdiv(f28, f3);
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        f1 = (f64)(f32)(f28 - (f64)(f32)(rdf64(0x817fdf78u) - rdf64(0x80576210u)));
                        wrf64(0x817fdf90u, f0);
                        f0 = (f64)(f32)px_fdiv(f1, f3);
                        r3 = rd32(0x817fdf94u);
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        wrf64(0x817fdf88u, f0);
                        if (r3 != rd32(0x817fdf8cu)) {
                            r3 = rd32(param_r3 + 0xe8u);
                            if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
                                a.f[0] = (f64)rdf32(param_r3 + 0xecu);
                                a.r[0] = r3;
                                a.r[1] = param_r3 + 8u;
                                a.r[2] = 0x804890c8u;
                                a.r[3] = 0x804b15c0u;
                                r3 = tc_call(0x800d782cu, &a);
                                r27 = r3;
                            } else {
                                r0 = rd32(param_r3 + 0xcu);
                                wr32(0x817fdf50u, rd32(param_r3 + 8u));
                                wr32(0x817fdf54u, r0);
                                wr32(0x817fdf58u, rd32(param_r3 + 0x10u));
                                a.f[0] = (f64)rdf32(param_r3 + 0xecu);
                                a.r[0] = rd32(param_r3 + 0xe8u);
                                a.r[1] = 0x817fdf50u;
                                a.r[2] = 0x804890c8u;
                                a.r[3] = 0x804b15c0u;
                                r3 = tc_call(0x800d7758u, &a);
                                r27 = r3;
                            }
                            if (r3 != 0u) {
                                if ((f64)rdf32(0x8057622cu) != (f64)rdf32(param_r3 + 0xf0u)) {
                                    r3 = tc_call(0x8003c9c8u, &a);
                                    f2 = rdf64(0x80576210u);
                                    wr32(0x817fdf84u, r3 ^ 0x80000000u);
                                    f0 = (f64)(f32)px_fdiv((f64)rdf32(param_r3 + 0xf0u), (f64)(f32)(rdf64(0x817fdf80u) - f2));
                                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                                    wrf64(0x817fdf90u, f0);
                                    a.r[0] = r27;
                                    a.r[1] = rd32(0x817fdf94u);
                                    (void)tc_call(0x80157f28u, &a);
                                }
                                wr32(r27 + 0x20u, 0xffffffffu);
                                wr32(r27 + 0x24u, 0u);
                                wr32(param_r3 + 0xe4u, r27);
                            }
                        }
                    }
                    f0 = (f64)rdf32(0x805761f0u);
                    wr32(param_r3 + 0x1acu, 1u);
                    wrf32d(0x817fdf10u, f0);
                    wrf32d(0x817fdf0cu, f0);
                    wrf32d(0x817fdf08u, f0);
                    r7 = rd32(param_r3 + 0x180u);
                    do {
                        if (r7 != 0u) {
                            r4 = rd32(param_r3 + 0x178u);
                            wr32(0x817fdf14u, rd32(param_r3 + 0x174u));
                            r0 = rd32(param_r3 + 0x17cu);
                            f1 = (f64)rdf32(0x80576304u);
                            f0 = (f64)(f32)((f64)rdf32(0x817fdf14u) - (f64)rdf32(0x804890d4u));
                            wr32(0x817fdf18u, r4);
                            wr32(0x817fdf1cu, r0);
                            f0 = ppc_fabs(f0);
                            f0 = (f64)(f32)f0;
                            r0 = ((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u;
                            if (r0 != 0u) {
                                f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(0x817fdf18u) - (f64)rdf32(0x804890d8u)));
                                r0 = ((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u;
                            }
                            if (r0 != 0u) {
                                f0 = (f64)rdf32(0x80576304u);
                                f1 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(0x817fdf1cu) - (f64)rdf32(0x804890dcu)));
                                r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                            }
                            if (r0 != 0u) {
                                r0 = rd32(r7 + 4u);
                                wr32(0x817fdf20u, rd32(r7));
                                wr32(0x817fdf24u, r0);
                                wr32(0x817fdf28u, rd32(r7 + 8u));
                                a.r[0] = 0x817fdf20u;
                                a.r[1] = param_r3 + 8u;
                                a.r[2] = 0x817fdf20u;
                                (void)tc_call(0x802343a4u, &a);
                                f3 = (f64)rdf32(0x817fdf20u);
                                r0 = 0u;
                                f0 = (f64)rdf32(0x805761f0u);
                                f2 = (f64)rdf32(0x817fdf24u);
                                f1 = (f64)rdf32(0x817fdf28u);
                                wrf32d(0x817fdf08u, f3);
                                wrf32d(0x817fdf0cu, f2);
                                wrf32d(0x817fdf10u, f1);
                                if (f0 == f3 && f0 == f2 && f0 == f1) {
                                    r0 = 1u;
                                }
                                if (r0 != 0u) break;
                                a.r[0] = 0x817fdf08u;
                                a.r[1] = 0x817fdf08u;
                                (void)tc_call(0x802343e4u, &a);
                                break;
                            }
                        }
                        r0 = 0u;
                        r4 = rd32(param_r3 + 0x178u);
                        r3 = rd32(param_r3 + 0x17cu);
                        wr32(0x817fdf2cu, rd32(param_r3 + 0x174u));
                        f0 = (f64)rdf32(0x805761f0u);
                        f3 = (f64)rdf32(0x817fdf2cu);
                        wr32(0x817fdf30u, r4);
                        wr32(0x817fdf34u, r3);
                        f2 = (f64)rdf32(0x817fdf30u);
                        f1 = (f64)rdf32(0x817fdf34u);
                        wrf32d(0x817fdf08u, f3);
                        wrf32d(0x817fdf0cu, f2);
                        wrf32d(0x817fdf10u, f1);
                        if (f0 == f3 && f0 == f2 && f0 == f1) {
                            r0 = 1u;
                        }
                        if (r0 == 0u) {
                            f1 = (f64)rdf32(0x805761f0u);
                            r0 = 0u;
                            if (f1 == (f64)rdf32(0x817fdf08u) && f1 == (f64)rdf32(0x817fdf0cu) && f1 == (f64)rdf32(0x817fdf10u)) {
                                r0 = 1u;
                            }
                            if (r0 == 0u) {
                                a.r[0] = 0x817fdf08u;
                                a.r[1] = 0x817fdf08u;
                                (void)tc_call(0x802343e4u, &a);
                            }
                        }
                    } while (0);
                    a.f[0] = (f64)rdf32(param_r3 + 0x184u);
                    a.r[0] = 0x817fdf08u;
                    a.r[1] = 0x817fdf08u;
                    (void)tc_call(0x802343c8u, &a);
                    r4 = rd32(0x817fdf0cu);
                    wr32(0x817fdf38u, rd32(0x817fdf08u));
                    r0 = rd32(0x817fdf10u);
                    wr32(0x817fdf3cu, r4);
                    r3 = rd32(param_r3 + 0x100u);
                    wr32(0x817fdf40u, r0);
                    f1 = (f64)rdf32(0x817fdf3cu);
                    f0 = (f64)rdf32(0x817fdf40u);
                    wrf32d(param_r3 + 0x15cu, (f64)rdf32(0x817fdf38u));
                    wrf32d(param_r3 + 0x160u, f1);
                    wrf32d(param_r3 + 0x164u, f0);
                    if ((s32)r3 >= 0) {
                        if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
                            a.f[0] = (f64)rdf32(param_r3 + 0x104u);
                            a.r[0] = r3;
                            a.r[1] = param_r3 + 8u;
                            a.r[2] = 0x804890c8u;
                            a.r[3] = 0x804b15c0u;
                            r3 = tc_call(0x800d782cu, &a);
                            r27 = r3;
                        } else {
                            r0 = rd32(param_r3 + 0xcu);
                            wr32(0x817fdf5cu, rd32(param_r3 + 8u));
                            wr32(0x817fdf60u, r0);
                            wr32(0x817fdf64u, rd32(param_r3 + 0x10u));
                            a.f[0] = (f64)rdf32(param_r3 + 0x104u);
                            a.r[0] = rd32(param_r3 + 0x100u);
                            a.r[1] = 0x817fdf5cu;
                            a.r[2] = 0x804890c8u;
                            a.r[3] = 0x804b15c0u;
                            r3 = tc_call(0x800d7758u, &a);
                            r27 = r3;
                        }
                        if (r3 != 0u) {
                            if ((f64)rdf32(0x8057622cu) != (f64)rdf32(param_r3 + 0x108u)) {
                                r3 = tc_call(0x8003c9c8u, &a);
                                f2 = rdf64(0x80576210u);
                                wr32(0x817fdf7cu, r3 ^ 0x80000000u);
                                f0 = (f64)(f32)px_fdiv((f64)rdf32(param_r3 + 0x108u), (f64)(f32)(rdf64(0x817fdf78u) - f2));
                                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                                wrf64(0x817fdf90u, f0);
                                a.r[0] = r27;
                                a.r[1] = rd32(0x817fdf94u);
                                (void)tc_call(0x80157f28u, &a);
                            }
                            wr32(r27 + 0x20u, 0xffffffffu);
                            wr32(r27 + 0x24u, 0u);
                            wr32(param_r3 + 0xfcu, r27);
                        }
                    }
                    r3 = rd32(param_r3 + 0x118u);
                    if ((s32)r3 >= 0) {
                        if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
                            a.f[0] = (f64)rdf32(param_r3 + 0x11cu);
                            a.r[0] = r3;
                            a.r[1] = param_r3 + 8u;
                            a.r[2] = 0x804890c8u;
                            a.r[3] = 0x804b15c0u;
                            r3 = tc_call(0x800d782cu, &a);
                            r27 = r3;
                        } else {
                            r0 = rd32(param_r3 + 0xcu);
                            wr32(0x817fdf68u, rd32(param_r3 + 8u));
                            wr32(0x817fdf6cu, r0);
                            wr32(0x817fdf70u, rd32(param_r3 + 0x10u));
                            a.f[0] = (f64)rdf32(param_r3 + 0x11cu);
                            a.r[0] = rd32(param_r3 + 0x118u);
                            a.r[1] = 0x817fdf68u;
                            a.r[2] = 0x804890c8u;
                            a.r[3] = 0x804b15c0u;
                            r3 = tc_call(0x800d7758u, &a);
                            r27 = r3;
                        }
                        if (r3 != 0u) {
                            if ((f64)rdf32(0x8057622cu) != (f64)rdf32(param_r3 + 0x120u)) {
                                r3 = tc_call(0x8003c9c8u, &a);
                                f2 = rdf64(0x80576210u);
                                wr32(0x817fdf84u, r3 ^ 0x80000000u);
                                f0 = (f64)(f32)px_fdiv((f64)rdf32(param_r3 + 0x120u), (f64)(f32)(rdf64(0x817fdf80u) - f2));
                                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                                wrf64(0x817fdf90u, f0);
                                a.r[0] = r27;
                                a.r[1] = rd32(0x817fdf94u);
                                (void)tc_call(0x80157f28u, &a);
                            }
                            wr32(r27 + 0x20u, 0xffffffffu);
                            wr32(r27 + 0x24u, 0u);
                            wr32(param_r3 + 0x114u, r27);
                        }
                    }
                    a.r[0] = rd32(param_r3 + 0x1c0u);
                    a.r[1] = param_r3 + 8u;
                    (void)tc_call(0x801dc4b4u, &a);
                } else {
                    r27 = 0u;
                    r3 = tc_call(0x8003c9c8u, &a);
                    f1 = rdf64(0x80576210u);
                    wr32(0x817fdf84u, r3 ^ 0x80000000u);
                    if ((f64)rdf32(param_r3 + 0x188u) == (f64)(f32)(rdf64(0x817fdf80u) - f1)) {
                        r27 = 1u;
                    }
                    if ((s32)rd32(param_r3 + 0xe8u) >= 0) {
                        if (r27 == 0u) {
                            if (rd32(param_r3 + 0xf8u) == 0u) break;
                            f28 = (f64)rdf32(param_r3 + 0x188u);
                            r3 = tc_call(0x8003c9c8u, &a);
                            f3 = (f64)rdf32(param_r3 + 0xf4u);
                            wr32(0x817fdf7cu, r3 ^ 0x80000000u);
                            f0 = (f64)(f32)px_fdiv(f28, f3);
                            f0 = px_ctiw(f0, ppc_fctiwz(f0));
                            f1 = (f64)(f32)(f28 - (f64)(f32)(rdf64(0x817fdf78u) - rdf64(0x80576210u)));
                            wrf64(0x817fdf88u, f0);
                            f0 = (f64)(f32)px_fdiv(f1, f3);
                            r3 = rd32(0x817fdf8cu);
                            f0 = px_ctiw(f0, ppc_fctiwz(f0));
                            wrf64(0x817fdf90u, f0);
                            if (r3 == rd32(0x817fdf94u)) break;
                        }
                        r3 = rd32(param_r3 + 0xe8u);
                        if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
                            a.f[0] = (f64)rdf32(param_r3 + 0xecu);
                            a.r[0] = r3;
                            a.r[1] = param_r3 + 8u;
                            a.r[2] = 0x804890c8u;
                            a.r[3] = 0x804b15c0u;
                            r3 = tc_call(0x800d782cu, &a);
                            r27 = r3;
                        } else {
                            r0 = rd32(param_r3 + 0xcu);
                            wr32(0x817fdf44u, rd32(param_r3 + 8u));
                            wr32(0x817fdf48u, r0);
                            wr32(0x817fdf4cu, rd32(param_r3 + 0x10u));
                            a.f[0] = (f64)rdf32(param_r3 + 0xecu);
                            a.r[0] = rd32(param_r3 + 0xe8u);
                            a.r[1] = 0x817fdf44u;
                            a.r[2] = 0x804890c8u;
                            a.r[3] = 0x804b15c0u;
                            r3 = tc_call(0x800d7758u, &a);
                            r27 = r3;
                        }
                        if (r3 != 0u) {
                            if ((f64)rdf32(0x8057622cu) != (f64)rdf32(param_r3 + 0xf0u)) {
                                r3 = tc_call(0x8003c9c8u, &a);
                                f2 = rdf64(0x80576210u);
                                wr32(0x817fdf84u, r3 ^ 0x80000000u);
                                f0 = (f64)(f32)px_fdiv((f64)rdf32(param_r3 + 0xf0u), (f64)(f32)(rdf64(0x817fdf80u) - f2));
                                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                                wrf64(0x817fdf90u, f0);
                                a.r[0] = r27;
                                a.r[1] = rd32(0x817fdf94u);
                                (void)tc_call(0x80157f28u, &a);
                            }
                            wr32(r27 + 0x20u, 0xffffffffu);
                            wr32(r27 + 0x24u, 0u);
                            wr32(param_r3 + 0xe4u, r27);
                        }
                    }
                }
            }
        } while (0);
        if (rd32(param_r3 + 0x1acu) != 0u) {
            r25 = rd32(param_r3 + 0x180u);
            if (r25 != 0u && rd32(param_r3 + 0x1a4u) != 0u) {
                r0 = rd32(param_r3 + 0x160u);
                f0 = (f64)rdf32(0x805761f0u);
                wr32(0x817fdeccu, rd32(param_r3 + 0x15cu));
                wr32(0x817fded0u, r0);
                wr32(0x817fded4u, rd32(param_r3 + 0x164u));
                wrf32d(0x817fdee0u, f0);
                wrf32d(0x817fdedcu, f0);
                wrf32d(0x817fded8u, f0);
                a.r[0] = 0x817fdeccu;
                f1 = tc_callf(0x80234440u, &a);
                f28 = f1;
                a.r[0] = 0x817fdeccu;
                f1 = tc_callf(0x80234440u, &a);
                if (f1 > (f64)rdf32(0x80576308u)) {
                    f1 = (f64)rdf32(0x805761f0u);
                    r0 = 0u;
                    if (f1 == (f64)rdf32(0x817fdeccu) && f1 == (f64)rdf32(0x817fded0u) && f1 == (f64)rdf32(0x817fded4u)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x817fdeccu;
                        a.r[1] = 0x817fdeccu;
                        (void)tc_call(0x802343e4u, &a);
                    }
                }
                r0 = rd32(r25 + 4u);
                wr32(0x817fdee4u, rd32(r25));
                wr32(0x817fdee8u, r0);
                wr32(0x817fdeecu, rd32(r25 + 8u));
                a.r[0] = 0x817fdee4u;
                a.r[1] = param_r3 + 8u;
                a.r[2] = 0x817fdee4u;
                (void)tc_call(0x802343a4u, &a);
                f3 = (f64)rdf32(0x817fdee4u);
                r0 = 0u;
                f0 = (f64)rdf32(0x805761f0u);
                f2 = (f64)rdf32(0x817fdee8u);
                f1 = (f64)rdf32(0x817fdeecu);
                wrf32d(0x817fded8u, f3);
                wrf32d(0x817fdedcu, f2);
                wrf32d(0x817fdee0u, f1);
                if (f0 == f3 && f0 == f2 && f0 == f1) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    a.r[0] = 0x817fded8u;
                    a.r[1] = 0x817fded8u;
                    (void)tc_call(0x802343e4u, &a);
                }
                f1 = (f64)rdf32(param_r3 + 0x194u);
                r5 = rd32(0x817fdedcu);
                r0 = rd32(0x817fdee0u);
                wr32(0x817fdef0u, rd32(0x817fded8u));
                wr32(0x817fdef4u, r5);
                wr32(0x817fdef8u, r0);
                a.f[0] = f1;
                a.r[0] = 0x817fdef0u;
                a.r[1] = 0x817fdef0u;
                (void)tc_call(0x802343c8u, &a);
                a.r[0] = 0x817fdeccu;
                a.r[1] = 0x817fdef0u;
                a.r[2] = 0x817fdeccu;
                (void)tc_call(0x80234380u, &a);
                f1 = (f64)rdf32(0x805761f0u);
                r0 = 0u;
                if (f1 == (f64)rdf32(0x817fdeccu) && f1 == (f64)rdf32(0x817fded0u) && f1 == (f64)rdf32(0x817fded4u)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    a.r[0] = 0x817fdeccu;
                    a.r[1] = 0x817fdeccu;
                    (void)tc_call(0x802343e4u, &a);
                }
                a.f[0] = f28;
                a.r[0] = 0x817fdeccu;
                a.r[1] = 0x817fdeccu;
                (void)tc_call(0x802343c8u, &a);
                r3 = rd32(0x817fded0u);
                r0 = rd32(0x817fded4u);
                wr32(0x817fdefcu, rd32(0x817fdeccu));
                wr32(0x817fdf00u, r3);
                f2 = (f64)rdf32(0x817fdefcu);
                wr32(0x817fdf04u, r0);
                f1 = (f64)rdf32(0x817fdf00u);
                f0 = (f64)rdf32(0x817fdf04u);
                wrf32d(param_r3 + 0x15cu, f2);
                wrf32d(param_r3 + 0x160u, f1);
                wrf32d(param_r3 + 0x164u, f0);
            }
            r3 = param_r3 + 0x15cu;
            a.r[0] = r3;
            a.r[1] = param_r3 + 0x168u;
            a.r[2] = r3;
            (void)tc_call(0x80234380u, &a);
            r0 = rd32(param_r3 + 0xcu);
            wr32(0x817fde90u, rd32(param_r3 + 8u));
            wr32(0x817fde94u, r0);
            wr32(0x817fde98u, rd32(param_r3 + 0x10u));
            a.r[0] = 0x817fde90u;
            a.r[1] = param_r3 + 0x15cu;
            a.r[2] = 0x817fde90u;
            (void)tc_call(0x80234380u, &a);
            wrf32d(param_r3 + 8u, (f64)rdf32(0x817fde90u));
            r0 = rd32(param_r3 + 8u);
            wrf32d(param_r3 + 0xcu, (f64)rdf32(0x817fde94u));
            f0 = (f64)rdf32(0x817fde98u);
            wr32(0x817fde84u, r0);
            r7 = rd32(param_r3 + 0xcu);
            wrf32d(param_r3 + 0x10u, f0);
            f1 = (f64)rdf32(0x817fde84u);
            r0 = rd32(0x80471a18u);
            wr32(0x817fde8cu, rd32(param_r3 + 0x10u));
            r0 = r0 * 0x4150u;
            f2 = (f64)rdf32(0x817fde8cu);
            wr32(0x817fde88u, r7);
            a.f[0] = f1;
            a.f[1] = f2;
            a.r[0] = r0 - 0x7fb92738u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            f1 = tc_callf(0x80089fc8u, &a);
            f0 = (f64)rdf32(0x817fde88u);
            if ((f0 < f1) || (f0 == f1)) {
                a.r[0] = rd32(param_r3 + 0x1bcu);
                a.r[1] = param_r3 + 8u;
                (void)tc_call(0x801dc4b4u, &a);
                r3 = rd32(param_r3 + 0x130u);
                if ((s32)r3 >= 0) {
                    if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
                        a.f[0] = (f64)rdf32(param_r3 + 0x134u);
                        a.r[0] = r3;
                        a.r[1] = param_r3 + 8u;
                        a.r[2] = 0x804890c8u;
                        a.r[3] = 0x804b15c0u;
                        r3 = tc_call(0x800d782cu, &a);
                        r27 = r3;
                    } else {
                        r0 = rd32(param_r3 + 0xcu);
                        wr32(0x817fde9cu, rd32(param_r3 + 8u));
                        wr32(0x817fdea0u, r0);
                        wr32(0x817fdea4u, rd32(param_r3 + 0x10u));
                        a.f[0] = (f64)rdf32(param_r3 + 0x134u);
                        a.r[0] = rd32(param_r3 + 0x130u);
                        a.r[1] = 0x817fde9cu;
                        a.r[2] = 0x804890c8u;
                        a.r[3] = 0x804b15c0u;
                        r3 = tc_call(0x800d7758u, &a);
                        r27 = r3;
                    }
                    if (r3 != 0u) {
                        if ((f64)rdf32(0x8057622cu) != (f64)rdf32(param_r3 + 0x138u)) {
                            r3 = tc_call(0x8003c9c8u, &a);
                            f2 = rdf64(0x80576210u);
                            wr32(0x817fdf7cu, r3 ^ 0x80000000u);
                            f0 = (f64)(f32)px_fdiv((f64)rdf32(param_r3 + 0x138u), (f64)(f32)(rdf64(0x817fdf78u) - f2));
                            f0 = px_ctiw(f0, ppc_fctiwz(f0));
                            wrf64(0x817fdf90u, f0);
                            a.r[0] = r27;
                            a.r[1] = rd32(0x817fdf94u);
                            (void)tc_call(0x80157f28u, &a);
                        }
                        wr32(r27 + 0x20u, 0xffffffffu);
                        wr32(r27 + 0x24u, 0u);
                        wr32(param_r3 + 0x12cu, r27);
                    }
                }
                r27 = rd32(param_r3 + 0x114u);
                if (r27 != 0u) {
                    a.r[0] = r27;
                    r3 = tc_call(0x80320fe4u, &a);
                    if (r3 != 0u) {
                        a.r[0] = r27;
                        (void)tc_call(0x80157e6cu, &a);
                    }
                }
                r3 = rd32(param_r3 + 0x114u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x80320fe4u, &a);
                    if (r3 != 0u) {
                        a.r[0] = rd32(param_r3 + 0x114u);
                        (void)tc_call(0x80157f30u, &a);
                    }
                }
                f2 = (f64)rdf32(0x80576200u);
                f1 = (f64)rdf32(0x8057621cu);
                c0eq = rd32(param_r3 + 0x1a8u) == 0u;
                f0 = (f64)rdf32(0x80576204u);
                wr32(param_r3 + 0x114u, 0u);
                wr32(param_r3 + 0x118u, 0xffffffffu);
                wrf32d(param_r3 + 0x11cu, f2);
                wrf32d(param_r3 + 0x120u, f1);
                wrf32d(param_r3 + 0x124u, f0);
                wr32(param_r3 + 0x128u, 0u);
                if (!c0eq) {
                    a.r[0] = param_r3;
                    f1 = tc_callf(0x8006ff00u, &a);
                    f2 = 0.0;
                }
                r12 = rd32(param_r3 + 0x1b0u);
                if (r12 != 0u) {
                    a.r[0] = param_r3;
                    a.r[1] = rd32(param_r3 + 0x1b8u);
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    (void)tc_call(r12, &a);
                }
                r3 = rd32(param_r3 + 0xe4u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x80320fe4u, &a);
                    if (r3 != 0u) {
                        a.r[0] = rd32(param_r3 + 0xe4u);
                        (void)tc_call(0x80157f30u, &a);
                    }
                }
                r3 = rd32(param_r3 + 0xfcu);
                f2 = (f64)rdf32(0x80576200u);
                f1 = (f64)rdf32(0x8057621cu);
                f0 = (f64)rdf32(0x80576204u);
                wr32(param_r3 + 0xe4u, 0u);
                wr32(param_r3 + 0xe8u, 0xffffffffu);
                wrf32d(param_r3 + 0xecu, f2);
                wrf32d(param_r3 + 0xf0u, f1);
                wrf32d(param_r3 + 0xf4u, f0);
                wr32(param_r3 + 0xf8u, 0u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x80320fe4u, &a);
                    if (r3 != 0u) {
                        a.r[0] = rd32(param_r3 + 0xfcu);
                        (void)tc_call(0x80157f30u, &a);
                    }
                }
                r3 = rd32(param_r3 + 0x114u);
                f2 = (f64)rdf32(0x80576200u);
                f1 = (f64)rdf32(0x8057621cu);
                f0 = (f64)rdf32(0x80576204u);
                wr32(param_r3 + 0xfcu, 0u);
                wr32(param_r3 + 0x100u, 0xffffffffu);
                wrf32d(param_r3 + 0x104u, f2);
                wrf32d(param_r3 + 0x108u, f1);
                wrf32d(param_r3 + 0x10cu, f0);
                wr32(param_r3 + 0x110u, 0u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x80320fe4u, &a);
                    if (r3 != 0u) {
                        a.r[0] = rd32(param_r3 + 0x114u);
                        (void)tc_call(0x80157f30u, &a);
                    }
                }
                r3 = rd32(param_r3 + 0x144u);
                f2 = (f64)rdf32(0x80576200u);
                f1 = (f64)rdf32(0x8057621cu);
                f0 = (f64)rdf32(0x80576204u);
                wr32(param_r3 + 0x114u, 0u);
                wr32(param_r3 + 0x118u, 0xffffffffu);
                wrf32d(param_r3 + 0x11cu, f2);
                wrf32d(param_r3 + 0x120u, f1);
                wrf32d(param_r3 + 0x124u, f0);
                wr32(param_r3 + 0x128u, 0u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x80320fe4u, &a);
                    if (r3 != 0u) {
                        a.r[0] = rd32(param_r3 + 0x144u);
                        (void)tc_call(0x80157f30u, &a);
                    }
                }
                f0 = (f64)rdf32(0x8057621cu);
                f4 = (f64)rdf32(0x80576204u);
                wrf32d(param_r3 + 0x14cu, (f64)rdf32(0x80576200u));
                f3 = (f64)rdf32(0x805761f0u);
                wrf32d(param_r3 + 0x150u, f0);
                f2 = (f64)rdf32(0x80576220u);
                wr32(param_r3 + 0x144u, 0u);
                f1 = (f64)rdf32(0x80576224u);
                wr32(param_r3 + 0x148u, 0xffffffffu);
                f0 = (f64)rdf32(0x80576228u);
                wrf32d(param_r3 + 0x154u, f4);
                wr32(param_r3 + 0x158u, 0u);
                r4 = rd32(0x804890d8u);
                r3 = rd32(0x804890dcu);
                wr32(0x817fdea8u, rd32(0x804890d4u));
                wr32(0x817fdeacu, r4);
                f6 = (f64)rdf32(0x817fdea8u);
                wr32(0x817fdeb0u, r3);
                f5 = (f64)rdf32(0x817fdeacu);
                f4 = (f64)rdf32(0x817fdeb0u);
                wrf32d(param_r3 + 0x174u, f6);
                wrf32d(param_r3 + 0x178u, f5);
                wrf32d(param_r3 + 0x17cu, f4);
                r4 = rd32(0x804890ccu);
                r3 = rd32(0x804890d0u);
                wr32(0x817fdeb4u, rd32(0x804890c8u));
                wr32(0x817fdeb8u, r4);
                f6 = (f64)rdf32(0x817fdeb4u);
                wr32(0x817fdebcu, r3);
                f5 = (f64)rdf32(0x817fdeb8u);
                f4 = (f64)rdf32(0x817fdebcu);
                wrf32d(param_r3 + 0x15cu, f6);
                wrf32d(param_r3 + 0x160u, f5);
                wrf32d(param_r3 + 0x164u, f4);
                r4 = rd32(0x804890ccu);
                r3 = rd32(0x804890d0u);
                wr32(0x817fdec0u, rd32(0x804890c8u));
                wr32(0x817fdec4u, r4);
                f6 = (f64)rdf32(0x817fdec0u);
                wr32(0x817fdec8u, r3);
                f5 = (f64)rdf32(0x817fdec4u);
                f4 = (f64)rdf32(0x817fdec8u);
                wrf32d(param_r3 + 0x168u, f6);
                wrf32d(param_r3 + 0x16cu, f5);
                wrf32d(param_r3 + 0x170u, f4);
                wr32(param_r3 + 0x180u, 0u);
                wrf32d(param_r3 + 0x184u, f3);
                wrf32d(param_r3 + 0x188u, f3);
                wrf32d(param_r3 + 0x18cu, f3);
                wrf32d(param_r3 + 0x190u, f2);
                wr32(param_r3 + 0x1a4u, 0u);
                wr32(param_r3 + 0x1a8u, 1u);
                wrf32d(param_r3 + 0x194u, f1);
                wr32(param_r3 + 0x1acu, 0u);
                wrf32d(param_r3 + 0x20u, f0);
                wr32(param_r3 + 0x1a0u, 0u);
                wr32(param_r3 + 0x19cu, 0u);
                wr32(param_r3 + 0x1b4u, 0u);
                wr32(param_r3 + 0x1b0u, 0u);
                wr32(param_r3 + 0x1b8u, 0u);
                wr32(param_r3 + 0x1bcu, 0xffffffffu);
                wr32(param_r3 + 0x1c0u, 0xffffffffu);
            }
            if ((s32)rd32(param_r3 + 0x118u) >= 0 && rd32(param_r3 + 0x128u) != 0u) {
                f28 = (f64)rdf32(param_r3 + 0x188u);
                r3 = tc_call(0x8003c9c8u, &a);
                f3 = (f64)rdf32(param_r3 + 0x124u);
                wr32(0x817fdf84u, r3 ^ 0x80000000u);
                f0 = (f64)(f32)px_fdiv(f28, f3);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                f1 = (f64)(f32)(f28 - (f64)(f32)(rdf64(0x817fdf80u) - rdf64(0x80576210u)));
                wrf64(0x817fdf90u, f0);
                f0 = (f64)(f32)px_fdiv(f1, f3);
                r0 = rd32(0x817fdf94u);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wrf64(0x817fdf88u, f0);
                if (r0 != rd32(0x817fdf8cu)) {
                    r3 = rd32(param_r3 + 0x118u);
                    if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
                        a.f[0] = (f64)rdf32(param_r3 + 0x11cu);
                        a.r[0] = r3;
                        a.r[1] = param_r3 + 8u;
                        a.r[2] = 0x804890c8u;
                        a.r[3] = 0x804b15c0u;
                        r3 = tc_call(0x800d782cu, &a);
                        r27 = r3;
                    } else {
                        r0 = rd32(param_r3 + 0xcu);
                        wr32(0x817fde78u, rd32(param_r3 + 8u));
                        wr32(0x817fde7cu, r0);
                        wr32(0x817fde80u, rd32(param_r3 + 0x10u));
                        a.f[0] = (f64)rdf32(param_r3 + 0x11cu);
                        a.r[0] = rd32(param_r3 + 0x118u);
                        a.r[1] = 0x817fde78u;
                        a.r[2] = 0x804890c8u;
                        a.r[3] = 0x804b15c0u;
                        r3 = tc_call(0x800d7758u, &a);
                        r27 = r3;
                    }
                    if (r3 != 0u) {
                        if ((f64)rdf32(0x8057622cu) != (f64)rdf32(param_r3 + 0x120u)) {
                            r3 = tc_call(0x8003c9c8u, &a);
                            f2 = rdf64(0x80576210u);
                            wr32(0x817fdf7cu, r3 ^ 0x80000000u);
                            f0 = (f64)(f32)px_fdiv((f64)rdf32(param_r3 + 0x120u), (f64)(f32)(rdf64(0x817fdf78u) - f2));
                            f0 = px_ctiw(f0, ppc_fctiwz(f0));
                            wrf64(0x817fdf90u, f0);
                            a.r[0] = r27;
                            a.r[1] = rd32(0x817fdf94u);
                            (void)tc_call(0x80157f28u, &a);
                        }
                        wr32(r27 + 0x20u, 0xffffffffu);
                        wr32(r27 + 0x24u, 0u);
                        wr32(param_r3 + 0x114u, r27);
                    }
                }
            }
        }
        wr32(0x817fde38u, param_r3 + 0xe4u);
        r30 = 0x817fde38u;
        f31 = (f64)rdf32(0x805761f0u);
        r31 = 0u;
        wr32(0x817fde3cu, param_r3 + 0x114u);
        f28 = (f64)rdf32(0x80576200u);
        wr32(0x817fde40u, param_r3 + 0x12cu);
        f29 = (f64)rdf32(0x8057621cu);
        wr32(0x817fde44u, param_r3 + 0x144u);
        f30 = (f64)rdf32(0x80576204u);
        do {
            r25 = rd32(rd32(r30));
            if (r25 != 0u) {
                a.r[0] = r25;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    if (r25 != 0u) {
                        a.r[0] = r25;
                        r3 = tc_call(0x80320fe4u, &a);
                        if (r3 != 0u) {
                            r0 = rd32(param_r3 + 0xcu);
                            wr32(0x817fde54u, rd32(param_r3 + 8u));
                            wr32(0x817fde58u, r0);
                            wr32(0x817fde5cu, rd32(param_r3 + 0x10u));
                            a.r[0] = r25;
                            a.r[1] = 0x817fde54u;
                            (void)tc_call(0x8015811cu, &a);
                            r0 = 0u;
                            r3 = rd32(param_r3 + 0x160u);
                            wr32(0x817fde6cu, rd32(param_r3 + 0x15cu));
                            wr32(0x817fde70u, r3);
                            c0eq = f31 == (f64)rdf32(0x817fde6cu);
                            wr32(0x817fde74u, rd32(param_r3 + 0x164u));
                            wrf32d(0x817fde68u, f31);
                            wrf32d(0x817fde64u, f31);
                            wrf32d(0x817fde60u, f31);
                            if (c0eq && f31 == (f64)rdf32(0x817fde70u) && f31 == (f64)rdf32(0x817fde74u)) {
                                r0 = 1u;
                            }
                            if (r0 == 0u) {
                                r0 = 0u;
                                if (f31 == (f64)rdf32(0x817fde6cu) && f31 == (f64)rdf32(0x817fde70u) && f31 == (f64)rdf32(0x817fde74u)) {
                                    r0 = 1u;
                                }
                                if (r0 == 0u) {
                                    a.r[0] = 0x817fde6cu;
                                    a.r[1] = 0x817fde6cu;
                                    (void)tc_call(0x802343e4u, &a);
                                }
                            }
                            a.r[0] = 0x817fde60u;
                            a.r[1] = 0x817fde6cu;
                            (void)tc_call(0x801dc394u, &a);
                            r5 = rd32(0x817fde64u);
                            r0 = rd32(0x817fde68u);
                            wr32(0x817fde48u, rd32(0x817fde60u));
                            wr32(0x817fde4cu, r5);
                            wr32(0x817fde50u, r0);
                            a.r[0] = r25;
                            a.r[1] = 0x817fde48u;
                            (void)tc_call(0x801582b4u, &a);
                        }
                    }
                } else {
                    r25 = rd32(r30);
                    r26 = rd32(r25);
                    if (r26 != 0u) {
                        a.r[0] = r26;
                        r3 = tc_call(0x80320fe4u, &a);
                        if (r3 != 0u) {
                            a.r[0] = r26;
                            (void)tc_call(0x80157e6cu, &a);
                        }
                    }
                    r3 = rd32(r25);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x80320fe4u, &a);
                        if (r3 != 0u) {
                            a.r[0] = rd32(r25);
                            (void)tc_call(0x80157f30u, &a);
                        }
                    }
                    wr32(r25, 0u);
                    wr32(r25 + 4u, 0xffffffffu);
                    wrf32d(r25 + 8u, f28);
                    wrf32d(r25 + 0xcu, f29);
                    wrf32d(r25 + 0x10u, f30);
                    wr32(r25 + 0x14u, 0u);
                }
            }
            r31 = r31 + 1u;
            r30 = r30 + 4u;
        } while (r31 < 4u);
        a.r[0] = param_r3;
        (void)tc_call(0x8006f778u, &a);
        f2 = (f64)rdf32(param_r3 + 0x190u);
        f1 = (f64)rdf32(param_r3 + 0x188u);
        f0 = (f64)(f32)(f2 + (f64)rdf32(param_r3 + 0x18cu));
        if ((f1 > f0) || (f1 == f0)) {
            r3 = rd32(param_r3 + 0x148u);
            if ((s32)r3 >= 0) {
                if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
                    a.f[0] = (f64)rdf32(param_r3 + 0x14cu);
                    a.r[0] = r3;
                    a.r[1] = param_r3 + 8u;
                    a.r[2] = 0x804890c8u;
                    a.r[3] = 0x804b15c0u;
                    r3 = tc_call(0x800d782cu, &a);
                    f1 = tc_lastf();
                    f2 = 0.0;
                    r25 = r3;
                } else {
                    r0 = rd32(param_r3 + 0xcu);
                    wr32(0x817fde2cu, rd32(param_r3 + 8u));
                    wr32(0x817fde30u, r0);
                    wr32(0x817fde34u, rd32(param_r3 + 0x10u));
                    a.f[0] = (f64)rdf32(param_r3 + 0x14cu);
                    a.r[0] = rd32(param_r3 + 0x148u);
                    a.r[1] = 0x817fde2cu;
                    a.r[2] = 0x804890c8u;
                    a.r[3] = 0x804b15c0u;
                    r3 = tc_call(0x800d7758u, &a);
                    f1 = tc_lastf();
                    f2 = 0.0;
                    r25 = r3;
                }
                if (r3 != 0u) {
                    f1 = (f64)rdf32(0x8057622cu);
                    if (f1 != (f64)rdf32(param_r3 + 0x150u)) {
                        r3 = tc_call(0x8003c9c8u, &a);
                        f2 = rdf64(0x80576210u);
                        wr32(0x817fdf84u, r3 ^ 0x80000000u);
                        f0 = (f64)(f32)px_fdiv((f64)rdf32(param_r3 + 0x150u), (f64)(f32)(rdf64(0x817fdf80u) - f2));
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        wrf64(0x817fdf90u, f0);
                        a.r[0] = r25;
                        a.r[1] = rd32(0x817fdf94u);
                        f1 = tc_callf(0x80157f28u, &a);
                        f2 = 0.0;
                    }
                    wr32(r25 + 0x20u, 0xffffffffu);
                    wr32(r25 + 0x24u, 0u);
                    wr32(param_r3 + 0x144u, r25);
                }
            }
            if (rd32(param_r3 + 0x1a8u) != 0u) {
                a.r[0] = param_r3;
                f1 = tc_callf(0x8006ff00u, &a);
                f2 = 0.0;
            }
            r12 = rd32(param_r3 + 0x1b0u);
            if (r12 != 0u) {
                a.r[0] = param_r3;
                a.r[1] = rd32(param_r3 + 0x1b8u);
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                (void)tc_call(r12, &a);
            }
            r3 = rd32(param_r3 + 0xe4u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(param_r3 + 0xe4u);
                    (void)tc_call(0x80157f30u, &a);
                }
            }
            r3 = rd32(param_r3 + 0xfcu);
            f2 = (f64)rdf32(0x80576200u);
            f1 = (f64)rdf32(0x8057621cu);
            f0 = (f64)rdf32(0x80576204u);
            wr32(param_r3 + 0xe4u, 0u);
            wr32(param_r3 + 0xe8u, 0xffffffffu);
            wrf32d(param_r3 + 0xecu, f2);
            wrf32d(param_r3 + 0xf0u, f1);
            wrf32d(param_r3 + 0xf4u, f0);
            wr32(param_r3 + 0xf8u, 0u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(param_r3 + 0xfcu);
                    (void)tc_call(0x80157f30u, &a);
                }
            }
            r3 = rd32(param_r3 + 0x114u);
            f2 = (f64)rdf32(0x80576200u);
            f1 = (f64)rdf32(0x8057621cu);
            f0 = (f64)rdf32(0x80576204u);
            wr32(param_r3 + 0xfcu, 0u);
            wr32(param_r3 + 0x100u, 0xffffffffu);
            wrf32d(param_r3 + 0x104u, f2);
            wrf32d(param_r3 + 0x108u, f1);
            wrf32d(param_r3 + 0x10cu, f0);
            wr32(param_r3 + 0x110u, 0u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(param_r3 + 0x114u);
                    (void)tc_call(0x80157f30u, &a);
                }
            }
            r3 = rd32(param_r3 + 0x144u);
            f2 = (f64)rdf32(0x80576200u);
            f1 = (f64)rdf32(0x8057621cu);
            f0 = (f64)rdf32(0x80576204u);
            wr32(param_r3 + 0x114u, 0u);
            wr32(param_r3 + 0x118u, 0xffffffffu);
            wrf32d(param_r3 + 0x11cu, f2);
            wrf32d(param_r3 + 0x120u, f1);
            wrf32d(param_r3 + 0x124u, f0);
            wr32(param_r3 + 0x128u, 0u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(param_r3 + 0x144u);
                    (void)tc_call(0x80157f30u, &a);
                }
            }
            f0 = (f64)rdf32(0x8057621cu);
            f4 = (f64)rdf32(0x80576204u);
            wrf32d(param_r3 + 0x14cu, (f64)rdf32(0x80576200u));
            f3 = (f64)rdf32(0x805761f0u);
            wrf32d(param_r3 + 0x150u, f0);
            f2 = (f64)rdf32(0x80576220u);
            wr32(param_r3 + 0x144u, 0u);
            f1 = (f64)rdf32(0x80576224u);
            wr32(param_r3 + 0x148u, 0xffffffffu);
            f0 = (f64)rdf32(0x80576228u);
            wrf32d(param_r3 + 0x154u, f4);
            wr32(param_r3 + 0x158u, 0u);
            r4 = rd32(0x804890d8u);
            r3 = rd32(0x804890dcu);
            wr32(0x817fde20u, rd32(0x804890d4u));
            wr32(0x817fde24u, r4);
            f6 = (f64)rdf32(0x817fde20u);
            wr32(0x817fde28u, r3);
            f5 = (f64)rdf32(0x817fde24u);
            f4 = (f64)rdf32(0x817fde28u);
            wrf32d(param_r3 + 0x174u, f6);
            wrf32d(param_r3 + 0x178u, f5);
            wrf32d(param_r3 + 0x17cu, f4);
            r4 = rd32(0x804890ccu);
            r3 = rd32(0x804890d0u);
            wr32(0x817fde14u, rd32(0x804890c8u));
            wr32(0x817fde18u, r4);
            f6 = (f64)rdf32(0x817fde14u);
            wr32(0x817fde1cu, r3);
            f5 = (f64)rdf32(0x817fde18u);
            f4 = (f64)rdf32(0x817fde1cu);
            wrf32d(param_r3 + 0x15cu, f6);
            wrf32d(param_r3 + 0x160u, f5);
            wrf32d(param_r3 + 0x164u, f4);
            r4 = rd32(0x804890ccu);
            r3 = rd32(0x804890d0u);
            wr32(0x817fde08u, rd32(0x804890c8u));
            wr32(0x817fde0cu, r4);
            f6 = (f64)rdf32(0x817fde08u);
            wr32(0x817fde10u, r3);
            f5 = (f64)rdf32(0x817fde0cu);
            f4 = (f64)rdf32(0x817fde10u);
            wrf32d(param_r3 + 0x168u, f6);
            wrf32d(param_r3 + 0x16cu, f5);
            wrf32d(param_r3 + 0x170u, f4);
            wr32(param_r3 + 0x180u, 0u);
            wrf32d(param_r3 + 0x184u, f3);
            wrf32d(param_r3 + 0x188u, f3);
            wrf32d(param_r3 + 0x18cu, f3);
            wrf32d(param_r3 + 0x190u, f2);
            wr32(param_r3 + 0x1a4u, 0u);
            wr32(param_r3 + 0x1a8u, 1u);
            wrf32d(param_r3 + 0x194u, f1);
            wr32(param_r3 + 0x1acu, 0u);
            wrf32d(param_r3 + 0x20u, f0);
            wr32(param_r3 + 0x1a0u, 0u);
            wr32(param_r3 + 0x19cu, 0u);
            wr32(param_r3 + 0x1b4u, 0u);
            wr32(param_r3 + 0x1b0u, 0u);
            wr32(param_r3 + 0x1b8u, 0u);
            wr32(param_r3 + 0x1bcu, 0xffffffffu);
            wr32(param_r3 + 0x1c0u, 0xffffffffu);
        }
    }
    return;
}
