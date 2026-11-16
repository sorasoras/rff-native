#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_800ce6ec(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r3 = rd32(0x804863d8u);
    wrf32d(param_2, (f64)rdf32(0x804890d4u));
    wrf32d(param_2 + 4u, (f64)rdf32(0x804890d8u));
    wrf32d(param_2 + 8u, (f64)rdf32(0x804890dcu));
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = 0x804890d4u;
    a.r[3] = 0x80490000u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
    r4 = rd32(param_2);
    f31 = f1;
    r0 = rd32(param_2 + 8u);
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)px_w2f(r0);
    f3 = (f64)px_w2f(r4);
    wrf32d(param_2, ppc_fmadds(f3, f30, (f64)(f32)(f1 * f4)));
    wrf32d(param_2 + 8u, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f30)));
    return;
}
