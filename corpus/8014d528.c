#include "tc_rt.h"

void fn_8014d528(u32 param_1)
{
    u32 c0eq = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = rd32(param_1 + 0x50u);
    r3 = tc_call(0x803014dcu, &a);
    r31 = r3;
    r30 = 0u;
    if ((r3 & 0x20000u) != 0u) {
        r30 = 1u;
    }
    f1 = (f64)rdf32(param_1 + 0x70u);
    if (f1 > (f64)rdf32(0x805746f4u)) {
        a.f[0] = f1;
        f1 = tc_callf(0x80262b10u, &a);
        f1 = (f64)(f32)f1;
        f31 = (f64)(f32)((f64)rdf32(param_1 + 0x58u) * f1);
    } else {
        a.f[0] = f1;
        f1 = tc_callf(0x80262b10u, &a);
        f1 = (f64)(f32)f1;
        f31 = (f64)(f32)((f64)rdf32(param_1 + 0x5cu) * f1);
    }
    f31 = (f64)(f32)(f31 + (f64)rdf32(((r30 << 2u) & 0xfffffffcu) - 0x7fa8b8b8u));
    if ((f64)rdf32(param_1 + 0x70u) > (f64)rdf32(0x805746f4u)) {
        a.f[0] = (f64)rdf32(param_1 + 0x74u);
        f1 = tc_callf(0x80262b10u, &a);
        f1 = (f64)(f32)f1;
        f30 = (f64)(f32)((f64)rdf32(param_1 + 0x60u) * f1);
    } else {
        a.f[0] = (f64)rdf32(param_1 + 0x74u);
        f1 = tc_callf(0x80262b10u, &a);
        f1 = (f64)(f32)f1;
        f30 = (f64)(f32)((f64)rdf32(param_1 + 0x64u) * f1);
    }
    if ((r31 & 0xff0000u) == 0u) {
        f31 = (f64)rdf32(0x805746f0u);
    }
    if ((r31 & 0xff000000u) == 0u) {
        f30 = (f64)rdf32(0x805746f4u);
    }
    r3 = rd32(param_1 + 0x48u);
    c0eq = r3 == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.f[0] = f31;
            a.r[0] = r3;
            (void)tc_call(0x802f7238u, &a);
        }
        r3 = rd32(param_1 + 0x48u);
        if (r3 != 0u) {
            a.f[0] = f30;
            a.r[0] = r3;
            (void)tc_call(0x802f7240u, &a);
        }
    }
    return;
}
