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

f64 fn_8025f87c(f64 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f9 = 0.0, f11 = 0.0, f12 = 0.0;
    f1 = param_1;
    r7 = 0u;
    wrf64(0x817fdfe8u, param_1);
    r8 = (u32)(px_f2b(param_1) >> 0x20ull);
    r3 = (u32)px_f2b(param_1);
    if ((s32)r8 < 1048576) {
        if (((r8 & 0x7fffffffu) | r3) == 0u) {
            f1 = px_fdiv(rdf64(0x80576f08u), rdf64(0x805719d8u));
            return f1;
        }
        if ((s32)r8 < 0) {
            f0 = rdf64(0x805719d8u);
            wr32(0x805719c0u, 0x21u);
            f1 = px_fdiv(param_1 - param_1, f0);
            return f1;
        }
        r7 = 0xffffffcau;
        f1 = param_1 * rdf64(0x80576f10u);
        wrf64(0x817fdfe8u, f1);
        r8 = (u32)(px_f2b(f1) >> 0x20ull);
    }
    if ((s32)r8 >= 2146435072) {
        f1 = f1 + f1;
    } else {
        r5 = (u32)((s32)r8 >> 20);
        r8 = r8 & 0xfffffu;
        f0 = rdf64(0x80576f18u);
        r4 = r8 + 0x95f64u;
        r5 = r7 + r5;
        wr32(0x817fdfe8u, r8 | ((r4 & 0x100000u) ^ 0x3ff00000u));
        r7 = r5 - 0x3ffu + ((r4 >> 0x14u) & 1u);
        f0 = rdf64(0x817fdfe8u) - f0;
        if ((s32)((r8 + 2u) & 0xfffffu) < 3) {
            f1 = rdf64(0x805719d8u);
            if (f0 == f1) {
                if (r7 == 0u) {
                    return f1;
                }
                f2 = px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576f80u);
                f1 = (rdf64(0x80576f20u) * f2) + (rdf64(0x80576f28u) * f2);
                return f1;
            }
            f5 = (rdf64(0x80576f30u) - (rdf64(0x80576f38u) * f0)) * (f0 * f0);
            if (r7 == 0u) {
                f1 = f0 - f5;
                return f1;
            }
            f3 = px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576f80u);
            f0 = f5 - (rdf64(0x80576f28u) * f3) - f0;
            f1 = (rdf64(0x80576f20u) * f3) - f0;
        } else {
            f1 = px_fdiv(f0, rdf64(0x80576f40u) + f0);
            f11 = f1 * f1;
            f12 = f11 * f11;
            f9 = px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576f80u);
            f3 = (f11 * (rdf64(0x80576f60u) + (f12 * (rdf64(0x80576f68u) + (f12 * (rdf64(0x80576f70u) + (rdf64(0x80576f78u) * f12))))))) + (f12 * (rdf64(0x80576f48u) + (f12 * (rdf64(0x80576f50u) + (rdf64(0x80576f58u) * f12)))));
            if ((s32)((r8 - 0x6147au) | (0x6b851u - r8)) > 0) {
                f5 = rdf64(0x80576f30u) * f0 * f0;
                if (r7 == 0u) {
                    f1 = f1 * (f5 + f3);
                    f1 = f5 - f1;
                    f1 = f0 - f1;
                    return f1;
                }
                f3 = f5 + f3;
                f1 = f1 * f3;
                f1 = f1 + (rdf64(0x80576f28u) * f9);
                f1 = f5 - f1;
                f0 = f1 - f0;
                f1 = (rdf64(0x80576f20u) * f9) - f0;
            } else {
                if (r7 == 0u) {
                    f1 = f1 * (f0 - f3);
                    f1 = f0 - f1;
                } else {
                    f3 = f0 - f3;
                    f1 = f1 * f3;
                    f1 = f1 - (rdf64(0x80576f28u) * f9);
                    f0 = f1 - f0;
                    f1 = (rdf64(0x80576f20u) * f9) - f0;
                }
            }
        }
    }
    return f1;
}
