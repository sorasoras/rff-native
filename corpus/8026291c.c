#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

f64 fn_8026291c(f64 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = param_1;
    wrf64(0x817fdff8u, param_1);
    r5 = (u32)(px_f2b(param_1) >> 0x20ull);
    wr32(param_2, 0u);
    r4 = r5 & 0x7fffffffu;
    r6 = (u32)px_f2b(param_1);
    if ((s32)r4 < 2146435072) {
        if ((r4 | r6) == 0u) {
            return f1;
        }
        if ((s32)r4 < 1048576) {
            f0 = rdf64(0x80577268u);
            wr32(param_2, 0xffffffcau);
            f1 = param_1 * f0;
            wrf64(0x817fdff8u, f1);
            r5 = (u32)(px_f2b(f1) >> 0x20ull);
            r4 = r5 & 0x7fffffffu;
        }
        r0 = r5 & 0x800fffffu;
        r5 = rd32(param_2);
        r4 = (u32)((s32)r4 >> 20);
        r0 = r0 | 0x3fe00000u;
        wr32(0x817fdff8u, r0);
        r4 = r4 + r5;
        wr32(param_2, r4 - 0x3feu);
        f1 = rdf64(0x817fdff8u);
    }
    return f1;
}
