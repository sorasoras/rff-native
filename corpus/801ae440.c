#include "tc_rt.h"

void fn_801ae440(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x84u) != 0u) {
        f1 = (f64)rdf32(0x80575af4u);
        wrf32d((u32)param_1 + 0x7cu, f1);
        a.f[0] = f1;
        a.r[0] = rd32((u32)param_1 + 0x70u);
        (void)tc_call(0x80040728u, &a);
        return;
    }
    return;
}
