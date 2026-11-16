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

f64 fn_80262c78(f64 param_1)
{
    u32 c0eq = 0, c1lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = param_1;
    r6 = (u32)(px_f2b(param_1) >> 0x20ull);
    r0 = (u32)px_f2b(param_1);
    if (((r6 & 0x7ff00000u) - 0x7ff00000u) == 0u) {
        wr32(0x805719c0u, 0x21u);
        f1 = param_1 + (param_1 * param_1);
    } else {
        c1lt = (s32)r6 < 0;
        if ((s32)r6 <= 0) {
            if ((r0 | (r6 & 0x7fffffffu)) == 0u) {
                return f1;
            }
            if (c1lt) {
                wr32(0x805719c0u, 0x21u);
                f1 = (f64)rdf32(0x80570c00u);
                return f1;
            }
        }
        r3 = (u32)((s32)r6 >> 20);
        if (r3 == 0u) {
            while (r6 == 0u) {
                r4 = (r0 >> 0xbu) & 0x1fffffu;
                r0 = (r0 << 0x15u) & 0xffe00000u;
                r6 = r6 | r4;
                r3 = r3 - 0x15u;
            }
            r7 = 0u;
            while ((r6 & 0x100000u) == 0u) {
                r6 = (r6 << 1u) & 0xfffffffeu;
                r7 = r7 + 1u;
            }
            r4 = 0x20u - r7;
            r4 = ((r4 & 0x20u) != 0u) ? 0u : (r0 >> (r4 & 0x1fu));
            r0 = ((r7 & 0x20u) != 0u) ? 0u : (r0 << (r7 & 0x1fu));
            r3 = r3 - (r7 - 1u);
            r6 = r6 | r4;
        }
        r6 = (r6 & 0xfffffu) | 0x100000u;
        if (((r3 - 0x3ffu) & 1u) != 0u) {
            r6 = ((r0 >> 0x1fu) & 1u) + (r6 + r6);
            r0 = r0 + r0;
        }
        r6 = ((r0 >> 0x1fu) & 1u) + (r6 + r6);
        r0 = r0 + r0;
        r9 = 0u;
        r11 = 0u;
        r10 = 0u;
        r12 = 0u;
        r7 = 0x200000u;
        while (r7 != 0u) {
            r4 = r11 + r7;
            if ((s32)r4 <= (s32)r6) {
                r11 = r4 + r7;
                r6 = r6 - r4;
                r12 = r12 + r7;
            }
            r6 = ((r0 >> 0x1fu) & 1u) + (r6 + r6);
            r0 = r0 + r0;
            r7 = (r7 >> 1u) & 0x7fffffffu;
        }
        r7 = 0x80000000u;
        while (r7 != 0u) {
            c0eq = r11 == r6;
            r5 = r11;
            r8 = r9 + r7;
            if ((s32)r11 < (s32)r6 || (c0eq && r8 <= r0)) {
                r9 = r8 + r7;
                if (((r8 & 0x80000000u) - 0x80000000u) == 0u && (r9 & 0x80000000u) == 0u) {
                    r11 = r11 + 1u;
                }
                r6 = r6 - r5;
                if (r0 < r8) {
                    r6 = r6 - 1u;
                }
                r0 = r0 - r8;
                r10 = r10 + r7;
            }
            r6 = ((r0 >> 0x1fu) & 1u) + (r6 + r6);
            r0 = r0 + r0;
            r7 = (r7 >> 1u) & 0x7fffffffu;
        }
        r0 = r6 | r0;
        if (r0 != 0u) {
            f0 = rdf64(0x805772a8u);
            if ((f0 > f0) || (f0 == f0)) {
                r0 = r10 + 0x10000u;
                if (r0 == 0xffffu) {
                    r10 = 0u;
                    r12 = r12 + 1u;
                } else {
                    if (f0 > f0) {
                        if (r0 == 0xfffeu) {
                            r12 = r12 + 1u;
                        }
                        r10 = r10 + 2u;
                    } else {
                        r10 = r10 + (r10 & 1u);
                    }
                }
            }
        }
        r5 = (r10 >> 1u) & 0x7fffffffu;
        r4 = (u32)((s32)r12 >> 1) + 0x3fe00000u;
        if ((r12 & 1u) == 1u) {
            r5 = r5 | 0x80000000u;
        }
        r4 = r4 + (((r3 - 0x3ffu) << 0x13u) & 0xfff00000u);
        f1 = px_b2f(((u64)r4 << 0x20ull) | (u64)r5);
    }
    return f1;
}
