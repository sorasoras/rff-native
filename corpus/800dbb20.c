#include "tc_rt.h"

u32 fn_800dbb20(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0xcu;
    a.r[1] = 0x800dbbb4u;
    a.r[2] = 0x800dbbe4u;
    a.r[3] = 0x1cu;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    r30 = 0u;
    r31 = 0u;
    wrf32d(param_1, (f64)rdf32(0x80573a10u));
    do {
        a.r[0] = param_1 + r31 + 0xcu;
        (void)tc_call(0x8007ae84u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x1cu;
    } while (r30 < 2u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    return param_1;
}
