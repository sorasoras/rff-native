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

u32 fn_8015b454(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdfd8u, (u32)param_2);
    a.r[0] = 0x817fdfd8u;
    a.r[1] = param_3;
    r3 = tc_call(0x8015b3a8u, &a);
    r4 = rd32(0x817fdfd8u);
    c0lt = (s32)r4 < 276;
    if (r4 != 0x114u) {
        if (!c0lt) {
            c0lt = (s32)r4 < 301;
            if (r4 == 0x12du) {
                r3 = rd32(r3);
                wr32((u32)param_1 + 0x7acu, r3);
                wr32((u32)param_1 + 0x7b0u, 1u);
                r3 = 0u;
                return r3;
            }
            if (!c0lt) {
                if ((s32)r4 < 389 && (s32)r4 >= 387) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = r4;
                    a.r[2] = r3;
                    a.r[3] = param_4;
                    r3 = tc_call(0x8015b2c8u, &a);
                    return r3;
                }
            } else if (r4 == 0x127u) {
                r0 = rd32((u32)param_1 + 0x87cu);
                if (r0 != 0u) {
                    if (r0 != 1u) {
                        r3 = 0u;
                        return r3;
                    }
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3 + 0x30u);
                    a.r[0] = r3;
                    a.r[1] = 1u;
                    (void)tc_call(0x8015d874u, &a);
                    wr32((u32)param_1 + 0x87cu, 0u);
                    r3 = 0u;
                    return r3;
                }
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8015a314u, &a);
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0x30u);
                a.r[0] = r3;
                a.r[1] = 1u;
                (void)tc_call(0x8015d874u, &a);
                (void)tc_call(0x80097da4u, &a);
                (void)tc_call(0x8015cef0u, &a);
                a.r[0] = 0x804b9e14u;
                a.r[1] = 1u;
                (void)tc_call(0x8011ea94u, &a);
                r3 = 1u;
                wr32((u32)param_1 + 0x87cu, 1u);
                return r3;
            }
        } else {
            c0lt = (s32)r4 < 139;
            if (r4 == 0x8bu) {
                r5 = rd32(r3 + 4u);
                r6 = rd32(r3 + 8u);
                wr32(0x817fdfe4u, rd32(r3 + 0xcu) ^ 0x80000000u);
                r5 = r5 & 0xffffu;
                f1 = rdf64(0x80574980u);
                r6 = r6 & 0xffu;
                wr32(0x817fdfe0u, 0x43300000u);
                r4 = rd32(r3);
                f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfe0u) - f1), (f64)rdf32(0x80571118u));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wrf64(0x817fdfe8u, f0);
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = rd32(0x817fdfecu);
                (void)tc_call(0x80159bfcu, &a);
                r3 = 0u;
                return r3;
            }
            if (!c0lt) {
                c0lt = (s32)r4 < 141;
                if (r4 == 0x8du) {
                    r4 = rd32(r3 + 4u);
                    wr32(0x817fdfe0u, 0x43300000u);
                    f1 = rdf64(0x80574980u);
                    wr32(0x817fdfe4u, r4 ^ 0x80000000u);
                    f1 = (f64)(f32)(rdf64(0x817fdfe0u) - f1);
                    a.f[0] = f1;
                    a.r[0] = (u32)param_1;
                    a.r[1] = rd32(r3);
                    (void)tc_call(0x8015b950u, &a);
                    r3 = 0u;
                    return r3;
                }
                if (c0lt) {
                    r3 = rd32(r3);
                    wr32(0x817fdfe0u, 0x43300000u);
                    f1 = rdf64(0x80574980u);
                    wr32(0x817fdfe4u, r3 ^ 0x80000000u);
                    wrf32d((u32)param_1 + 0x7b4u, (f64)(f32)(rdf64(0x817fdfe0u) - f1));
                    r3 = 0u;
                    return r3;
                }
            } else {
                c0lt = (s32)r4 < 1;
                if (r4 == 1u) {
                    r4 = rd32(r3);
                    if ((s32)r4 >= 0) {
                        a.r[0] = (u32)param_1;
                        a.r[1] = r4;
                        (void)tc_call(0x8015a2b8u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x8015a314u, &a);
                    r3 = 0u;
                    return r3;
                }
                if (c0lt && (s32)r4 >= 0) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = rd32(r3);
                    a.r[2] = rd32(r3 + 4u) & 0xffffu;
                    a.r[3] = rd32(r3 + 8u) & 0xffu;
                    a.r[4] = 0xffffffffu;
                    (void)tc_call(0x80159bfcu, &a);
                    r3 = 0u;
                    return r3;
                }
            }
        }
        r3 = 2u;
        return r3;
    }
    r3 = rd32(r3);
    wr32((u32)param_1 + 0x7acu, r3);
    wr32((u32)param_1 + 0x7b0u, 0u);
    r3 = 0u;
    return r3;
}
