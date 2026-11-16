#include "tc_rt.h"

s32 fn_8025879c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0;
    TcArgs a = {0};
    r5 = rd32(param_1 + 0x1cu);
    r0 = rd32(param_1 + 0x24u) - r5;
    if (r0 != 0u) {
        r12 = rd32(param_1 + 0x40u);
        wr32(param_1 + 0x28u, r0);
        a.r[0] = rd32(param_1);
        a.r[1] = r5;
        a.r[2] = param_1 + 0x28u;
        a.r[3] = rd32(param_1 + 0x48u);
        a.f[0] = 0.0;
        r3 = tc_call(r12, &a);
        if (param_2 != 0u) {
            wr32(param_2, rd32(param_1 + 0x28u));
        }
        if (r3 != 0u) {
            return (s32)r3;
        }
        wr32(param_1 + 0x18u, rd32(param_1 + 0x18u) + rd32(param_1 + 0x28u));
    }
    r4 = rd32(param_1 + 0x18u);
    r3 = 0u;
    r5 = rd32(param_1 + 0x20u);
    r0 = r4 & rd32(param_1 + 0x2cu);
    wr32(param_1 + 0x24u, rd32(param_1 + 0x1cu));
    r0 = r5 - r0;
    wr32(param_1 + 0x28u, r0);
    wr32(param_1 + 0x34u, r4);
    return (s32)r3;
}
