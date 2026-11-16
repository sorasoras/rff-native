#include "tc_rt.h"

u32 fn_8003bd7c(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r3 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r5 = param_1 & 0xc003u;
    c0lt = (s32)r5 < 16386;
    if (r5 == 0x4002u) {
        f2 = (f64)rdf32(0x80571f70u);
        f0 = (f64)(f32)((f64)rdf32(param_2) - f2);
        wrf32d(param_2 + 4u, (f64)(f32)((f64)rdf32(param_2 + 4u) + f2));
        wrf32d(param_2, f0);
    } else if (!c0lt) {
        c0lt = (s32)r5 < 32769;
        if (r5 == 0x8001u) {
            f2 = (f64)rdf32(0x80571f70u);
            f0 = (f64)(f32)((f64)rdf32(param_2) + f2);
            wrf32d(param_2 + 4u, (f64)(f32)((f64)rdf32(param_2 + 4u) - f2));
            wrf32d(param_2, f0);
        } else if (!c0lt) {
            if (r5 != 0xc000u) {
                r3 = 0u;
                return r3;
            }
            f2 = (f64)rdf32(0x80571f70u);
            f0 = (f64)(f32)((f64)rdf32(param_2) + f2);
            wrf32d(param_2 + 4u, (f64)(f32)((f64)rdf32(param_2 + 4u) + f2));
            wrf32d(param_2, f0);
        } else {
            if ((s32)r5 < 32768) {
                r3 = 0u;
                return r3;
            }
            wrf32d(param_2, (f64)(f32)((f64)rdf32(param_2) + (f64)rdf32(0x80571f6cu)));
        }
    } else {
        c0lt = (s32)r5 < 3;
        if (r5 == 3u) {
            f2 = (f64)rdf32(0x80571f70u);
            f0 = (f64)(f32)((f64)rdf32(param_2) - f2);
            wrf32d(param_2 + 4u, (f64)(f32)((f64)rdf32(param_2 + 4u) - f2));
            wrf32d(param_2, f0);
        } else if (!c0lt) {
            if (r5 != 0x4000u) {
                r3 = 0u;
                return r3;
            }
            wrf32d(param_2 + 4u, (f64)(f32)((f64)rdf32(param_2 + 4u) + (f64)rdf32(0x80571f6cu)));
        } else {
            c0lt = (s32)r5 < 1;
            if (r5 == 1u) {
                wrf32d(param_2 + 4u, (f64)(f32)((f64)rdf32(param_2 + 4u) - (f64)rdf32(0x80571f6cu)));
            } else {
                if (c0lt) {
                    r3 = 0u;
                    return r3;
                }
                wrf32d(param_2, (f64)(f32)((f64)rdf32(param_2) - (f64)rdf32(0x80571f6cu)));
            }
        }
    }
    a.f[0] = (f64)rdf32(param_2);
    a.f[1] = (f64)rdf32(0x80571f64u);
    f1 = tc_callf(0x8003bc9cu, &a);
    wrf32d(param_2, f1);
    a.f[0] = (f64)rdf32(param_2 + 4u);
    a.f[1] = (f64)rdf32(0x80571f64u);
    f1 = tc_callf(0x8003bc9cu, &a);
    wrf32d(param_2 + 4u, f1);
    r3 = 1u;
    return r3;
}
