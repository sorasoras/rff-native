#include "tc_rt.h"

void fn_800ca3d4(f64 param_1, s32 param_2)
{
    f64 f0 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = param_1;
    a.f[0] = param_1;
    a.r[0] = (u32)param_2 + 0xacu;
    (void)tc_call(0x800caba4u, &a);
    if ((f64)rdf32(0x80572f5cu) < param_1) {
        f31 = (f64)(f32)(param_1 - (f64)rdf32(0x80572f60u));
    } else {
        f0 = (f64)rdf32(0x80572f64u);
        if ((f0 > param_1) || (f0 == param_1)) {
            f31 = (f64)(f32)((f64)rdf32(0x80572f60u) + param_1);
        }
    }
    wrf32d((u32)param_2 + 0x14u, f31);
    return;
}
