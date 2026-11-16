#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802b87fc(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32((u32)param_1 + 0x4a4u);
    f0 = (f64)rdf32((u32)param_1 + 0x4a8u);
    f1 = (f64)(f32)(f1 * f1);
    f0 = (f64)(f32)(f0 * f0);
    f1 = (f64)(f32)(f1 + f0);
    a.f[0] = f1;
    f1 = tc_callf(0x80262ec0u, &a);
    f8 = (f64)(f32)f1;
    if ((f64)rdf32(0x80577390u) != f8) {
        f2 = (f64)rdf32(0x805773b0u);
        if ((f8 > f2) || (f8 == f2)) {
            return;
        }
        f9 = (f64)(f32)px_fdiv((f64)rdf32((u32)param_1 + 0x4a4u), f8);
        f10 = (f64)(f32)px_fdiv((f64)rdf32((u32)param_1 + 0x4a8u), f8);
        if (f8 > (f64)rdf32(0x805773a4u)) {
            f8 = (f64)(f32)(f2 - f8);
        }
        f0 = (f64)rdf32((u32)param_1 + 0xacu);
        f6 = (f64)rdf32((u32)param_1 + 0xa8u);
        f3 = (f64)rdf32((u32)param_1 + 0x4b8u);
        f1 = (f64)rdf32((u32)param_1 + 0x4bcu);
        f8 = (f64)(f32)(f8 * (f64)(f32)(f8 * (f64)rdf32(0x80570e9cu)));
        f31 = (f64)(f32)(f3 + (f64)(f32)(f8 * (f64)(f32)((f64)(f32)((f64)(f32)(f6 * f9) + (f64)(f32)(f0 * f10)) - f3)));
        f30 = (f64)(f32)(f1 + (f64)(f32)(f8 * (f64)(f32)((f64)(f32)((f64)(f32)(f0 * f9) - (f64)(f32)(f6 * f10)) - f1)));
        a.f[0] = (f64)(f32)((f64)(f32)(f31 * f31) + (f64)(f32)(f30 * f30));
        f1 = tc_callf(0x80262ec0u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x80577390u) != f1) {
            f7 = (f64)(f32)px_fdiv(f31, f1);
            f5 = (f64)rdf32((u32)param_1 + 0x4c0u);
            f4 = (f64)rdf32((u32)param_1 + 0x4c4u);
            f0 = (f64)rdf32((u32)param_1 + 0x50cu);
            f6 = (f64)(f32)px_fdiv(f30, f1);
            wrf32d((u32)param_1 + 0x4b8u, f7);
            wrf32d((u32)param_1 + 0x4bcu, f6);
            f1 = (f64)(f32)(f5 + (f64)(f32)((f64)rdf32(0x80570ea4u) * (f64)(f32)(f7 - f5)));
            f2 = (f64)(f32)(f7 - f1);
            wrf32d((u32)param_1 + 0x4c0u, f1);
            f2 = (f64)(f32)(f2 * f2);
            f1 = (f64)(f32)(f4 + (f64)(f32)((f64)rdf32(0x80570ea4u) * (f64)(f32)(f6 - f4)));
            f3 = (f64)(f32)(f6 - f1);
            wrf32d((u32)param_1 + 0x4c4u, f1);
            f1 = (f64)(f32)(f2 + (f64)(f32)(f3 * f3));
            if ((f1 < f0) || (f1 == f0)) {
                r3 = (u32)rd16((u32)param_1 + 0x4c8u);
                if (r3 == 0u) {
                    return;
                }
                wr16((u32)param_1 + 0x4c8u, (u16)(r3 - 1u));
            } else {
                wr16((u32)param_1 + 0x4c8u, rd16(0x80570ea8u));
            }
        }
    }
    return;
}
