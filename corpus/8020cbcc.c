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

u32 fn_8020cbcc(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(0x805767a8u);
    if ((rd32(param_1 + 0xcu) + 0x10000u) != 0xffffu) {
        a.r[0] = param_1 + 4u;
        r3 = tc_call(0x8020c130u, &a);
        f31 = (f64)rdf32(param_1 + 8u);
        r31 = r3;
    } else {
        r31 = 0u;
    }
    if (rd32(param_1 + 0x15cu) != 0u) {
        a.r[0] = param_1 + 0x148u;
        a.r[1] = rd32(param_1);
        (void)tc_call(0x8020c6f8u, &a);
    }
    wr32(param_1, (u32)px_f2b(px_ctiw(f31, ppc_fctiwz(f31))));
    return r31;
}
