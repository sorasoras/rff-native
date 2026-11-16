#include "tc_rt.h"

u32 fn_8011877c(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800f1ee0u, &a);
    f0 = (f64)rdf32(0x80574198u);
    wr32(param_1, 0x803625e8u);
    wr32(param_1 + 0xb0u, 0u);
    wrf32d(param_1 + 0xb4u, f0);
    wrf32d(param_1 + 0xb8u, f0);
    wr32(param_1 + 0xacu, 4u);
    return param_1;
}
