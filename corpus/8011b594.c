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

u32 fn_8011b594(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    f0 = (f64)rdf32(0x805741f8u);
    wr32(0x817fe004u, 0x817ff000u);
    c0lt = param_2 < 234;
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdfd8u, 0x43300000u);
    wr32(0x817fdfe0u, 0x43300000u);
    wrf32d(0x817fdfd0u, f0);
    wrf32d(0x817fdfccu, f0);
    wrf32d(0x817fdfc8u, f0);
    if ((u32)param_2 != 0xeau) {
        if (!c0lt) {
            c0lt = param_2 < 329;
            if ((u32)param_2 == 0x149u) {
                r3 = 0u;
                return r3;
            }
            if (!c0lt) {
                c0lt = param_2 < 375;
                if ((u32)param_2 == 0x177u) {
                    wr32(0x804b9e08u, 0u);
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3 + 0x4cu);
                    wr32(r3 + 0x28u, 1u);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    if ((u32)param_2 == 0x17bu) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = rd32(param_3);
                        (void)tc_call(0x8010a91cu, &a);
                        r3 = 0u;
                        return r3;
                    }
                } else if ((u32)param_2 == 0x14bu) {
                    r0 = rd32(param_3 + 4u);
                    r3 = rd32(0x804bb728u);
                    wr32(0x817fdfe4u, rd32(param_3) ^ 0x80000000u);
                    r0 = r0 ^ 0x80000000u;
                    f4 = rdf64(0x80574210u);
                    f0 = rdf64(0x817fdfe0u);
                    wr32(0x817fdfdcu, r0);
                    f1 = (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(f0 - f4), (f64)rdf32(0x80574200u)) * (f64)rdf32(0x804bb72cu));
                    f0 = (f64)(f32)((f64)rdf32(0x8057421cu) * (f64)(f32)(rdf64(0x817fdfd8u) - f4));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    wrf64(0x817fdfe8u, f0);
                    r4 = rd32(0x817fdfecu);
                    if (r3 == 0u) {
                        r3 = 0u;
                        return r3;
                    }
                    a.f[0] = f1;
                    a.r[0] = r3;
                    a.r[1] = r4;
                    (void)tc_call(0x802f7194u, &a);
                    r3 = 0u;
                    return r3;
                }
            } else {
                c0lt = param_2 < 302;
                if ((u32)param_2 == 0x12eu) {
                    (void)tc_call(0x8010a5ccu, &a);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    if (param_2 >= 328) {
                        a.r[0] = 0x804b9e14u;
                        a.r[1] = 1u;
                        (void)tc_call(0x8011ea94u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    if (param_2 < 304) {
                        a.r[0] = 0x804bc030u;
                        a.r[1] = 0xffffffffu;
                        (void)tc_call(0x801cadb0u, &a);
                        r3 = 0u;
                        return r3;
                    }
                } else {
                    c0lt = param_2 < 239;
                    if ((u32)param_2 == 0xefu) {
                        r3 = tc_call(0x80097da4u, &a);
                        r3 = rd32(r3 + 0x4cu);
                        if (rd32(r3 + 0x24u) != 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        r3 = tc_call(0x80097da4u, &a);
                        r3 = rd32(r3 + 0x4cu);
                        wr32(r3 + 0x2cu, 1u);
                        r3 = 0u;
                        return r3;
                    }
                    if (c0lt && param_2 >= 238) {
                        a.r[0] = 0x804bc030u;
                        a.r[1] = 0xffffffffu;
                        (void)tc_call(0x801cadb0u, &a);
                        r3 = 0u;
                        return r3;
                    }
                }
            }
        } else {
            c0lt = param_2 < 108;
            if ((u32)param_2 == 0x6cu) {
                r3 = rd32(0x804b9dfcu);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    (void)tc_call(0x802f5fd8u, &a);
                }
                wr32(0x804b9dbcu, 0xffffffffu);
                r3 = 0u;
                return r3;
            }
            if (!c0lt) {
                c0lt = param_2 < 209;
                if ((u32)param_2 == 0xd1u) {
                    f1 = rdf64(0x80574210u);
                    wr32(0x817fdfdcu, rd32(param_3 + 8u) ^ 0x80000000u);
                    wrf32d(0x817fdfc8u, (f64)(f32)(rdf64(0x817fdfd8u) - f1));
                    wr32(0x817fdfe4u, rd32(param_3 + 0xcu) ^ 0x80000000u);
                    wrf32d(0x817fdfccu, (f64)(f32)(rdf64(0x817fdfe0u) - f1));
                    wr32(0x817fdfdcu, rd32(param_3 + 0x10u) ^ 0x80000000u);
                    wrf32d(0x817fdfd0u, (f64)(f32)(rdf64(0x817fdfd8u) - f1));
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = rd32(param_3);
                    a.r[2] = 0x817fdfc8u;
                    (void)tc_call(0x8010a794u, &a);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    if (param_2 >= 233) {
                        r3 = rd32(0x804b9dfcu);
                        f3 = rdf64(0x80574210u);
                        wr32(0x817fdfdcu, rd32(param_3) ^ 0x80000000u);
                        f1 = (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfd8u) - f3), (f64)rdf32(0x80574200u)) * (f64)rdf32(0x804b9e00u));
                        if (r3 == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        a.f[0] = f1;
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x802f7194u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    if (param_2 < 211) {
                        f1 = rdf64(0x80574210u);
                        wr32(0x817fdfe4u, rd32(param_3 + 0xcu) ^ 0x80000000u);
                        wrf32d(0x817fdfc8u, (f64)(f32)(rdf64(0x817fdfe0u) - f1));
                        wr32(0x817fdfdcu, rd32(param_3 + 0x10u) ^ 0x80000000u);
                        wrf32d(0x817fdfccu, (f64)(f32)(rdf64(0x817fdfd8u) - f1));
                        wr32(0x817fdfe4u, rd32(param_3 + 0x14u) ^ 0x80000000u);
                        wrf32d(0x817fdfd0u, (f64)(f32)(rdf64(0x817fdfe0u) - f1));
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = rd32(param_3);
                        a.r[2] = 0x817fdfc8u;
                        (void)tc_call(0x8010a794u, &a);
                        a.r[0] = param_1;
                        a.r[1] = rd32(param_3);
                        a.r[2] = rd32(param_3 + 4u);
                        (void)tc_call(0x8011b220u, &a);
                        r3 = 0u;
                        return r3;
                    }
                } else {
                    if (param_2 >= 208) {
                        a.r[0] = param_3;
                        (void)tc_call(0x8011b480u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    if (param_2 < 110) {
                        r3 = rd32(0x804b9dfcu);
                        f4 = rdf64(0x80574210u);
                        wr32(0x817fdfdcu, rd32(param_3) ^ 0x80000000u);
                        f2 = (f64)rdf32(0x8057421cu);
                        f1 = (f64)(f32)(rdf64(0x817fdfd8u) - f4);
                        f0 = (f64)rdf32(0x80574200u);
                        wr32(0x817fdfe4u, rd32(param_3 + 4u) ^ 0x80000000u);
                        f1 = (f64)(f32)px_fdiv(f1, f0);
                        f1 = (f64)(f32)(f1 * (f64)rdf32(0x804b9e00u));
                        f0 = (f64)(f32)(f2 * (f64)(f32)(rdf64(0x817fdfe0u) - f4));
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        wrf64(0x817fdfe8u, f0);
                        r4 = rd32(0x817fdfecu);
                        if (r3 == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        a.f[0] = f1;
                        a.r[0] = r3;
                        a.r[1] = r4;
                        (void)tc_call(0x802f7194u, &a);
                        r3 = 0u;
                        return r3;
                    }
                }
            } else {
                c0lt = param_2 < 104;
                if ((u32)param_2 == 0x68u) {
                    a.r[0] = param_1;
                    a.r[1] = rd32(param_3);
                    (void)tc_call(0x8011b288u, &a);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    c0lt = param_2 < 106;
                    if ((u32)param_2 == 0x6au) {
                        if (rd32(0x804b9e64u) == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        r3 = 1u;
                        return r3;
                    }
                    if (!c0lt) {
                        a.f[0] = (f64)rdf32(0x80574218u);
                        a.r[0] = 0x804b9db0u;
                        a.r[1] = rd32(param_3);
                        (void)tc_call(0x8011f1e0u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = rd32(param_3);
                    (void)tc_call(0x8010a924u, &a);
                    r3 = 0u;
                    return r3;
                }
                c0lt = param_2 < 102;
                if ((u32)param_2 != 0x66u) {
                    if (!c0lt) {
                        a.r[0] = rd32(param_3 + 0xcu);
                        a.r[1] = 0x817fdfc8u;
                        (void)tc_call(0x8011b2d8u, &a);
                        a.r[0] = param_1;
                        a.r[1] = rd32(param_3);
                        a.r[2] = rd32(param_3 + 4u);
                        (void)tc_call(0x8011b220u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    if (param_2 >= 101) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = rd32(param_3);
                        (void)tc_call(0x8010a75cu, &a);
                        r3 = 0u;
                        return r3;
                    }
                }
            }
        }
        r3 = 2u;
        return r3;
    }
    wr32(0x804b9e08u, (ppc_cntlzw(rd32(param_3)) >> 5u) & 0x7ffffffu);
    r31 = rd32(param_3);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    wr32(r3 + 0x24u, r31);
    r3 = 0u;
    return r3;
}
