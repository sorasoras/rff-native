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

void fn_8031878c(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    u32 r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r31 = (u32)rd8(param_1 + 3u);
    r29 = (u32)rd8(r31 - 0x7fc627b0u);
    r30 = (u32)rd8(r31 - 0x7fc626b0u);
    r27 = param_2;
    if (r29 != 0u) {
        r8 = (u32)rd16(param_1 + 8u);
        r28 = param_1 + 0x20u;
        do {
            if (r8 > 1u) {
                r26 = (u32)rd8(param_1 + 4u);
                r7 = r26 & 0x20u;
                if (r7 != 0u || (u32)rd8(param_1 + 5u) > 1u) {
                    if ((r26 & 0x80u) != 0u) {
                        r4 = (u32)param_4 - 1u;
                        if (param_3 < r4) {
                            r25 = r8 - 1u;
                            r0 = r25 ^ 0x80000000u;
                            f5 = rdf64(0x805778b0u);
                            f3 = rdf64(0x805778b8u);
                            f31 = (f64)(f32)((f64)(f32)(px_b2f((u64)rd8(param_1 + 5u) | 0x4330000000000000ull) - f5) * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f5)));
                            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f5) * f31), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3));
                            r3 = tc_call(0x802558e4u, &a);
                            f2 = rdf64(0x805778b0u);
                            f2 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f2) * f31) - (f64)(f32)(px_b2f((u64)(r3 * r25) | 0x4330000000000000ull) - f2));
                            if ((r26 & 0x40u) != 0u) {
                                r3 = r3 & 1u;
                                f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)(r25 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805778b8u)) - f2);
                                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                                r0 = (u32)px_f2b(f0);
                                if (r3 == 0u) {
                                    r0 = (u32)px_f2b(px_ctiw(f2, ppc_fctiwz(f2)));
                                }
                            } else {
                                r0 = (u32)px_f2b(px_ctiw(f2, ppc_fctiwz(f2)));
                            }
                        } else {
                            if ((r26 & 0x40u) != 0u) {
                                r0 = (u32)rd8(param_1 + 5u);
                                r3 = (r0 >> 0x1fu) & 1u;
                                r0 = r0 & 1u;
                                r0 = r0 ^ r3;
                                r0 = r0 - r3;
                                if (r0 == 0u) {
                                    r0 = 0u;
                                    break;
                                }
                            }
                            r0 = (r8 - 1u) & 0xffffu;
                        }
                    } else {
                        r6 = r8 - 1u;
                        r4 = ppc_divwu(param_3, r6);
                        if ((r26 & 0x40u) != 0u) {
                            if (r7 == 0u) {
                                r0 = (u32)rd8(param_1 + 5u);
                                if (r4 >= r0) {
                                    r3 = (r0 >> 0x1fu) & 1u;
                                    r0 = r0 & 1u;
                                    r0 = r0 ^ r3;
                                    r0 = r0 - r3;
                                    if (r0 != 0u) {
                                        r0 = r6 & 0xffffu;
                                        break;
                                    }
                                    r0 = 0u;
                                    break;
                                }
                            }
                            if ((r4 & 1u) != 0u) {
                                r0 = ((r6 * (r4 + 1u)) - param_3) & 0xffffu;
                            } else {
                                r0 = (param_3 - (r4 * r6)) & 0xffffu;
                            }
                        } else if (r7 != 0u || r4 < (u32)rd8(param_1 + 5u)) {
                            r0 = (param_3 - (r4 * r6)) & 0xffffu;
                        } else {
                            r0 = r6 & 0xffffu;
                        }
                    }
                } else if ((r26 & 0x80u) != 0u) {
                    if ((u32)param_4 != 1u) {
                        r3 = (r8 - 1u) ^ 0x80000000u;
                        f5 = rdf64(0x805778b0u);
                        f3 = rdf64(0x805778b8u);
                        f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f5) * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)((u32)param_4 - 1u) | 0x4330000000000000ull) - f5)));
                        if (f1 > (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3)) {
                            f1 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3);
                        }
                        r0 = (u32)px_f2b(px_ctiw(f1, ppc_fctiwz(f1)));
                    } else {
                        r0 = (r8 - 1u) & 0xffffu;
                    }
                } else {
                    r0 = r8 - 1u;
                    if (param_3 < r0) {
                        r0 = param_3 & 0xffffu;
                    } else {
                        r0 = r0 & 0xffffu;
                    }
                }
            } else {
                r0 = 0u;
            }
        } while (0);
        r0 = r0 & 0xffffu;
        r4 = 1u;
        r0 = r29 * r0;
        r3 = r28 + r0;
        while ((s32)r4 <= (s32)r30) {
            if ((r31 & r4) != 0u) {
                r0 = (u32)rd8(r3);
                r3 = r3 + 1u;
                wr8(r27, (u8)r0);
            }
            r4 = (r4 << 1u) & 0xfffeu;
            r27 = r27 + 1u;
        }
    }
    return;
}
