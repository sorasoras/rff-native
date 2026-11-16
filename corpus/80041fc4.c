#include "tc_rt.h"

void fn_80041fc4(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    f9 = (f64)rdf32(param_2 + 0xcu);
    f0 = (f64)rdf32(0x80572048u);
    f3 = (f64)rdf32(param_2 + 0x10u);
    f1 = (f64)rdf32(param_2 + 0x14u);
    f4 = (f64)(f32)(f0 * f9);
    f31 = (f64)(f32)(f0 * f3);
    f10 = (f64)rdf32(param_2 + 0x18u);
    f30 = (f64)(f32)(f0 * f1);
    f5 = (f64)(f32)(f9 * f4);
    f6 = (f64)(f32)(f3 * f31);
    f0 = (f64)(f32)(f1 * f30);
    f1 = (f64)rdf32(param_2 + 4u);
    f29 = (f64)(f32)(f10 * f4);
    f8 = (f64)rdf32(0x80572028u);
    f28 = (f64)(f32)(f3 * f30);
    f4 = (f64)(f32)(f6 + f0);
    f11 = (f64)rdf32(param_2 + 0x1cu);
    f0 = (f64)(f32)(f5 + f0);
    f12 = (f64)rdf32(param_2 + 0x20u);
    f4 = (f64)(f32)(f8 - f4);
    f13 = (f64)rdf32(param_2 + 0x24u);
    wrf32d(param_1 + 0xcu, (f64)rdf32(param_2));
    f3 = (f64)(f32)(f8 - (f64)(f32)(f5 + f6));
    f6 = (f64)(f32)(f12 * (f64)(f32)(f8 - f0));
    wrf32d(param_1, (f64)(f32)(f11 * f4));
    f2 = (f64)(f32)(f13 * f3);
    f0 = (f64)rdf32(param_2 + 8u);
    wrf32d(param_1 + 0x14u, f6);
    f3 = (f64)(f32)(f10 * f31);
    wrf32d(param_1 + 0x24u, (f64)(f32)(f12 * (f64)(f32)(f28 + f29)));
    f6 = (f64)(f32)(f9 * f30);
    f7 = (f64)(f32)(f10 * f30);
    wrf32d(param_1 + 0x28u, f2);
    f8 = (f64)(f32)(f9 * f31);
    f5 = (f64)(f32)(f6 - f3);
    wrf32d(param_1 + 0x18u, (f64)(f32)(f13 * (f64)(f32)(f28 - f29)));
    f3 = (f64)(f32)(f6 + f3);
    wrf32d(param_1 + 0x2cu, f0);
    wrf32d(param_1 + 0x1cu, f1);
    wrf32d(param_1 + 0x20u, (f64)(f32)(f11 * f5));
    wrf32d(param_1 + 8u, (f64)(f32)(f13 * f3));
    wrf32d(param_1 + 0x10u, (f64)(f32)(f11 * (f64)(f32)(f8 + f7)));
    wrf32d(param_1 + 4u, (f64)(f32)(f12 * (f64)(f32)(f8 - f7)));
    return;
}
