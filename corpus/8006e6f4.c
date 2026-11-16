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

void fn_8006e6f4(u32 param_r3, u32 param_r4, u32 param_r6)
{
    u32 c0lt = 0, c1eq = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r25 = 0, r26 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    r7 = rd32(param_r3 + 0x30u);
    r31 = 0u;
    r30 = 0u;
    r8 = 0u;
    ctr = 2u;
    do {
        if (((((r8 & 0x20u) != 0u) ? 0u : (0x100000u << (r8 & 0x1fu))) & r7) != 0u) {
            c0lt = (s32)r8 < 2;
            if (r8 == 2u) {
                r30 = r30 + (u32)rd8(param_r4 + 2u);
                r31 = r31 + (u32)rd8(param_r3 + 0x2au);
            } else if (!c0lt) {
                if ((s32)r8 < 4) {
                    r30 = r30 + (u32)rd8(param_r4 + 3u);
                    r31 = r31 + (u32)rd8(param_r3 + 0x2bu);
                }
            } else {
                c0lt = (s32)r8 < 0;
                if (r8 == 0u) {
                    r30 = r30 + (u32)rd8(param_r4);
                    r31 = r31 + (u32)rd8(param_r3 + 0x28u);
                } else if (!c0lt) {
                    r30 = r30 + (u32)rd8(param_r4 + 1u);
                    r31 = r31 + (u32)rd8(param_r3 + 0x29u);
                }
            }
        }
        r8 = r8 + 1u;
        if (((((r8 & 0x20u) != 0u) ? 0u : (0x100000u << (r8 & 0x1fu))) & r7) != 0u) {
            c0lt = (s32)r8 < 2;
            if (r8 == 2u) {
                r30 = r30 + (u32)rd8(param_r4 + 2u);
                r31 = r31 + (u32)rd8(param_r3 + 0x2au);
            } else if (!c0lt) {
                if ((s32)r8 < 4) {
                    r30 = r30 + (u32)rd8(param_r4 + 3u);
                    r31 = r31 + (u32)rd8(param_r3 + 0x2bu);
                }
            } else {
                c0lt = (s32)r8 < 0;
                if (r8 == 0u) {
                    r30 = r30 + (u32)rd8(param_r4);
                    r31 = r31 + (u32)rd8(param_r3 + 0x28u);
                } else if (!c0lt) {
                    r30 = r30 + (u32)rd8(param_r4 + 1u);
                    r31 = r31 + (u32)rd8(param_r3 + 0x29u);
                }
            }
        }
        r8 = r8 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    f1 = tc_callf(0x80040a00u, &a);
    r6 = 0u;
    f5 = 0.0;
    r4 = 0x32u;
    r3 = rd32(param_r3 + 0x30u);
    f0 = (f64)(f32)((f64)rdf32(0x805726d0u) * f1);
    r25 = (r3 >> 0x11u) & 1u;
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r29 = (u32)px_f2b(f0);
    if ((r3 & 0x8000u) == 0u) {
        r3 = rd32(param_r3 + 0x2cu);
        if (r3 == 0u || rd32(param_r4 + 8u) == 0u) {
            r4 = 0x64u;
            if (r25 != 0u) {
                r4 = 0xd2u;
            }
        } else {
            a.r[0] = r3;
            a.r[1] = 0x32u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            a.f[0] = (f64)(f32)((f64)rdf32(r3) - (f64)rdf32(param_r4 + 0x10u));
            a.f[1] = (f64)(f32)((f64)rdf32(r3 + 8u) - (f64)rdf32(param_r4 + 0x18u));
            f1 = tc_callf(0x80262c68u, &a);
            r6 = 0u;
            f5 = 0.0;
            f2 = (f64)(f32)f1;
            f1 = (f64)rdf32(0x805726d4u);
            f0 = (f64)rdf32(0x805726d8u);
            while (f2 < f0) {
                f2 = (f64)(f32)(f2 + f1);
            }
            f1 = (f64)rdf32(0x805726d4u);
            f0 = (f64)rdf32(0x805726dcu);
            while (f2 > f0) {
                f2 = (f64)(f32)(f2 - f1);
            }
            f1 = (f64)rdf32(0x805726d4u);
            f2 = (f64)(f32)(f2 - (f64)rdf32(param_r4 + 0xcu));
            f0 = (f64)rdf32(0x805726d8u);
            while (f2 < f0) {
                f2 = (f64)(f32)(f2 + f1);
            }
            f1 = (f64)rdf32(0x805726d4u);
            f0 = (f64)rdf32(0x805726dcu);
            while (f2 > f0) {
                f2 = (f64)(f32)(f2 - f1);
            }
            f0 = (f64)rdf32(0x805726e4u);
            f1 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(0x805726e0u) * f2));
            if (!((f1 < f0) || (f1 == f0))) {
                f0 = (f64)rdf32(0x805726e8u);
                if (!((f1 < f0) || (f1 == f0))) {
                    r4 = 0x76u;
                    if (r25 != 0u) {
                        r4 = 0xf6u;
                    }
                } else {
                    r4 = 0x6cu;
                    if (r25 != 0u) {
                        r4 = 0xe2u;
                    }
                }
            } else {
                r4 = 0x64u;
                if (r25 != 0u) {
                    r4 = 0xd2u;
                }
            }
        }
    }
    if ((rd32(param_r3 + 0x30u) & 0x8000u) == 0u) {
        r6 = 0x32u;
        if (r25 != 0u) {
            r6 = 0x64u;
        }
        r3 = r4 ^ 0x80000000u;
        f3 = rdf64(0x805726f0u);
        r5 = (u32)rd16(param_r4 + 6u);
        f4 = (f64)rdf32(param_r3 + 0x24u);
        r4 = r6 * r5;
        f2 = (f64)(f32)((f64)(f32)(px_b2f((u64)((r31 + 0x64u) ^ 0x80000000u) | 0x4330000000000000ull) - f3) * (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3) * f4));
        f1 = (f64)(f32)px_fdiv(f2, (f64)(f32)(px_b2f((u64)((r30 + 0x64u) ^ 0x80000000u) | 0x4330000000000000ull) - f3));
        f1 = px_ctiw(f1, ppc_fctiwz(f1));
        f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3) * f4);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r3 = (u32)px_f2b(f1) - r4;
        r0 = r3 - ((u32)px_f2b(f0) - r4);
        r3 = r3 + r29;
        wr32(param_r6, r0);
        if (r25 == 0u) {
            r25 = 0x64u;
            if ((s32)r3 > 100) {
                r25 = r3;
            }
        } else {
            r25 = 0x12cu;
            if ((s32)r3 > 300) {
                r25 = r3;
            }
        }
    } else {
        r3 = r4 ^ 0x80000000u;
        f4 = rdf64(0x805726f0u);
        r25 = 0x64u;
        f5 = (f64)rdf32(param_r3 + 0x24u);
        r5 = (u32)rd16(param_r4 + 4u);
        f3 = (f64)(f32)(px_b2f((u64)((r31 + 0x64u) ^ 0x80000000u) | 0x4330000000000000ull) - f4);
        r4 = r5 * 0x19u;
        f2 = (f64)(f32)(f3 * (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f4) * f5));
        f1 = (f64)(f32)px_fdiv(f2, (f64)(f32)(px_b2f((u64)((r30 + 0x64u) ^ 0x80000000u) | 0x4330000000000000ull) - f4));
        f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f4) * f5);
        f1 = px_ctiw(f1, ppc_fctiwz(f1));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r3 = (u32)px_f2b(f1) - r4;
        r0 = r3 - ((u32)px_f2b(f0) - r4);
        r3 = r3 + r29;
        wr32(param_r6, r0);
        if ((s32)r3 > 100) {
            r25 = r3;
        }
    }
    r26 = rd32(param_r3 + 0x2cu);
    c1eq = r26 == 0u;
    if (!c1eq && rd32(r26 + 0xb8u) == 2u && !c1eq) {
        a.r[0] = r26;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        r3 = tc_call(rd32(rd32(r26) + 0x13cu), &a);
        if (r3 != 0u && r26 != 0u) {
            a.r[0] = r26;
            a.r[1] = 4u;
            r3 = tc_call(0x800b1048u, &a);
            if (r3 != 0u) {
                r0 = 0x64u;
                r25 = (u32)((s32)(((r25 >> 0x1fu) & 1u) + r25) >> 1);
                if ((s32)r25 > 100) {
                    r0 = r25;
                }
                r25 = r0;
            }
        }
    }
    return;
}
