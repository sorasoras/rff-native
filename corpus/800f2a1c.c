#include "tc_rt.h"

u32 fn_800f2a1c(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80061ff8u, &a);
    wr32(param_1, 0x8035bd28u);
    a.r[0] = param_1 + 0x148u;
    (void)tc_call(0x8007021cu, &a);
    f0 = (f64)rdf32(0x80573b60u);
    wrf32d(param_1 + 0x200u, f0);
    wrf32d(param_1 + 0x1fcu, f0);
    wrf32d(param_1 + 0x1f8u, f0);
    a.r[0] = param_1 + 0x210u;
    (void)tc_call(0x800dbb20u, &a);
    wr32(param_1 + 0x208u, 0u);
    wr32(param_1 + 0x1f4u, 0u);
    wr8(param_1 + 0x204u, 0u);
    wr8(param_1 + 0x205u, 0u);
    return param_1;
}
