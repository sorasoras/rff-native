#include "tc_rt.h"

u32 fn_80048e50(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        a.r[0] = 0x803c3b48u;
        a.r[1] = 0x80048f7cu;
        a.r[2] = 0u;
        a.r[3] = 0x803c4e60u;
        a.r[4] = 0x1000u;
        a.r[5] = param_1;
        a.r[6] = 1u;
        r3 = tc_call(0x8022f550u, &a);
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
    } else {
        a.r[0] = 0x803c3b48u;
        a.r[1] = 0x80049048u;
        a.r[2] = (u32)param_2;
        a.r[3] = 0x803c4e60u;
        a.r[4] = 0x1000u;
        a.r[5] = param_1;
        a.r[6] = 1u;
        r3 = tc_call(0x8022f550u, &a);
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
    }
    a.r[0] = 0x803c4e60u;
    a.r[1] = 0x803c4ea0u;
    a.r[2] = 3u;
    (void)tc_call(0x8022ca4cu, &a);
    a.r[0] = 0x803c4e80u;
    a.r[1] = 0x803c4eacu;
    a.r[2] = 3u;
    (void)tc_call(0x8022ca4cu, &a);
    r3 = 1u;
    wr32(0x80571068u, 1u);
    wr32(0x8057106cu, 1u);
    return r3;
}
