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

void fn_8005336c(s32 param_1)
{
    u32 c1lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r29 = 0, r30 = 0;
    f64 f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r5 = (u32)rd8(0x80492821u);
    r8 = (u32)rd8(0x80492824u);
    r0 = ((r5 << 2u) & 0xfffffffcu) + r5;
    r5 = (u32)rd8(0x80492825u);
    r3 = r0 - 0x7fcb0288u;
    r6 = (u32)rd8(r3 + 4u);
    r4 = (u32)rd8(r3 + 3u);
    r0 = (u32)rd8(r3);
    r30 = (u32)rd8(r3 + 1u);
    r29 = (u32)rd8(r3 + 2u);
    do {
        if (r8 >= r6) {
            c1lt = r8 < r4;
            if (c1lt) {
                if (r8 >= r0) {
                    if (r8 >= 0xau) {
                        if (r8 >= r29) {
                            if (!c1lt) break;
                            r4 = (r4 - r29) * 0x3cu;
                            r0 = r4 - (r5 + ((r8 - r29) * 0x3cu));
                            if (r0 >= 0x1eu) {
                                a.f[0] = (f64)rdf32(0x805722c0u);
                                a.r[0] = 2u;
                                a.r[1] = 3u;
                                (void)tc_call(0x8005382cu, &a);
                                a.f[0] = (f64)rdf32(0x805722c0u);
                                a.r[0] = 2u;
                                a.r[1] = 3u;
                                (void)tc_call(0x80053974u, &a);
                                a.f[0] = (f64)rdf32(0x805722c0u);
                                a.r[0] = 2u;
                                a.r[1] = 3u;
                                (void)tc_call(0x80053e1cu, &a);
                                break;
                            }
                            f31 = (f64)(f32)((f64)rdf32(0x805722b8u) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805722c8u)), (f64)rdf32(0x805722bcu)));
                            a.f[0] = f31;
                            a.r[0] = 2u;
                            a.r[1] = 3u;
                            (void)tc_call(0x8005382cu, &a);
                            a.f[0] = f31;
                            a.r[0] = 2u;
                            a.r[1] = 3u;
                            (void)tc_call(0x80053974u, &a);
                            a.f[0] = f31;
                            a.r[0] = 2u;
                            a.r[1] = 3u;
                            (void)tc_call(0x80053e1cu, &a);
                            break;
                        }
                        f3 = rdf64(0x805722c8u);
                        a.f[0] = ppc_fmadds((f64)rdf32(0x805722c4u), (f64)(f32)(px_b2f((u64)(r8 - r30) | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f3));
                        r3 = tc_call(0x802558e4u, &a);
                        r0 = r29 - r30;
                        r30 = r3;
                        a.f[0] = (f64)(f32)((f64)rdf32(0x805722c4u) * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805722c8u)));
                        r3 = tc_call(0x802558e4u, &a);
                        r0 = r3 - r30;
                        if (r0 >= 0x1eu) {
                            a.f[0] = (f64)rdf32(0x805722c0u);
                            a.r[0] = 1u;
                            a.r[1] = 2u;
                            (void)tc_call(0x8005382cu, &a);
                            a.f[0] = (f64)rdf32(0x805722c0u);
                            a.r[0] = 1u;
                            a.r[1] = 2u;
                            (void)tc_call(0x80053974u, &a);
                            a.f[0] = (f64)rdf32(0x805722c0u);
                            a.r[0] = 1u;
                            a.r[1] = 2u;
                            (void)tc_call(0x80053e1cu, &a);
                            break;
                        }
                        f31 = (f64)(f32)((f64)rdf32(0x805722b8u) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805722c8u)), (f64)rdf32(0x805722bcu)));
                        a.f[0] = f31;
                        a.r[0] = 1u;
                        a.r[1] = 2u;
                        (void)tc_call(0x8005382cu, &a);
                        a.f[0] = f31;
                        a.r[0] = 1u;
                        a.r[1] = 2u;
                        (void)tc_call(0x80053974u, &a);
                        a.f[0] = f31;
                        a.r[0] = 1u;
                        a.r[1] = 2u;
                        (void)tc_call(0x80053e1cu, &a);
                        break;
                    }
                    r3 = r8 - r0;
                    r0 = r30 - r0;
                    r3 = r3 * 0x3cu;
                    r0 = (r0 * 0x3cu) - (r5 + r3);
                    if (r0 >= 0x1eu) {
                        a.f[0] = (f64)rdf32(0x805722c0u);
                        a.r[0] = 0u;
                        a.r[1] = 1u;
                        (void)tc_call(0x8005382cu, &a);
                        a.f[0] = (f64)rdf32(0x805722c0u);
                        a.r[0] = 0u;
                        a.r[1] = 1u;
                        (void)tc_call(0x80053974u, &a);
                        a.f[0] = (f64)rdf32(0x805722c0u);
                        a.r[0] = 0u;
                        a.r[1] = 1u;
                        (void)tc_call(0x80053e1cu, &a);
                        break;
                    }
                    f31 = (f64)(f32)((f64)rdf32(0x805722b8u) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805722c8u)), (f64)rdf32(0x805722bcu)));
                    a.f[0] = f31;
                    a.r[0] = 0u;
                    a.r[1] = 1u;
                    (void)tc_call(0x8005382cu, &a);
                    a.f[0] = f31;
                    a.r[0] = 0u;
                    a.r[1] = 1u;
                    (void)tc_call(0x80053974u, &a);
                    a.f[0] = f31;
                    a.r[0] = 0u;
                    a.r[1] = 1u;
                    (void)tc_call(0x80053e1cu, &a);
                    break;
                }
                r0 = r0 - r6;
                r0 = (r0 * 0x3cu) - (r5 + ((r8 - r6) * 0x3cu));
                if (r0 >= 0x1eu) {
                    a.f[0] = (f64)rdf32(0x805722c0u);
                    a.r[0] = 4u;
                    a.r[1] = 0u;
                    (void)tc_call(0x8005382cu, &a);
                    a.f[0] = (f64)rdf32(0x805722c0u);
                    a.r[0] = 4u;
                    a.r[1] = 0u;
                    (void)tc_call(0x80053974u, &a);
                    a.f[0] = (f64)rdf32(0x805722c0u);
                    a.r[0] = 4u;
                    a.r[1] = 0u;
                    (void)tc_call(0x80053e1cu, &a);
                    break;
                }
                f31 = (f64)(f32)((f64)rdf32(0x805722b8u) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805722c8u)), (f64)rdf32(0x805722bcu)));
                a.f[0] = f31;
                a.r[0] = 4u;
                a.r[1] = 0u;
                (void)tc_call(0x8005382cu, &a);
                a.f[0] = f31;
                a.r[0] = 4u;
                a.r[1] = 0u;
                (void)tc_call(0x80053974u, &a);
                a.f[0] = f31;
                a.r[0] = 4u;
                a.r[1] = 0u;
                (void)tc_call(0x80053e1cu, &a);
                break;
            }
        }
        if (r8 >= r6) {
            r3 = r8 - r4;
        } else {
            r3 = r8 + (0x18u - r4);
        }
        r3 = r3 * 0x3cu;
        r4 = (r6 + 0x18u - r4) * 0x3cu;
        r0 = r4 - (r5 + r3);
        if (r0 >= 0x1eu) {
            a.f[0] = (f64)rdf32(0x805722c0u);
            a.r[0] = 3u;
            a.r[1] = 4u;
            (void)tc_call(0x8005382cu, &a);
            a.f[0] = (f64)rdf32(0x805722c0u);
            a.r[0] = 3u;
            a.r[1] = 4u;
            (void)tc_call(0x80053974u, &a);
            a.f[0] = (f64)rdf32(0x805722c0u);
            a.r[0] = 3u;
            a.r[1] = 4u;
            (void)tc_call(0x80053e1cu, &a);
        } else {
            f31 = (f64)(f32)((f64)rdf32(0x805722b8u) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805722c8u)), (f64)rdf32(0x805722bcu)));
            a.f[0] = f31;
            a.r[0] = 3u;
            a.r[1] = 4u;
            (void)tc_call(0x8005382cu, &a);
            a.f[0] = f31;
            a.r[0] = 3u;
            a.r[1] = 4u;
            (void)tc_call(0x80053974u, &a);
            a.f[0] = f31;
            a.r[0] = 3u;
            a.r[1] = 4u;
            (void)tc_call(0x80053e1cu, &a);
        }
    } while (0);
    if ((u32)param_1 == 2u || (u32)param_1 == 1u) {
        r0 = rd32(0x805706e8u);
        if (r0 != 0x18u && (r0 < 0x1bu || r0 > 0x1eu) && r0 != 0x39u && (r0 < 0x3bu || r0 > 0x3eu) && r0 != 0x3fu) {
            a.f[0] = (f64)rdf32(0x805722c0u);
            a.r[0] = 1u;
            a.r[1] = 1u;
            (void)tc_call(0x80053974u, &a);
            a.f[0] = (f64)rdf32(0x805722c0u);
            a.r[0] = 1u;
            a.r[1] = 1u;
            (void)tc_call(0x80053e1cu, &a);
        }
    }
    return;
}
