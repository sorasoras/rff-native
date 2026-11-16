#include "tc_rt.h"

u32 fn_800d2b80(f64 param_1, f64 param_2, f64 param_3, s32 param_4, u32 param_r4)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f30 = param_2;
    f31 = param_3;
    a.f[0] = param_1;
    a.r[0] = (u32)param_4;
    a.r[1] = param_r4;
    r3 = tc_call(0x800d29d4u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if ((f64)rdf32(0x805730f8u) < param_3) {
            f31 = (f64)(f32)(param_3 - (f64)rdf32(0x805730fcu));
        } else {
            f0 = (f64)rdf32(0x80573100u);
            if ((f0 > param_3) || (f0 == param_3)) {
                f31 = (f64)(f32)((f64)rdf32(0x805730fcu) + param_3);
            }
        }
        f0 = (f64)rdf32(0x805730f8u);
        wrf32d((u32)param_4 + 0x18u, f31);
        if (f0 < param_2) {
            f30 = (f64)(f32)(param_2 - (f64)rdf32(0x805730fcu));
        } else {
            f0 = (f64)rdf32(0x80573100u);
            if ((f0 > param_2) || (f0 == param_2)) {
                f30 = (f64)(f32)((f64)rdf32(0x805730fcu) + param_2);
            }
        }
        r3 = 1u;
        wrf32d((u32)param_4 + 0x1cu, (f64)(f32)((f64)rdf32(0x80573104u) * f30));
    }
    return r3;
}
