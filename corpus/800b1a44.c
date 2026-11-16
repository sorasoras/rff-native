#include "tc_rt.h"

void fn_800b1a44(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(0x80572bf8u);
    f0 = (f64)rdf32((u32)param_1 + 0x1618u);
    f1 = (f64)rdf32(0x80572c14u);
    if (f0 > f2) {
        f0 = (f64)(f32)(f0 * f1);
        wrf32d((u32)param_1 + 0x1618u, f0);
    }
    f0 = (f64)rdf32((u32)param_1 + 0x161cu);
    if (f0 > f2) {
        f0 = (f64)(f32)(f0 * f1);
        wrf32d((u32)param_1 + 0x161cu, f0);
    }
    r3 = (u32)param_1 + 8u;
    f0 = (f64)rdf32(r3 + 0x1618u);
    if (f0 > f2) {
        f0 = (f64)(f32)(f0 * f1);
        wrf32d(r3 + 0x1618u, f0);
    }
    f0 = (f64)rdf32(r3 + 0x161cu);
    if (f0 > f2) {
        f0 = (f64)(f32)(f0 * f1);
        wrf32d(r3 + 0x161cu, f0);
        return;
    }
    return;
}
