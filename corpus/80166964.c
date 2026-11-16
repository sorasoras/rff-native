#include "tc_rt.h"

void fn_80166964(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80574bc0u);
    wr32((u32)param_1 + 0x9cu, rd32((u32)param_1 + 0x9cu) | 0x2000000u);
    a.f[0] = f1;
    a.r[0] = (u32)param_1 + 0xf5cu;
    (void)tc_call(0x800f16e0u, &a);
    return;
}
