#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_8025ed80(f64 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f11 = 0.0, f12 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r4 = (u32)(px_f2b(param_1) >> 0x20ull);
    r3 = r4 & 0x7fffffffu;
    if ((s32)r3 >= 1072693248) {
        r3 = r3 - 0x3ff00000u;
        if ((r3 | (u32)px_f2b(param_1)) == 0u) {
            if ((s32)r4 > 0) {
                f1 = rdf64(0x80576da0u);
                return f1;
            }
            f1 = rdf64(0x80576da8u);
            return f1;
        }
        f1 = (f64)rdf32(0x80570c00u);
    } else {
        if ((s32)r3 < 1071644672) {
            if ((s32)r3 <= 1012924416) {
                f1 = rdf64(0x80576db0u);
                return f1;
            }
            f12 = param_1 * param_1;
            f3 = px_fdiv(f12 * (rdf64(0x80576db8u) + (f12 * (rdf64(0x80576dc0u) + (f12 * (rdf64(0x80576dc8u) + (f12 * (rdf64(0x80576dd0u) + (f12 * (rdf64(0x80576dd8u) + (rdf64(0x80576de0u) * f12)))))))))), rdf64(0x80576de8u) + (f12 * (rdf64(0x80576df0u) + (f12 * (rdf64(0x80576df8u) + (f12 * (rdf64(0x80576e00u) + (rdf64(0x80576e08u) * f12))))))));
            f3 = param_1 * f3;
            f1 = rdf64(0x80576db0u) - (param_1 - (rdf64(0x80576e10u) - f3));
        } else {
            if ((s32)r4 < 0) {
                f11 = rdf64(0x80576de8u);
                f1 = rdf64(0x80576e18u) * (f11 + param_1);
                f30 = f11 + (f1 * (rdf64(0x80576df0u) + (f1 * (rdf64(0x80576df8u) + (f1 * (rdf64(0x80576e00u) + (rdf64(0x80576e08u) * f1)))))));
                f31 = f1 * (rdf64(0x80576db8u) + (f1 * (rdf64(0x80576dc0u) + (f1 * (rdf64(0x80576dc8u) + (f1 * (rdf64(0x80576dd0u) + (f1 * (rdf64(0x80576dd8u) + (rdf64(0x80576de0u) * f1))))))))));
                a.f[0] = f1;
                f1 = tc_callf(0x80262ec0u, &a);
                f1 = f1 + ((px_fdiv(f31, f30) * f1) - rdf64(0x80576e10u));
                f1 = rdf64(0x80576e20u) * f1;
                f1 = rdf64(0x80576da8u) - f1;
            } else {
                f31 = rdf64(0x80576e18u) * (rdf64(0x80576de8u) - param_1);
                a.f[0] = f31;
                f1 = tc_callf(0x80262ec0u, &a);
                f2 = rdf64(0x80576de0u);
                wrf64(0x817fdfd0u, f1);
                f4 = f2 * f31;
                f3 = rdf64(0x80576dd8u);
                f2 = rdf64(0x80576e08u) * f31;
                f0 = rdf64(0x80576e00u);
                wr32(0x817fdfd4u, 0u);
                f3 = f3 + f4;
                f11 = rdf64(0x817fdfd0u);
                f0 = f0 + f2;
                f5 = px_fdiv(f31 - (f11 * f11), f1 + f11);
                f1 = px_fdiv(f31 * (rdf64(0x80576db8u) + (f31 * (rdf64(0x80576dc0u) + (f31 * (rdf64(0x80576dc8u) + (f31 * (rdf64(0x80576dd0u) + (f31 * f3)))))))), rdf64(0x80576de8u) + (f31 * (rdf64(0x80576df0u) + (f31 * (rdf64(0x80576df8u) + (f31 * f0)))))) * f1;
                f1 = f5 + f1;
                f1 = f11 + f1;
                f1 = rdf64(0x80576e20u) * f1;
            }
        }
    }
    return f1;
}
