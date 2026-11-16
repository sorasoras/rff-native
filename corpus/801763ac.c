#include "tc_rt.h"

u32 fn_801763ac(u32 param_1)
{
    u32 r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80175c78u, &a);
    r31 = param_1 + 0x230u;
    wr32(param_1, 0x8036e7a0u);
    a.r[0] = r31;
    (void)tc_call(0x8006f1b4u, &a);
    f0 = (f64)rdf32(0x80574f50u);
    wr32(r31, 0x80350198u);
    wr32(param_1 + 0x130u, 0x1075u);
    wr32(param_1 + 0x134u, 0x1076u);
    wr32(param_1 + 0x138u, 0x17u);
    wrf32d(param_1 + 0x314u, f0);
    wrf32d(param_1 + 0x128u, f0);
    return param_1;
}
