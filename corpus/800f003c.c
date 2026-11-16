#include "tc_rt.h"

f64 fn_800f003c(s32 param_1)
{
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(0x80573ad8u);
    if ((rd32((u32)param_1 + 0x1cu) & 0x2000u) == 0x2000u) {
        a.r[0] = (u32)param_1;
        f1 = tc_callf(0x800f1730u, &a);
        f31 = (f64)(f32)(f31 + f1);
    }
    if ((rd32((u32)param_1 + 0x1cu) & 0x8000u) == 0x8000u) {
        a.r[0] = (u32)param_1;
        f1 = tc_callf(0x800f07e8u, &a);
        f31 = (f64)(f32)(f31 + f1);
    }
    return f31;
}
