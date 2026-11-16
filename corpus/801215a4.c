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

u32 fn_801215a4(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    c0lt = param_2 < 206;
    if ((u32)param_2 != 0xceu) {
        if (!c0lt) {
            c0lt = param_2 < 313;
            if ((u32)param_2 == 0x139u) {
                a.r[0] = 0x804beaa0u;
                a.r[1] = 0xffffffffu;
                a.r[2] = 0x20u;
                (void)tc_call(0x8000443cu, &a);
                r3 = 0u;
                return r3;
            }
            if (!c0lt) {
                if (param_2 < 315) {
                    r0 = rd32(param_3);
                    if ((s32)r0 >= 8) {
                        r3 = 0u;
                        return r3;
                    }
                    if ((s32)r0 < 0) {
                        r3 = 0u;
                        return r3;
                    }
                    r0 = (r0 << 2u) & 0xfffffffcu;
                    wr32(r0 - 0x7fb41560u, rd32(param_3 + 4u));
                    r3 = 0u;
                    return r3;
                }
            } else {
                c0lt = param_2 < 293;
                if ((u32)param_2 == 0x125u) {
                    (void)tc_call(0x80073aa8u, &a);
                    r3 = 0u;
                    return r3;
                }
                if (c0lt && param_2 >= 292) {
                    (void)tc_call(0x80073aa0u, &a);
                    r3 = 0u;
                    return r3;
                }
            }
        } else {
            c0lt = param_2 < 130;
            if ((u32)param_2 == 0x82u) {
                r3 = rd32(0x8057110cu);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                wr32(r3 + 0x18u, 1u);
                r3 = 0u;
                return r3;
            }
            if (!c0lt) {
                if (param_2 < 132) {
                    r3 = rd32(0x8057110cu);
                    if (r3 == 0u) {
                        r3 = 0u;
                        return r3;
                    }
                    wr32(r3 + 0x18u, 0u);
                    r3 = 0u;
                    return r3;
                }
            } else if ((u32)param_2 == 0x4cu) {
                r3 = rd32(0x8057110cu);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                a.r[0] = r3;
                a.r[1] = rd32(param_3);
                a.r[2] = rd32(param_3 + 4u);
                (void)tc_call(0x8005d3f8u, &a);
                f0 = (f64)(f32)((f64)rdf32(0x805742d8u) * (f64)(f32)px_fdiv((f64)rdf32(0x805742dcu), (f64)rdf32(0x80571118u)));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 8u);
                wr32(r3 + 0x6cu, (u32)px_f2b(f0));
                r3 = 0u;
                return r3;
            }
        }
        r3 = 2u;
        return r3;
    }
    r31 = rd32(param_3);
    r30 = rd32(param_3 + 4u);
    r29 = rd32(param_3 + 8u);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x18u);
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = r30;
    a.r[3] = r29;
    r3 = tc_call(0x801a6360u, &a);
    r29 = r3 & 0xffffu;
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    r3 = tc_call(0x800a2d40u, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = r29;
    (void)tc_call(0x8009bf04u, &a);
    r3 = 0u;
    return r3;
}
