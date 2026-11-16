#include "tc_rt.h"

u32 fn_802f0184(f64 param_1, u32 param_2, u32 param_r4)
{
    TcArgs a = {0};
    a.f[0] = (f64)(f32)((f64)rdf32(0x8057752cu) * param_1);
    a.r[0] = param_2;
    a.r[1] = param_r4;
    (void)tc_call(0x80233c08u, &a);
    return param_2;
}
