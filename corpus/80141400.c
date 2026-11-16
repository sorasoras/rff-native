#include "tc_rt.h"

u32 fn_80141400(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    r30 = param_1 + 0xcu;
    r31 = param_1 + 0x10cu;
    wr32(param_1, 0x803643a0u);
    do {
        a.r[0] = r30;
        (void)tc_call(0x80141f9cu, &a);
        r30 = r30 + 0x20u;
    } while (r30 < r31);
    wrf32d(param_1 + 0x10cu, (f64)rdf32(0x80574450u));
    return param_1;
}
