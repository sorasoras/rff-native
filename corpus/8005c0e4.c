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

void fn_8005c0e4(u32 param_1, s32 param_2)
{
    u32 c1lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r29 = 0, r30 = 0;
    f64 f3 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 == 2u || (u32)param_2 == 1u) {
        a.f[0] = (f64)rdf32(0x80572418u);
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = 1u;
        (void)tc_call(0x8005bf90u, &a);
    } else {
        r5 = (u32)rd8(0x80492821u);
        r7 = (u32)rd8(0x80492824u);
        r6 = (u32)rd8(0x80492825u);
        r4 = ((r5 << 2u) & 0xfffffffcu) + r5 - 0x7fcb0288u;
        r8 = (u32)rd8(r4 + 4u);
        r5 = (u32)rd8(r4 + 3u);
        r30 = (u32)rd8(r4 + 2u);
        r29 = (u32)rd8(r4 + 1u);
        r0 = (u32)rd8(r4);
        if (r7 >= r8) {
            c1lt = r7 < r5;
            if (c1lt) {
                if (r7 >= r0) {
                    if (r7 >= r29) {
                        if (r7 >= r30) {
                            if (!c1lt) {
                                return;
                            }
                            r5 = (r5 - r30) * 0x3cu;
                            r0 = r5 - (r6 + ((r7 - r30) * 0x3cu));
                            if (r0 >= 0x1eu) {
                                a.f[0] = (f64)rdf32(0x80572418u);
                                a.r[0] = param_1;
                                a.r[1] = 2u;
                                a.r[2] = 3u;
                                (void)tc_call(0x8005bf90u, &a);
                                return;
                            }
                            a.f[0] = (f64)(f32)((f64)rdf32(0x805723e8u) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805723c8u)), (f64)rdf32(0x80572428u)));
                            a.r[0] = param_1;
                            a.r[1] = 2u;
                            a.r[2] = 3u;
                            (void)tc_call(0x8005bf90u, &a);
                            return;
                        }
                        f3 = rdf64(0x805723c8u);
                        a.f[0] = ppc_fmadds((f64)rdf32(0x805723d8u), (f64)(f32)(px_b2f((u64)(r7 - r29) | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f3));
                        r3 = tc_call(0x802558e4u, &a);
                        r0 = r30 - r29;
                        r30 = r3;
                        a.f[0] = (f64)(f32)((f64)rdf32(0x805723d8u) * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805723c8u)));
                        r3 = tc_call(0x802558e4u, &a);
                        r0 = r3 - r30;
                        if (r0 >= 0x1eu) {
                            a.f[0] = (f64)rdf32(0x80572418u);
                            a.r[0] = param_1;
                            a.r[1] = 1u;
                            a.r[2] = 2u;
                            (void)tc_call(0x8005bf90u, &a);
                            return;
                        }
                        a.f[0] = (f64)(f32)((f64)rdf32(0x805723e8u) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805723c8u)), (f64)rdf32(0x80572428u)));
                        a.r[0] = param_1;
                        a.r[1] = 1u;
                        a.r[2] = 2u;
                        (void)tc_call(0x8005bf90u, &a);
                        return;
                    }
                    r4 = r7 - r0;
                    r0 = r29 - r0;
                    r4 = r4 * 0x3cu;
                    r0 = (r0 * 0x3cu) - (r6 + r4);
                    if (r0 >= 0x1eu) {
                        a.f[0] = (f64)rdf32(0x80572418u);
                        a.r[0] = param_1;
                        a.r[1] = 0u;
                        a.r[2] = 1u;
                        (void)tc_call(0x8005bf90u, &a);
                        return;
                    }
                    a.f[0] = (f64)(f32)((f64)rdf32(0x805723e8u) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805723c8u)), (f64)rdf32(0x80572428u)));
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    a.r[2] = 1u;
                    (void)tc_call(0x8005bf90u, &a);
                    return;
                }
                r0 = r0 - r8;
                r0 = (r0 * 0x3cu) - (r6 + ((r7 - r8) * 0x3cu));
                if (r0 >= 0x1eu) {
                    a.f[0] = (f64)rdf32(0x80572418u);
                    a.r[0] = param_1;
                    a.r[1] = 4u;
                    a.r[2] = 0u;
                    (void)tc_call(0x8005bf90u, &a);
                    return;
                }
                a.f[0] = (f64)(f32)((f64)rdf32(0x805723e8u) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805723c8u)), (f64)rdf32(0x80572428u)));
                a.r[0] = param_1;
                a.r[1] = 4u;
                a.r[2] = 0u;
                (void)tc_call(0x8005bf90u, &a);
                return;
            }
        }
        if (r7 >= r8) {
            r3 = r7 - r5;
        } else {
            r3 = r7 + (0x18u - r5);
        }
        r3 = r3 * 0x3cu;
        r5 = (r8 + 0x18u - r5) * 0x3cu;
        r0 = r5 - (r6 + r3);
        if (r0 >= 0x1eu) {
            a.f[0] = (f64)rdf32(0x80572418u);
            a.r[0] = param_1;
            a.r[1] = 3u;
            a.r[2] = 4u;
            (void)tc_call(0x8005bf90u, &a);
        } else {
            a.f[0] = (f64)(f32)((f64)rdf32(0x805723e8u) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x805723c8u)), (f64)rdf32(0x80572428u)));
            a.r[0] = param_1;
            a.r[1] = 3u;
            a.r[2] = 4u;
            (void)tc_call(0x8005bf90u, &a);
        }
    }
    return;
}
