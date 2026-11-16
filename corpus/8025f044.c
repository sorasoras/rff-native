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

f64 fn_8025f044(f64 param_1)
{
    u32 r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f7 = 0.0, f11 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f1 = param_1;
    r31 = (u32)(px_f2b(param_1) >> 0x20ull);
    r30 = r31 & 0x7fffffffu;
    if ((s32)r30 < 1072693248) {
        if ((s32)r30 >= 1071644672) {
            f11 = rdf64(0x80576e40u);
            f31 = rdf64(0x80576e98u) * (f11 - ppc_fabs(param_1));
            f29 = f11 + (f31 * (rdf64(0x80576e78u) + (f31 * (rdf64(0x80576e80u) + (f31 * (rdf64(0x80576e88u) + (rdf64(0x80576e90u) * f31)))))));
            f30 = f31 * (rdf64(0x80576e48u) + (f31 * (rdf64(0x80576e50u) + (f31 * (rdf64(0x80576e58u) + (f31 * (rdf64(0x80576e60u) + (f31 * (rdf64(0x80576e68u) + (rdf64(0x80576e70u) * f31))))))))));
            a.f[0] = f31;
            f1 = tc_callf(0x80262ec0u, &a);
            if ((s32)r30 < 1072640819) {
                wrf64(0x817fdfc0u, f1);
                f5 = rdf64(0x80576ea0u);
                wr32(0x817fdfc4u, 0u);
                f7 = rdf64(0x817fdfc0u);
                f2 = rdf64(0x80576ea8u);
                f1 = f2 - ((f5 * f1 * px_fdiv(f30, f29)) - (rdf64(0x80576e30u) - (f5 * px_fdiv(f31 - (f7 * f7), f1 + f7))) - (f2 - (f5 * f7)));
            } else {
                f5 = px_fdiv(f30, f29);
                f3 = rdf64(0x80576ea0u);
                f2 = rdf64(0x80576e30u);
                f0 = rdf64(0x80576e28u);
                wrf64(0x817fdfc0u, f5);
                f1 = f1 + (f1 * f5);
                f1 = f3 * f1;
                f1 = f1 - f2;
                f1 = f0 - f1;
            }
            if ((s32)r31 <= 0) {
                f1 = -f1;
            }
        } else {
            if ((s32)r30 >= 1044381696) {
                f31 = param_1 * param_1;
            } else if ((rdf64(0x80576e38u) + param_1) > rdf64(0x80576e40u)) {
                return f1;
            }
            f2 = px_fdiv(f31 * (rdf64(0x80576e48u) + (f31 * (rdf64(0x80576e50u) + (f31 * (rdf64(0x80576e58u) + (f31 * (rdf64(0x80576e60u) + (f31 * (rdf64(0x80576e68u) + (rdf64(0x80576e70u) * f31)))))))))), rdf64(0x80576e40u) + (f31 * (rdf64(0x80576e78u) + (f31 * (rdf64(0x80576e80u) + (f31 * (rdf64(0x80576e88u) + (rdf64(0x80576e90u) * f31))))))));
            wrf64(0x817fdfc0u, f2);
            f1 = param_1 + (param_1 * f2);
        }
    } else if (((r30 - 0x3ff00000u) | (u32)px_f2b(param_1)) != 0u) {
        f1 = (f64)rdf32(0x80570c00u);
    } else {
        f1 = (rdf64(0x80576e28u) * param_1) + (rdf64(0x80576e30u) * param_1);
    }
    return f1;
}
