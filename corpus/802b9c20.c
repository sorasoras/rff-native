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

void fn_802b9c20(s32 param_1, s32 param_2, u32 param_r8, u32 param_r9)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r8 = param_r8;
    r9 = param_r9;
    r0 = (u32)rd8((u32)param_2 + 0x36u);
    if (r0 == 2u || r0 == 5u || r0 == 8u) {
        f4 = rdf64(0x805773b8u);
        r8 = (u32)param_2 + 0x20u;
        f3 = (f64)rdf32(0x805773c0u);
        r9 = (u32)param_1 + 0xe8u;
        f2 = (f64)rdf32(0x805773c4u);
        r0 = (u32)param_1 + 0xc4u;
        f1 = (f64)rdf32(0x805773c8u);
        do {
            if ((u32)rd16(r8 + 4u) == 0u) {
                wr8(r9 + 8u, 0xffu);
            } else {
                wrf32d(r9, (f64)(f32)((f64)(f32)(f3 * (f64)(f32)(px_b2f((u64)((u32)(s16)rd16(r8) ^ 0x80000000u) | 0x4330000000000000ull) - f4)) - f2));
                wrf32d(r9 + 4u, (f64)(f32)((f64)(f32)(f3 * (f64)(f32)(px_b2f((u64)((u32)(s16)rd16(r8 + 2u) ^ 0x80000000u) | 0x4330000000000000ull) - f4)) - f1));
                wr8(r9 + 8u, 0u);
                wr8(r9 + 9u, 0u);
            }
            r9 = r9 - 0xcu;
            r8 = r8 - 8u;
        } while (r9 >= r0);
    } else {
        r5 = (u32)param_1 + 0xe8u;
        r0 = (u32)param_1 + 0xc4u;
        do {
            wr8(r5 + 8u, 0xffu);
            r5 = r5 - 0xcu;
        } while (r5 >= r0);
    }
    r7 = (u32)param_1 + 0xe8u;
    r6 = (u32)param_1 + 0xc4u;
    r4 = r7;
    for (;;) {
        if ((s32)(s8)rd8(r4 + 8u) < 0) {
            r4 = r4 - 0xcu;
            if (r4 < r6) break;
        } else {
            f1 = (f64)rdf32(r4);
            f0 = (f64)rdf32((u32)param_1 + 0x4f4u);
            if (!(f1 < f0) && f1 != f0) {
                f0 = (f64)rdf32((u32)param_1 + 0x4fcu);
                if (!(f1 > f0) && f1 != f0) {
                    f1 = (f64)rdf32(r4 + 4u);
                    f0 = (f64)rdf32((u32)param_1 + 0x4f8u);
                    if (!(f1 < f0) && f1 != f0) {
                        f0 = (f64)rdf32((u32)param_1 + 0x500u);
                        if (!((f1 > f0) || (f1 == f0))) {
                            r4 = r4 - 0xcu;
                            if (r4 >= r6) continue;
                            break;
                        }
                    }
                }
            }
            wr8(r4 + 8u, (u8)((u32)rd8(r4 + 8u) | 1u));
            r4 = r4 - 0xcu;
            if (r4 < r6) break;
        }
    }
    do {
        if ((u32)(s8)rd8(r6 + 8u) == 0u) {
            r5 = r6 + 0xcu;
            do {
                r4 = (u32)rd8(r5 + 8u);
                if ((u32)(s8)r4 == 0u && (f64)rdf32(r6) == (f64)rdf32(r5) && (f64)rdf32(r6 + 4u) == (f64)rdf32(r5 + 4u)) {
                    wr8(r5 + 8u, (u8)(r4 | 2u));
                }
                r5 = r5 + 0xcu;
            } while (r5 <= r7);
        }
        r6 = r6 + 0xcu;
    } while (r6 < r7);
    r5 = (u32)param_1 + 0xe8u;
    wr16((u32)param_1 + 0x10cu, 0u);
    r0 = (u32)param_1 + 0xc4u;
    do {
        if ((u32)(s8)rd8(r5 + 8u) == 0u) {
            wr16((u32)param_1 + 0x10cu, (u16)((u32)(s16)rd16((u32)param_1 + 0x10cu) + 1u));
        }
        r5 = r5 - 0xcu;
    } while (r5 >= r0);
    f1 = (f64)rdf32((u32)param_1 + 0x54u);
    f0 = (f64)rdf32(0x80570ec4u);
    do {
        if (!(f1 < f0) && f1 != f0) {
            r0 = (u32)(s8)rd8((u32)param_1 + 0x5eu);
            if (r0 == 2u || r0 == 0xfffffffeu) {
                if ((s32)(s16)rd16((u32)param_1 + 0x10cu) >= 2) {
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x802b9104u, &a);
                    r8 = 0u;
                    r9 = 0u;
                    r30 = r3;
                    if ((u32)(s8)r3 != 0u) break;
                }
                if ((s32)(s16)rd16((u32)param_1 + 0x10cu) >= 1) {
                    a.r[0] = (u32)param_1;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    r3 = tc_call(0x802b94e0u, &a);
                    r30 = r3;
                    if ((u32)(s8)r3 != 0u) break;
                }
            } else if (r0 == 1u || r0 == 0xffffffffu) {
                if ((s32)(s16)rd16((u32)param_1 + 0x10cu) >= 2) {
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x802b8f1cu, &a);
                    r8 = 0u;
                    r9 = 0u;
                    r30 = r3;
                    if ((u32)(s8)r3 != 0u) break;
                }
                if ((s32)(s16)rd16((u32)param_1 + 0x10cu) >= 1) {
                    a.r[0] = (u32)param_1;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    r3 = tc_call(0x802b94e0u, &a);
                    r30 = r3;
                    if ((u32)(s8)r3 != 0u) break;
                }
            } else {
                if ((s32)(s16)rd16((u32)param_1 + 0x10cu) >= 2) {
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x802b8f1cu, &a);
                    r30 = r3;
                    if ((u32)(s8)r3 != 0u) break;
                }
                if ((u32)(s16)rd16((u32)param_1 + 0x10cu) == 1u) {
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x802b932cu, &a);
                    r30 = r3;
                    if ((u32)(s8)r3 != 0u) break;
                }
            }
        }
        r30 = 0u;
    } while (0);
    if ((u32)(s8)r30 == 0u) {
        wr8((u32)param_1 + 0x4cau, 0u);
    } else {
        f30 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x100u) - (f64)rdf32((u32)param_1 + 0xf4u));
        f31 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x104u) - (f64)rdf32((u32)param_1 + 0xf8u));
        a.f[0] = (f64)(f32)((f64)(f32)(f30 * f30) + (f64)(f32)(f31 * f31));
        f1 = tc_callf(0x80262ec0u, &a);
        f3 = (f64)(f32)f1;
        f4 = (f64)rdf32((u32)param_1 + 0xb0u);
        f2 = (f64)(f32)px_fdiv((f64)rdf32(0x805773a4u), f3);
        f1 = (f64)rdf32((u32)param_1 + 0x510u);
        f0 = (f64)rdf32((u32)param_1 + 0xb4u);
        c0eq = (u32)rd16((u32)param_1 + 0x4c8u) == 0u;
        wrf32d((u32)param_1 + 0x490u, f3);
        f30 = (f64)(f32)(f30 * f2);
        f31 = (f64)(f32)(f31 * f2);
        wrf32d((u32)param_1 + 0x494u, f30);
        wrf32d((u32)param_1 + 0x49cu, (f64)(f32)(f1 * f2));
        f2 = (f64)(f32)((f64)(f32)(f4 * f30) + (f64)(f32)(f0 * f31));
        wrf32d((u32)param_1 + 0x498u, f31);
        f3 = (f64)(f32)((f64)(f32)(f0 * f30) - (f64)(f32)(f4 * f31));
        wrf32d((u32)param_1 + 0x4b0u, f2);
        wrf32d((u32)param_1 + 0x4b4u, f3);
        if (c0eq) {
            f2 = (f64)(f32)(f2 * (f64)rdf32((u32)param_1 + 0x4b8u));
            f0 = (f64)rdf32(0x80570ec0u);
            f1 = (f64)(f32)(f2 + (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0x4bcu)));
            if ((f1 < f0) || (f1 == f0)) {
                r30 = 0u;
                wr8((u32)param_1 + 0x108u, 1u);
                wr8((u32)param_1 + 0xfcu, 1u);
            }
        }
        if ((u32)rd8((u32)param_1 + 0x5eu) != 2u || (u32)(s8)r30 != 2u) {
            wr8((u32)param_1 + 0x4cau, 0u);
        } else {
            r3 = (u32)rd8((u32)param_1 + 0x4cau);
            if (r3 != 0xc8u) {
                wr8((u32)param_1 + 0x4cau, (u8)(r3 + 1u));
            } else {
                wrf32d((u32)param_1 + 0x4a0u, (f64)rdf32((u32)param_1 + 0x490u));
            }
        }
    }
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)(s8)r30;
    (void)tc_call(0x802b9654u, &a);
    return;
}
