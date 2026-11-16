#include "tc_rt.h"

u32 fn_8013db70(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800934f4u, &a);
    f0 = (f64)rdf32(0x80574418u);
    wr32(param_1 + 0xb20u, 0u);
    wr32(param_1, 0x80363e80u);
    wr32(param_1 + 0xb24u, 0xffffffffu);
    wr32(param_1 + 0xb2cu, 0u);
    wrf32d(param_1 + 0xb30u, f0);
    wr32(param_1 + 0xb28u, 0u);
    return param_1;
}
