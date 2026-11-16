#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802541e4(f64 param_1, f64 param_2, f64 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9)
{
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0;
    f9 = (f64)(f32)((f64)rdf32(param_4 + 0xcu) + (f64)(f32)((f64)(f32)((f64)rdf32(param_4 + 8u) * param_3) + (f64)(f32)((f64)(f32)((f64)rdf32(param_4) * param_1) + (f64)(f32)((f64)rdf32(param_4 + 4u) * param_2))));
    f8 = (f64)(f32)((f64)rdf32(param_4 + 0x1cu) + (f64)(f32)((f64)(f32)((f64)rdf32(param_4 + 0x18u) * param_3) + (f64)(f32)((f64)(f32)((f64)rdf32(param_4 + 0x10u) * param_1) + (f64)(f32)((f64)rdf32(param_4 + 0x14u) * param_2))));
    f7 = (f64)(f32)((f64)rdf32(param_4 + 0x2cu) + (f64)(f32)((f64)(f32)((f64)rdf32(param_4 + 0x28u) * param_3) + (f64)(f32)((f64)(f32)((f64)rdf32(param_4 + 0x20u) * param_1) + (f64)(f32)((f64)rdf32(param_4 + 0x24u) * param_2))));
    if ((f64)rdf32(0x80576d50u) == (f64)rdf32(param_5)) {
        f0 = (f64)(f32)px_fdiv((f64)rdf32(0x80576d54u), -f7);
        f2 = (f64)(f32)(f7 * (f64)rdf32(param_5 + 0x14u));
        f3 = (f64)(f32)(f7 * (f64)rdf32(param_5 + 0x10u));
        f7 = (f64)(f32)((f64)(f32)(f9 * (f64)rdf32(param_5 + 4u)) + (f64)(f32)(f7 * (f64)rdf32(param_5 + 8u)));
        f10 = (f64)(f32)((f64)rdf32(param_5 + 0x18u) + f2);
        f3 = (f64)(f32)((f64)(f32)(f8 * (f64)rdf32(param_5 + 0xcu)) + f3);
    } else {
        f2 = (f64)(f32)(f7 * (f64)rdf32(param_5 + 0x14u));
        f7 = (f64)(f32)((f64)rdf32(param_5 + 8u) + (f64)(f32)(f9 * (f64)rdf32(param_5 + 4u)));
        f3 = (f64)(f32)((f64)rdf32(param_5 + 0x10u) + (f64)(f32)(f8 * (f64)rdf32(param_5 + 0xcu)));
        f0 = (f64)rdf32(0x80576d54u);
        f10 = (f64)(f32)((f64)rdf32(param_5 + 0x18u) + f2);
    }
    f6 = (f64)rdf32(param_6 + 8u);
    f5 = (f64)rdf32(param_6 + 0xcu);
    f9 = (f64)rdf32(0x80576d58u);
    f3 = (f64)(f32)(-f3 * f5);
    f2 = (f64)rdf32(param_6 + 0x14u);
    f7 = (f64)(f32)((f64)(f32)(f7 * f6) * f9);
    f7 = (f64)(f32)(f0 * f7);
    f3 = (f64)(f32)((f64)rdf32(param_6 + 4u) + (f64)(f32)(f0 * (f64)(f32)(f3 * f9)));
    f5 = (f64)(f32)(f5 * f9);
    f0 = (f64)(f32)(f0 * (f64)(f32)(f10 * (f64)(f32)(f2 - (f64)rdf32(param_6 + 0x10u))));
    f0 = (f64)(f32)(f2 + f0);
    wrf32d(param_7, (f64)(f32)((f64)(f32)(f6 * f9) + (f64)(f32)((f64)rdf32(param_6) + f7)));
    wrf32d(param_8, (f64)(f32)(f5 + f3));
    wrf32d(param_9, f0);
    return;
}
