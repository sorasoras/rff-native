#include "tc_rt.h"

f64 fn_800b0008(s32 param_1, s32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    f1 = tc_callf(0x800b42e4u, &a);
    if ((((u32)rd8((u32)param_1 + 0x358u) >> 5u) & 1u) != 0u) {
        f1 = (f64)rdf32((u32)param_2 + 4u);
    }
    return f1;
}
