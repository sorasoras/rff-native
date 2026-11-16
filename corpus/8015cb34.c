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

void fn_8015cb34(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    c0lt = (s32)param_2 < 155;
    if (param_2 == 0x9bu) {
        f1 = rdf64(0x805749c8u);
        wrf32d(param_1 + 0x49cu, (f64)(f32)(px_b2f((u64)(rd32(param_3) ^ 0x80000000u) | 0x4330000000000000ull) - f1));
        wrf32d(param_1 + 0x4a0u, (f64)(f32)(px_b2f((u64)(rd32(param_3 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - f1));
    } else if (!c0lt) {
        c0lt = (s32)param_2 < 240;
        if (param_2 == 0xf0u) {
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x44u);
            wr32(r3 + 0x49cu, 1u);
        } else if (!c0lt) {
            c0lt = (s32)param_2 < 359;
            if (param_2 == 0x167u) {
                wr32(param_1 + 0x4a8u, 1u);
                wr32(param_1 + 0x4b0u, 0u);
            } else if (c0lt && param_2 == 0x13bu) {
                f0 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_3) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805749c8u)), (f64)rdf32(0x80571118u));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wr32(param_1 + 0x4a4u, (u32)px_f2b(f0));
            }
        } else {
            c0lt = (s32)param_2 < 187;
            if (param_2 == 0xbbu) {
                wr32(param_1 + 0x478u, rd32(param_3));
            } else if (!c0lt) {
                if ((s32)param_2 < 189) {
                    wr32(param_1 + 0x474u, 1u);
                }
            } else if ((s32)param_2 >= 186) {
                wrf32d(param_1 + 0x47cu, (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805749e4u) * (f64)(f32)px_fdiv((f64)rdf32(0x805749acu), (f64)rdf32(0x80571118u))), (f64)(f32)(px_b2f((u64)(rd32(param_3) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805749c8u))));
            } else if ((s32)param_2 < 157) {
                f1 = rdf64(0x805749c8u);
                wrf32d(param_1 + 0x494u, (f64)(f32)(px_b2f((u64)(rd32(param_3) ^ 0x80000000u) | 0x4330000000000000ull) - f1));
                wrf32d(param_1 + 0x498u, (f64)(f32)(px_b2f((u64)(rd32(param_3 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - f1));
            }
        }
    } else {
        c0lt = (s32)param_2 < 5;
        if (param_2 == 5u) {
            r3 = tc_call(0x80097da4u, &a);
            wr32(rd32(r3 + 0x44u) + 0x49cu, 4u);
            wr32(param_1 + 0x4acu, rd32(param_3));
            wr32(param_1 + 0x484u, 0xffffffffu);
            a.r[0] = 0x804b9e14u;
            a.r[1] = 1u;
            (void)tc_call(0x8011ea94u, &a);
        } else {
            if (!c0lt) {
                c0lt = (s32)param_2 < 95;
                if (param_2 == 0x5fu) {
                    wr32(param_1 + 0x480u, rd32(param_3));
                    return;
                }
                if (!c0lt) {
                    if (param_2 == 0x8eu) {
                        f1 = tc_callf(0x800d339cu, &a);
                        wrf32d(param_1 + 0x490u, (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_3) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805749c8u)), (f64)rdf32(0x805749e0u)) * f1));
                        return;
                    }
                    return;
                }
                if ((s32)param_2 >= 7) {
                    return;
                }
            } else {
                c0lt = (s32)param_2 < -3;
                if (param_2 == 0xfffffffdu) {
                    r3 = tc_call(0x80097da4u, &a);
                    wr32(rd32(r3 + 0x44u) + 0x49cu, 3u);
                    wr32(param_1 + 0x4acu, rd32(param_3));
                    wr32(param_1 + 0x484u, 0xffffffffu);
                    a.r[0] = 0x804b9e14u;
                    a.r[1] = 1u;
                    (void)tc_call(0x8011ea94u, &a);
                    return;
                }
                if (!c0lt) {
                    if (param_2 == 3u) {
                        a.r[0] = param_1;
                        a.r[1] = 1u;
                        (void)tc_call(0x8015d874u, &a);
                        (void)tc_call(0x8015cef0u, &a);
                        a.r[0] = 0x804b9e14u;
                        a.r[1] = 1u;
                        (void)tc_call(0x8011ea94u, &a);
                        return;
                    }
                    return;
                }
                if ((s32)param_2 < -4) {
                    return;
                }
            }
            r30 = rd32(param_1 + 0x46cu);
            a.r[0] = r30;
            r3 = tc_call(0x800d50c4u, &a);
            if (r3 != 0u) {
                r29 = rd32(param_1 + 0x484u);
                if (param_2 != 0xfffffffcu) {
                    if ((s32)r29 < 0) {
                        a.r[0] = r30;
                        r3 = tc_call(0x800d56bcu, &a);
                        r29 = r3;
                    }
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = r29;
                    a.r[2] = 0u;
                    (void)tc_call(0x800a3220u, &a);
                } else {
                    wr32(param_3, r29);
                }
                a.r[0] = param_1;
                a.r[1] = 1u;
                (void)tc_call(0x8015d874u, &a);
            }
        }
    }
    return;
}
