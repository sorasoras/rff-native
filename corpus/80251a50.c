#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80251a50(f64 param_1, f64 param_2, s32 param_3, s32 param_4)
{
    u32 c0lt = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    r4 = (u32)param_4;
    if (param_1 < (f64)rdf32(0x80576cc0u)) {
        r4 = 0u;
    }
    f0 = (f64)rdf32(0x80576cc0u);
    if ((param_2 < f0) || (param_2 == f0)) {
        r4 = 0u;
    } else {
        f0 = (f64)rdf32(0x80576cc4u);
        if ((param_2 > f0) || (param_2 == f0)) {
            r4 = 0u;
        }
    }
    c0lt = (s32)r4 < 2;
    do {
        if (r4 == 2u) {
            f5 = (f64)rdf32(0x80576cc4u);
            f3 = (f64)(f32)(param_2 * param_1);
            f0 = (f64)(f32)(param_1 * f3);
            f1 = (f64)(f32)((f64)rdf32(0x80576cc8u) * (f64)(f32)(f5 - param_2));
            f3 = (f64)(f32)px_fdiv(f1, f3);
            f4 = (f64)(f32)px_fdiv(f1, f0);
        } else {
            if (!c0lt) {
                if ((s32)r4 < 4) {
                    f5 = (f64)rdf32(0x80576cc4u);
                    f3 = (f64)rdf32(0x80576cc0u);
                    f4 = (f64)(f32)px_fdiv((f64)(f32)(f5 - param_2), (f64)(f32)(param_1 * (f64)(f32)(param_2 * param_1)));
                    break;
                }
            } else {
                c0lt = (s32)r4 < 0;
                if (r4 != 0u && !c0lt) {
                    f5 = (f64)rdf32(0x80576cc4u);
                    f4 = (f64)rdf32(0x80576cc0u);
                    f3 = (f64)(f32)px_fdiv((f64)(f32)(f5 - param_2), (f64)(f32)(param_2 * param_1));
                    break;
                }
            }
            f3 = (f64)rdf32(0x80576cc0u);
            f5 = (f64)rdf32(0x80576cc4u);
            f4 = f3;
        }
    } while (0);
    wrf32d((u32)param_3 + 0x1cu, f5);
    wrf32d((u32)param_3 + 0x20u, f3);
    wrf32d((u32)param_3 + 0x24u, f4);
    return;
}
