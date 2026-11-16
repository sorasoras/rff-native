#include "tc_rt.h"

s32 fn_80301334(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0x28u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1 + 8u;
        r3 = tc_call(0x802facacu, &a);
        c0eq = r3 == 0u;
        if (c0eq) {
            r3 = 0u;
        } else {
            if (!c0eq) {
                wr32(r3 + 0x18u, 0u);
                wr8(r3 + 0x1cu, 1u);
                wr8(r3 + 0x1du, 0x80u);
                wr8(r3 + 0x1eu, 0u);
                wr32(r3 + 0x20u, 0u);
                wr32(r3 + 0x24u, 0u);
            }
        }
    }
    return (s32)r3;
}
