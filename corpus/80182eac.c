#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_80182eac(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x805750b8u);
    r31 = 0u;
    wrf32d(param_1 + 0xb0u, (f64)rdf32(0x804890d4u));
    wrf32d(param_1 + 0xb4u, (f64)rdf32(0x804890d8u));
    f1 = (f64)rdf32(0x804890dcu);
    wrf32d(param_1 + 0xb8u, f1);
    wrf32d(param_1 + 0xd4u, f0);
    wr32(param_1 + 0xe0u, 1u);
    wrf32d(param_1 + 0xd8u, f0);
    wr32(param_1 + 0xdcu, 1u);
    wr32(param_1 + 0xf4u, 1u);
    wrf32d(param_1 + 0xf0u, f0);
    wr32(param_1 + 0xf8u, 0u);
    wr32(param_1 + 0xfcu, 0xffffffffu);
    wr32(param_1 + 0x16cu, 1u);
    wr32(param_1 + 0x170u, 0u);
    wr32(param_1 + 0x180u, 0u);
    wrf32d(param_1 + 0x174u, f0);
    wrf32d(param_1 + 0x178u, f0);
    wr32(param_1 + 0x17cu, 0u);
    wr32(param_1 + 0x184u, 0u);
    r5 = rd32(0x804890d4u);
    r0 = rd32(0x804890dcu);
    a.r[0] = param_1;
    a.r[1] = rd32(0x804890d8u);
    a.r[2] = r5;
    a.r[3] = 0x804890d4u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    f31 = f1;
    r0 = r0;
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f2 = (f64)px_w2f(r0);
    f1 = (f64)(f32)(f2 * f30);
    f3 = (f64)px_w2f(r5);
    f2 = (f64)(f32)(f2 * f4);
    wrf32d(param_1 + 0xccu, (f64)rdf32(0x805750b8u));
    f2 = ppc_fmadds(f3, f30, f2);
    wrf32d(param_1 + 0xc8u, f2);
    wrf32d(param_1 + 0xd0u, ppc_fmadds(f3, -f4, f1));
    a.r[0] = param_1 + 0xc8u;
    f1 = tc_callf(0x80234440u, &a);
    if (f1 > (f64)rdf32(0x805750d4u)) {
        f1 = (f64)rdf32(0x805750b8u);
        if ((f1 == (f64)rdf32(param_1 + 0xc8u) && f1 == (f64)rdf32(param_1 + 0xccu)) && f1 == (f64)rdf32(param_1 + 0xd0u)) {
            r31 = 1u;
        }
        if (r31 == 0u) {
            r3 = param_1 + 0xc8u;
            a.r[0] = r3;
            a.r[1] = r3;
            (void)tc_call(0x802343e4u, &a);
        }
    }
    wr32(param_1 + 0x100u, 0u);
    a.r[0] = param_1;
    a.r[1] = 1u;
    (void)tc_call(0x80182cbcu, &a);
    a.r[0] = param_1;
    (void)tc_call(0x80182db8u, &a);
    return;
}
