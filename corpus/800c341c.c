#include "tc_rt.h"

u32 fn_800c341c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    if ((rd32(0x80499094u) & 0x20u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 0x20u;
        r3 = tc_call(0x801a8f18u, &a);
        if (r3 == 0u) {
            r31 = 0u;
        }
    }
    if (r31 != 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800c3320u, &a);
        if (r3 != 0u && (rd32(0x80499094u) & 0x10u) == 0u) {
            r0 = rd32((u32)param_1 + 0x5c0u);
            r3 = 0u;
            if ((s32)r0 >= 504 && (s32)r0 <= 646) {
                r3 = 1u;
            }
            if (r3 != 0u && (u32)rd8(((rd32((u32)param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u) != 0u) {
                r3 = 1u;
                return r3;
            }
        }
        r3 = 0u;
    }
    return r3;
}
