#include "tc_rt.h"

void fn_800dbd20(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_1 + 0xcu;
    r30 = 0u;
    wrf32d(param_1, (f64)rdf32(0x80573a10u));
    do {
        a.r[0] = r31;
        (void)tc_call(0x8007ae84u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x1cu;
    } while (r30 < 2u);
    wr32(param_1 + 8u, 0u);
    return;
}
