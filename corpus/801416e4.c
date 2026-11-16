#include "tc_rt.h"

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

void fn_801416e4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    c0lt = (s32)param_2 < 354;
    if (param_2 != 0x162u) {
        if (!c0lt) {
            if ((s32)param_2 >= 385) {
                if ((s32)param_2 >= 387) {
                    return;
                }
            } else if (param_2 != 0x176u) {
                return;
            }
        } else {
            c0lt = (s32)param_2 < 320;
            if (param_2 != 0x140u) {
                if (!c0lt) {
                    if (param_2 != 0x15eu) {
                        return;
                    }
                } else {
                    if ((s32)param_2 >= 185) {
                        return;
                    }
                    if ((s32)param_2 < 171) {
                        return;
                    }
                }
            }
        }
    }
    a.r[0] = rd32(param_3);
    r3 = tc_call(0x800a7a44u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r30 = r3;
    if (r3 != 0u) {
        r29 = 0u;
        if ((rd32(r3 + 0x90u) & 7u) != 0u) {
            r29 = r3;
        }
        c0lt = (s32)param_2 < 183;
        if (param_2 == 0xb7u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x801414a0u, &a);
        } else if (!c0lt) {
            c0lt = (s32)param_2 < 354;
            if (param_2 == 0x162u) {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x800842e0u, &a);
            } else if (!c0lt) {
                c0lt = (s32)param_2 < 385;
                if (param_2 == 0x181u) {
                    a.r[0] = param_1;
                    r3 = tc_call(0x80141ef0u, &a);
                    if (r3 != 0u) {
                        wr32(r3, r30);
                        f3 = rdf64(0x80574480u);
                        f2 = (f64)rdf32(0x80574468u);
                        wr32(r3 + 0x1cu, rd32(param_3 + 4u));
                        f1 = (f64)rdf32(0x8057446cu);
                        wrf32d(r3 + 4u, (f64)(f32)(px_b2f((u64)(rd32(param_3 + 8u) ^ 0x80000000u) | 0x4330000000000000ull) - f3));
                        wrf32d(r3 + 8u, (f64)(f32)(px_b2f((u64)(rd32(param_3 + 0xcu) ^ 0x80000000u) | 0x4330000000000000ull) - f3));
                        wrf32d(r3 + 0xcu, (f64)(f32)(px_b2f((u64)(rd32(param_3 + 0x10u) ^ 0x80000000u) | 0x4330000000000000ull) - f3));
                        wrf32d(r3 + 0x10u, (f64)(f32)px_fdiv((f64)(f32)(f2 * (f64)(f32)(px_b2f((u64)(rd32(param_3 + 0x14u) ^ 0x80000000u) | 0x4330000000000000ull) - f3)), f1));
                        wrf32d(r3 + 0x14u, (f64)(f32)px_fdiv((f64)(f32)(f2 * (f64)(f32)(px_b2f((u64)(rd32(param_3 + 0x18u) ^ 0x80000000u) | 0x4330000000000000ull) - f3)), f1));
                        wrf32d(r3 + 0x18u, (f64)(f32)px_fdiv((f64)(f32)(f2 * (f64)(f32)(px_b2f((u64)(rd32(param_3 + 0x1cu) ^ 0x80000000u) | 0x4330000000000000ull) - f3)), f1));
                        a.r[0] = r3;
                        (void)tc_call(0x8014200cu, &a);
                    }
                } else if (!c0lt) {
                    if ((s32)param_2 < 387) {
                        f1 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_3 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574480u)), (f64)rdf32(0x80574478u));
                        if (!(f1 > (f64)rdf32(0x8057447cu))) {
                            wrf32d(r3 + 0xa0u, (f64)rdf32(0x80574454u));
                            wr32(r3 + 0x80u, rd32(r3 + 0x80u) & 0xfdffffffu);
                        } else {
                            wrf32d(r3 + 0xa0u, f1);
                            wr32(r3 + 0x80u, rd32(r3 + 0x80u) | 0x2000000u);
                        }
                    }
                } else if (param_2 == 0x176u && r29 != 0u) {
                    if (rd32(param_3 + 4u) == 0u) {
                        a.r[0] = r29;
                        a.r[1] = 4u;
                        (void)tc_call(0x800ca28cu, &a);
                    } else {
                        a.r[0] = r29;
                        a.r[1] = 4u;
                        (void)tc_call(0x800ca2a8u, &a);
                    }
                }
            } else {
                c0lt = (s32)param_2 < 320;
                if (param_2 == 0x140u) {
                    r3 = r3;
                    a.r[0] = r3;
                    a.r[1] = rd32(param_3 + 4u);
                    (void)tc_call(0x80141548u, &a);
                } else if (!c0lt) {
                    if (param_2 == 0x15eu && r29 != 0u) {
                        a.r[0] = r29;
                        r3 = tc_call(0x800ca270u, &a);
                        r3 = (r3 & 1u) ^ 1u;
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x800a796cu, &a);
                    }
                } else if ((s32)param_2 < 185) {
                    a.r[0] = param_1;
                    a.r[1] = r3;
                    (void)tc_call(0x801415e8u, &a);
                }
            }
        } else {
            c0lt = (s32)param_2 < 176;
            if (param_2 == 0xb0u) {
                f0 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_3 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574480u)), (f64)rdf32(0x80574478u));
                wrf32d(r3 + 0x1cu, f0);
                wrf32d(r3 + 0x20u, f0);
                wrf32d(r3 + 0x24u, f0);
            } else if (!c0lt) {
                c0lt = (s32)param_2 < 180;
                if (param_2 == 0xb4u) {
                    r4 = rd32(param_3 + 4u);
                    r3 = r3;
                    r4 = (((0u - r4) | r4) >> 0x1fu) & 1u;
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    (void)tc_call(rd32(rd32(r30) + 0x4cu), &a);
                } else if (!c0lt) {
                    if ((s32)param_2 >= 182) {
                        r3 = r3;
                        a.r[0] = r3;
                        a.r[1] = 1u;
                        (void)tc_call(0x801414a0u, &a);
                    } else if (r29 != 0u) {
                        a.r[0] = r29;
                        a.r[1] = (ppc_cntlzw(rd32(param_3 + 4u)) >> 5u) & 0x7ffffffu;
                        (void)tc_call(0x800ca2c4u, &a);
                        a.r[0] = r29;
                        a.r[1] = 4u;
                        (void)tc_call(0x800ca28cu, &a);
                    }
                } else {
                    c0lt = (s32)param_2 < 178;
                    if (param_2 == 0xb2u) {
                        wrf32d(r3 + 0x20u, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_3 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574480u)), (f64)rdf32(0x80574478u)));
                    } else if (!c0lt) {
                        wrf32d(r3 + 0x24u, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_3 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574480u)), (f64)rdf32(0x80574478u)));
                    } else {
                        wrf32d(r3 + 0x1cu, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_3 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574480u)), (f64)rdf32(0x80574478u)));
                    }
                }
            } else {
                c0lt = (s32)param_2 < 173;
                if (param_2 == 0xadu) {
                    f2 = (f64)rdf32(0x80574468u);
                    f1 = (f64)(f32)px_fdiv((f64)(f32)(f2 * (f64)(f32)(px_b2f((u64)(rd32(param_3 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574480u))), (f64)rdf32(0x8057446cu));
                    if (!(f2 < f1)) {
                        f0 = (f64)rdf32(0x80574474u);
                        if ((f0 > f1) || (f0 == f1)) {
                            f1 = (f64)(f32)((f64)rdf32(0x80574470u) + f1);
                        }
                    } else {
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80574470u));
                    }
                    wrf32d(r3 + 0x10u, f1);
                } else if (!c0lt) {
                    if ((s32)param_2 >= 175) {
                        r3 = r3;
                        f3 = rdf64(0x80574480u);
                        f2 = (f64)(f32)(px_b2f((u64)(rd32(param_3 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - f3);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80574468u) * f2), (f64)rdf32(0x8057446cu));
                        a.f[1] = f2;
                        a.f[2] = f3;
                        (void)tc_call(rd32(rd32(r30) + 0x24u), &a);
                    } else {
                        r3 = r3;
                        f3 = rdf64(0x80574480u);
                        f2 = (f64)(f32)(px_b2f((u64)(rd32(param_3 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - f3);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80574468u) * f2), (f64)rdf32(0x8057446cu));
                        a.f[1] = f2;
                        a.f[2] = f3;
                        (void)tc_call(rd32(rd32(r30) + 0x24u), &a);
                    }
                } else {
                    c0lt = (s32)param_2 < 171;
                    if (param_2 == 0xabu) {
                        r3 = r3;
                        r5 = rd32(param_3 + 4u) ^ 0x80000000u;
                        r4 = rd32(param_3 + 8u) ^ 0x80000000u;
                        f3 = rdf64(0x80574480u);
                        f1 = (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f3);
                        f2 = (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f3);
                        f3 = (f64)(f32)(px_b2f((u64)(rd32(param_3 + 0xcu) ^ 0x80000000u) | 0x4330000000000000ull) - f3);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = f3;
                        (void)tc_call(rd32(rd32(r30) + 0x20u), &a);
                    } else if (!c0lt) {
                        r12 = rd32(r3);
                        r3 = r3;
                        r12 = rd32(r12 + 0x28u);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        r3 = tc_call(r12, &a);
                        f1 = tc_lastf();
                        f31 = (f64)rdf32(r3 + 8u);
                        a.r[0] = r30;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
                        a.f[0] = (f64)rdf32(r3);
                        a.f[1] = f31;
                        f1 = tc_callf(0x80141470u, &a);
                        f2 = f1;
                        r4 = rd32(param_3 + 4u) ^ 0x80000000u;
                        f3 = rdf64(0x80574480u);
                        f1 = (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f3);
                        f3 = (f64)(f32)(px_b2f((u64)(rd32(param_3 + 8u) ^ 0x80000000u) | 0x4330000000000000ull) - f3);
                        a.r[0] = r30;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = f3;
                        (void)tc_call(rd32(rd32(r30) + 0x20u), &a);
                    }
                }
            }
        }
    }
    return;
}
