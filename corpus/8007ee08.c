#include "tc_rt.h"

void fn_8007ee08(f64 param_1, f64 param_2, f64 param_3, u32 param_4)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_4;
    a.f[0] = (f64)(f32)(param_2 - param_1);
    f1 = tc_callf(0x8007edd4u, &a);
    if (f1 < (f64)rdf32(0x80572860u)) {
        if (!(f1 < -param_3)) {
            f1 = (f64)(f32)(param_1 + f1);
            a.f[0] = f1;
            (void)tc_call(0x8007edd4u, &a);
            return;
        }
        a.f[0] = (f64)(f32)(param_1 - param_3);
        (void)tc_call(0x8007edd4u, &a);
        return;
    }
    if (f1 > param_3) {
        a.f[0] = (f64)(f32)(param_1 + param_3);
        (void)tc_call(0x8007edd4u, &a);
        return;
    }
    f1 = (f64)(f32)(param_1 + f1);
    a.f[0] = f1;
    (void)tc_call(0x8007edd4u, &a);
    return;
}
