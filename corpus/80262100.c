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

f64 fn_80262100(f64 param_1, f64 param_2, u32 param_3)
{
    u32 r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f30 = 0.0, f31 = 0.0;
    f1 = param_1;
    f2 = param_2;
    r8 = (u32)(px_f2b(param_1) >> 0x20ull);
    r7 = r8 & 0x7fffffffu;
    if ((s32)r7 < 1043333120) {
        f0 = px_ctiw(param_1, ppc_fctiwz(param_1));
        wrf64(0x817fdfd0u, f0);
        if ((u32)px_f2b(f0) == 0u) {
            if (((param_3 + 1u) | r7 | (u32)px_f2b(param_1)) == 0u) {
                f1 = px_fdiv(rdf64(0x805771e0u), ppc_fabs(param_1));
                return f1;
            }
            if (param_3 == 1u) {
                return f1;
            }
            f1 = px_fdiv(rdf64(0x805771e8u), param_1);
            return f1;
        }
    }
    if ((s32)r7 >= 1072010280) {
        if ((s32)r8 < 0) {
            f1 = -param_1;
            f2 = -param_2;
        }
        f1 = rdf64(0x805771f0u) - f1;
        f0 = rdf64(0x805771f8u) - f2;
        f2 = rdf64(0x80577200u);
        f1 = f1 + f0;
    }
    f0 = f1 * f1;
    f3 = f0 * f0;
    f4 = f0 * f1;
    f9 = rdf64(0x8033d9c8u);
    f31 = rdf64(0x8033d9c0u);
    f8 = rdf64(0x8033d9b8u);
    f13 = rdf64(0x8033d9b0u);
    f7 = rdf64(0x8033d9a8u);
    f5 = rdf64(0x8033d988u) * f4;
    f12 = rdf64(0x8033d9a0u);
    f10 = f3 * (rdf64(0x8033d9d8u) + (f3 * rdf64(0x8033d9e8u)));
    f6 = rdf64(0x8033d998u);
    f11 = rdf64(0x8033d990u);
    f30 = f3 * (rdf64(0x8033d9d0u) + (f3 * rdf64(0x8033d9e0u)));
    wrf64(0x817fdfc8u, f0);
    f9 = f9 + f10;
    f9 = f3 * f9;
    f8 = f8 + f9;
    f8 = f3 * f8;
    f7 = f7 + f8;
    f7 = f3 * f7;
    f0 = f0 * (f2 + (f4 * (f11 + (f3 * (f12 + (f3 * (f13 + (f3 * (f31 + f30)))))) + (f0 * (f6 + f7)))));
    f6 = f2 + f0 + f5;
    f4 = f1 + f6;
    if ((s32)r7 >= 1072010280) {
        wr32(0x817fdfd4u, param_3 ^ 0x80000000u);
        f5 = rdf64(0x80577210u);
        wr32(0x817fdfd0u, 0x43300000u);
        f7 = rdf64(0x817fdfd0u) - f5;
        f1 = f1 - (px_fdiv(f4 * f4, f4 + f7) - f6);
        f1 = (px_b2f((u64)((1u - ((r8 >> 0x1eu) & 2u)) ^ 0x80000000u) | 0x4330000000000000ull) - f5) * (f7 - (rdf64(0x80577208u) * f1));
    } else {
        if (param_3 == 1u) {
            f1 = f4;
        } else {
            f0 = rdf64(0x805771e8u);
            wrf64(0x817fdfc8u, f4);
            f5 = px_fdiv(f0, f4);
            f2 = rdf64(0x805771e0u);
            wr32(0x817fdfccu, 0u);
            f4 = rdf64(0x817fdfc8u);
            wrf64(0x817fdfc0u, f5);
            wr32(0x817fdfc4u, 0u);
            f3 = rdf64(0x817fdfc0u);
            f1 = f3 + (f5 * (f2 + (f3 * f4) + (f3 * (f6 - (f4 - f1)))));
        }
    }
    return f1;
}
