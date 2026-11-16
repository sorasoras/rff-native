#include "tc_rt.h"

u32 fn_800afa44(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x1ccu), &a);
    r31 = 0u;
    if (rd32(param_1 + 0x1468u) == r3) {
        a.r[0] = param_1;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    return r31;
}
