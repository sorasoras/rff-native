#include "tc_rt.h"

u32 fn_800eb41c(u32 param_1)
{
    u32 r3 = 0, r12 = 0;
    TcArgs a = {0};
    if (param_1 < 0x9au) {
        r12 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fca91c8u);
        if (r12 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 0x80356e38u;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            return r3;
        }
    }
    return 0xffffffffu;
}
