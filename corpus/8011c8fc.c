#include "tc_rt.h"

f64 fn_8011c8fc(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x34u);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x8011c654u, &a);
        return f1;
    }
    return (f64)rdf32(0x80574248u);
}
