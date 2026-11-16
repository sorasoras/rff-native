#include "tc_rt.h"

s32 fn_801a3ba4(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xdc0u) != 0u) {
        r3 = 0u;
    } else {
        f1 = (f64)rdf32((u32)param_1 + 0xd84u);
        f0 = (f64)rdf32((u32)param_1 + 0x2e0u);
        r4 = ((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u;
        if (r4 != 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x801a3c1cu, &a);
            r4 = r3;
        }
        if (r4 != 0u && (s32)rd32((u32)param_1 + 0xd00u) < 1) {
            r4 = 0u;
        }
        r3 = r4;
    }
    return (s32)r3;
}
