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

f64 fn_80262040(f64 param_1, f64 param_2, s32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f7 = 0.0, f8 = 0.0;
    f1 = param_1;
    if (!((s32)((u32)(px_f2b(param_1) >> 0x20ull) & 0x7fffffffu) >= 1044381696) && (u32)px_f2b(px_ctiw(param_1, ppc_fctiwz(param_1))) == 0u) {
        return f1;
    }
    f7 = param_1 * param_1;
    f8 = f7 * param_1;
    f0 = rdf64(0x805771a8u) + (f7 * (rdf64(0x805771b0u) + (f7 * (rdf64(0x805771b8u) + (f7 * (rdf64(0x805771c0u) + (rdf64(0x805771c8u) * f7)))))));
    if ((u32)param_3 == 0u) {
        f1 = param_1 + (f8 * (rdf64(0x805771d0u) + (f7 * f0)));
    } else {
        f1 = param_1 - ((f7 * ((rdf64(0x805771d8u) * param_2) - (f8 * f0))) - param_2 - (rdf64(0x805771d0u) * f8));
    }
    return f1;
}
