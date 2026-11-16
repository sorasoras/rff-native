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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

f64 fn_80260824(f64 param_1, f64 param_2)
{
    u32 r4 = 0;
    f64 f1 = 0.0, f3 = 0.0, f5 = 0.0, f8 = 0.0;
    r4 = (u32)(px_f2b(param_1) >> 0x20ull) & 0x7fffffffu;
    if ((s32)r4 < 1044381696 && (u32)px_f2b(px_ctiw(param_1, ppc_fctiwz(param_1))) == 0u) {
        f1 = rdf64(0x80577120u);
    } else {
        f8 = param_1 * param_1;
        f3 = f8 * (rdf64(0x80577128u) + (f8 * (rdf64(0x80577130u) + (f8 * (rdf64(0x80577138u) + (f8 * (rdf64(0x80577140u) + (f8 * (rdf64(0x80577148u) + (rdf64(0x80577150u) * f8))))))))));
        if ((s32)r4 < 1070805811) {
            f3 = f8 * f3;
            f1 = rdf64(0x80577120u) - ((rdf64(0x80577158u) * f8) - (f3 - (param_1 * param_2)));
        } else {
            if ((s32)r4 > 1072234496) {
                wrf64(0x817fdff0u, rdf64(0x80577160u));
            } else {
                wr32(0x817fdff0u, r4 - 0x200000u);
                wr32(0x817fdff4u, 0u);
            }
            f3 = f8 * f3;
            f5 = rdf64(0x817fdff0u);
            f1 = rdf64(0x80577120u) - f5 - ((rdf64(0x80577158u) * f8) - f5 - (f3 - (param_1 * param_2)));
        }
    }
    return f1;
}
