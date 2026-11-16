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

s32 fn_802558e4(f64 param_1)
{
    u32 c6lt = 0, c7lt = 0, r3 = 0;
    f64 f2 = 0.0, f4 = 0.0;
    r3 = 0u;
    f4 = rdf64(0x8033cac0u);
    c6lt = param_1 < rdf64(0x8033cab8u);
    if (!(param_1 < rdf64(0x8033cab0u))) {
        r3 = 0xffffffffu;
        if (c6lt) {
            c7lt = param_1 < f4;
            f2 = param_1;
            if (!c7lt) {
                f2 = param_1 - f4;
            }
            f2 = px_ctiw(f2, ppc_fctiwz(f2));
            r3 = (u32)px_f2b(f2);
            if (!c7lt) {
                r3 = r3 - 0x80000000u;
            }
        }
    }
    return (s32)r3;
}
