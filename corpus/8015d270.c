#include "tc_rt.h"

void fn_8015d270(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    if ((f64)rdf32(0x805749e8u) == (f64)rdf32((u32)param_1 + 0x494u)) {
        wrf32d((u32)param_1 + 0x494u, (f64)rdf32(0x805749f0u));
    }
    if ((f64)rdf32(0x805749e8u) == (f64)rdf32((u32)param_1 + 0x498u)) {
        wrf32d((u32)param_1 + 0x498u, (f64)rdf32(0x805749f4u));
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = 1u;
    (void)tc_call(0x8015d2a8u, &a);
    return;
}
