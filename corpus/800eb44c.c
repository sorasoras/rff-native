#include "tc_rt.h"

void fn_800eb44c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r12 = 0;
    TcArgs a = {0};
    if (param_1 < 0x9au) {
        r12 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fca8f60u);
        if (r12 != 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = 0x803570a0u;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            if (r3 == 0u) {
                return;
            }
            wr8(param_1 - 0x7fb79ba4u, (u8)((u32)rd8(param_1 - 0x7fb79ba4u) | 1u));
            return;
        }
    }
    if (param_1 == 0x43u || param_1 == 0x63u || param_1 == 0x67u) {
        a.r[0] = param_2;
        r3 = tc_call(0x801d3318u, &a);
        if (r3 != 0u) {
            wr8(param_1 - 0x7fb79ba4u, (u8)((u32)rd8(param_1 - 0x7fb79ba4u) | 1u));
            return;
        }
    } else {
        r3 = tc_call(0x800a7ed4u, &a);
        if (r3 != 0u) {
            wr8(param_1 - 0x7fb79ba4u, (u8)((u32)rd8(param_1 - 0x7fb79ba4u) | 1u));
            return;
        }
    }
    return;
}
