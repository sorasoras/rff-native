#include "tc_rt.h"

f64 fn_800d5a48(f64 param_1)
{
    u32 r3 = 0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    f31 = param_1;
    r3 = tc_call(0x800d3f34u, &a);
    if (r3 != 0u) {
        f31 = (f64)(f32)(param_1 * (f64)rdf32(0x80573154u));
    }
    return f31;
}
