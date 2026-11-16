#include "tc_rt.h"

u32 fn_800c4e4c(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x290u) != 0x19u) {
        r3 = 0u;
    } else {
        f1 = (f64)rdf32(0x80572eacu);
        wr32(param_1 + 0x290u, 0x1au);
        a.r[0] = param_1;
        a.r[1] = 0x27u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        r3 = 1u;
    }
    return r3;
}
