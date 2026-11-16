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

void fn_801e80ec(s32 param_1)
{
    u32 r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x348u) != 0xffffffffu) {
        f0 = (f64)rdf32((u32)param_1 + 0x330u);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r31 = (u32)px_f2b(f0);
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        (void)tc_call(0x801e8158u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        (void)tc_call(0x801e8570u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        (void)tc_call(0x801e868cu, &a);
    }
    return;
}
