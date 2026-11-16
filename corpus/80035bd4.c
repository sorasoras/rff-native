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

void fn_80035bd4(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0u;
    (void)tc_call(0x80043c20u, &a);
    if ((u32)rd8(0x803a3e8bu) != 0u) {
        if ((u32)(s8)rd8(0x803a3e88u) == 0u) {
            r3 = tc_call(0x80035df4u, &a);
            if (r3 == 0u) {
                return;
            }
        }
        r3 = tc_call(0x802302b4u, &a);
        r0 = (u32)(s8)rd8(0x803a3e89u);
        c0lt = (s32)r0 < 2;
        f3 = (f64)(f32)(px_b2f((u64)ppc_divwu(r3 - rd32(0x803a3e84u), (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) | 0x4330000000000000ull) - rdf64(0x80571ed0u));
        do {
            if (r0 == 2u) {
                f0 = (f64)rdf32(0x80571ec8u);
                if ((f3 > f0) || (f3 == f0)) {
                    r3 = tc_call(0x802302b4u, &a);
                    wr32(0x803a3e84u, r3);
                    wr8(0x803a3e89u, 3u);
                }
            } else if (!c0lt) {
                if ((s32)r0 < 4) {
                    f2 = (f64)rdf32(0x80571ec4u);
                    f0 = (f64)(f32)((f64)rdf32(0x80571ec0u) * (f64)(f32)px_fdiv((f64)(f32)(f2 - f3), f2));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    wr8(0x803a3e8au, (u8)px_f2b(f0));
                    if ((f3 > f2) || (f3 == f2)) {
                        wr8(0x803a3e8au, 0u);
                        wr8(0x803a3e89u, 0u);
                    }
                }
            } else {
                c0lt = (s32)r0 < 0;
                if (r0 == 0u) {
                    a.r[0] = 0u;
                    r3 = tc_call(0x80043c20u, &a);
                    if ((rd32(r3 + 4u) & 0x8000u) != 0u || (rd32(r3 + 0x14u) & 0x800u) != 0u) {
                        r3 = tc_call(0x80035b50u, &a);
                        if (r3 != 0u) {
                            r3 = tc_call(0x8003c20cu, &a);
                            if (r3 != 0u) {
                                r3 = tc_call(0x80035df4u, &a);
                                if (r3 == 0u) break;
                            }
                        }
                        wr8(0x803a3e89u, 1u);
                        r3 = tc_call(0x802302b4u, &a);
                        wr32(0x803a3e84u, r3);
                        wr8(0x803a3e8au, 0u);
                    }
                } else if (!c0lt) {
                    f2 = (f64)rdf32(0x80571ec4u);
                    f0 = (f64)(f32)((f64)rdf32(0x80571ec0u) * (f64)(f32)px_fdiv(f3, f2));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    wr8(0x803a3e8au, (u8)px_f2b(f0));
                    if ((f3 > f2) || (f3 == f2)) {
                        r3 = tc_call(0x802302b4u, &a);
                        wr32(0x803a3e84u, r3);
                        wr8(0x803a3e89u, 2u);
                        wr8(0x803a3e8au, 0xffu);
                    }
                }
            }
        } while (0);
        a.r[0] = rd32(0x803a3e80u);
        a.r[1] = (u32)rd8(0x803a3e8au);
        (void)tc_call(0x80035958u, &a);
    }
    return;
}
