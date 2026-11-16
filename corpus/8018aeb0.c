#include "tc_rt.h"

u32 fn_8018aeb0(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80198764u, &a);
    f0 = (f64)rdf32(0x80575288u);
    wr32(param_1, 0x8036fb70u);
    wrf32d(param_1 + 0x74u, f0);
    return param_1;
}
