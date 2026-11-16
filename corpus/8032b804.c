#include "tc_rt.h"

void fn_8032b804(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, u32 param_6, s32 param_7, u32 param_8)
{
    u32 c0lt = 0;
    f64 f0 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0, f26 = 0.0, f28 = 0.0;
    f64 f30 = 0.0, f31 = 0.0;
    c0lt = param_7 < 1;
    if (((u32)param_7 != 1u && c0lt) && param_7 >= 0) {
        f9 = (f64)rdf32(param_8);
        f0 = (f64)(f32)(param_3 * param_1);
        f26 = (f64)rdf32(param_8 + 0x10u);
        f31 = (f64)(f32)(param_4 * param_5);
        f30 = (f64)rdf32(param_8 + 0x20u);
        f10 = (f64)rdf32(param_8 + 0x18u);
        f6 = (f64)(f32)(param_4 * (f64)(f32)((f64)(f32)(param_2 + param_5) - (f64)rdf32(0x80577c48u)));
        f7 = (f64)rdf32(param_8 + 4u);
        f12 = (f64)rdf32(param_8 + 0x14u);
        f28 = (f64)rdf32(param_8 + 0x24u);
        f4 = (f64)rdf32(param_8 + 8u);
        wrf32d(param_6 + 0x28u, (f64)(f32)((f64)rdf32(param_8 + 0x28u) * param_3));
        wrf32d(param_6 + 0xcu, (f64)(f32)(param_1 + (f64)(f32)((f64)(f32)(-f9 * f0) - (f64)(f32)(f7 * f6))));
        wrf32d(param_6 + 0x24u, (f64)(f32)(f28 * f31));
        wrf32d(param_6 + 0x14u, (f64)(f32)(f12 * f31));
        f10 = (f64)(f32)(f10 * param_3);
        wrf32d(param_6 + 0x1cu, (f64)(f32)(param_2 + (f64)(f32)((f64)(f32)(-f26 * f0) - (f64)(f32)(f12 * f6))));
        wrf32d(param_6 + 8u, (f64)(f32)(f4 * param_3));
        wrf32d(param_6 + 4u, (f64)(f32)(f7 * f31));
        wrf32d(param_6, (f64)(f32)(f9 * param_3));
        wrf32d(param_6 + 0x10u, (f64)(f32)(f26 * param_3));
        wrf32d(param_6 + 0x18u, f10);
        wrf32d(param_6 + 0x20u, (f64)(f32)(f30 * param_3));
        wrf32d(param_6 + 0x2cu, (f64)(f32)((f64)(f32)(-f30 * f0) - (f64)(f32)(f28 * f6)));
        return;
    }
    f26 = (f64)rdf32(param_8 + 0x20u);
    f0 = (f64)(f32)(param_3 * param_1);
    f10 = (f64)rdf32(param_8);
    f5 = (f64)(f32)(param_4 * param_2);
    f7 = -f26;
    f28 = (f64)rdf32(param_8 + 0x28u);
    f8 = (f64)rdf32(param_8 + 8u);
    f26 = (f64)(f32)(f26 * param_3);
    f31 = (f64)rdf32(param_8 + 0x10u);
    f11 = (f64)rdf32(param_8 + 0x14u);
    f30 = (f64)(f32)((f64)rdf32(param_8 + 0x24u) * param_3);
    f6 = (f64)rdf32(param_8 + 4u);
    f12 = (f64)rdf32(param_8 + 0x18u);
    wrf32d(param_6 + 0x2cu, (f64)(f32)((f64)(f32)((f64)(f32)(f7 * f0) - (f64)(f32)(f28 * f5)) - param_2));
    wrf32d(param_6 + 0xcu, (f64)(f32)(param_1 + (f64)(f32)((f64)(f32)(-f10 * f0) - (f64)(f32)(f8 * f5))));
    f11 = (f64)(f32)(f11 * param_3);
    wrf32d(param_6 + 0x14u, (f64)(f32)(f12 * param_4));
    f6 = (f64)(f32)(f6 * param_3);
    wrf32d(param_6 + 0x28u, f30);
    wrf32d(param_6 + 0x20u, f26);
    wrf32d(param_6 + 4u, (f64)(f32)(f8 * param_4));
    wrf32d(param_6, (f64)(f32)(f10 * param_3));
    wrf32d(param_6 + 8u, f6);
    wrf32d(param_6 + 0x10u, (f64)(f32)(f31 * param_3));
    wrf32d(param_6 + 0x18u, f11);
    wrf32d(param_6 + 0x1cu, (f64)(f32)((f64)(f32)(-f31 * f0) - (f64)(f32)(f12 * f5)));
    wrf32d(param_6 + 0x24u, (f64)(f32)(f28 * param_4));
    return;
}
