#include "tc_rt.h"

void fn_8019f15c(u32 param_1, u32 param_2)
{
    (void)param_1;
    if (param_2 != 0u) {
        wr32(param_2, 0u);
        wr32(param_2 + 4u, 0xffffffffu);
        wrf32d(param_2 + 8u, (f64)rdf32(0x804890c8u));
        wrf32d(param_2 + 0xcu, (f64)rdf32(0x804890ccu));
        wrf32d(param_2 + 0x10u, (f64)rdf32(0x804890d0u));
        return;
    }
    return;
}
