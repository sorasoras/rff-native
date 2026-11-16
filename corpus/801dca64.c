#include "tc_rt.h"

void fn_801dca64(u32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80157f30u, &a);
    }
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wrf32d(param_1 + 8u, (f64)rdf32(0x804890c8u));
    wrf32d(param_1 + 0xcu, (f64)rdf32(0x804890ccu));
    wrf32d(param_1 + 0x10u, (f64)rdf32(0x804890d0u));
    return;
}
