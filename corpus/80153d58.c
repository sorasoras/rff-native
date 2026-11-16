#include "tc_rt.h"

void fn_80153d58(u32 param_1, u32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    c0eq = rd32(param_2 + 0xb8u) == 2u;
    wr8(param_1, 1u);
    if (!c0eq) {
        wr32(param_1 + 0x30u, 0xffffffffu);
    } else {
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.r[2] = 1u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x13cu), &a);
        if (r3 == 0u) {
            wr32(param_1 + 0x30u, 0xffffffffu);
        } else {
            a.r[0] = param_2;
            r3 = tc_call(0x800b32c0u, &a);
            wr32(param_1 + 0x30u, r3);
        }
    }
    f0 = (f64)rdf32(0x805748c0u);
    wr32(param_1 + 4u, param_2);
    wr32(param_1 + 0x34u, 0u);
    wrf32d(param_1 + 0x38u, f0);
    return;
}
