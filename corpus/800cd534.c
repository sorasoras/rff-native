#include "tc_rt.h"

f64 fn_800cd534(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800cd5c8u, &a);
    if (r3 != 0u) {
        f1 = (f64)(f32)((f64)(f32)(rdf64(0x80573010u) * (f64)rdf32((u32)param_1 + 0x34u)) + (f64)rdf32(0x80572f90u));
    } else {
        f1 = (f64)rdf32((u32)param_1 + 0x34u);
    }
    return f1;
}
