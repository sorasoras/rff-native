#include "tc_rt.h"

u32 fn_801f89e8(u32 param_1)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x801f88d0u, &a);
    if (r3 == 0u) {
        r3 = tc_call(0x801f888cu, &a);
        a.r[0] = r3;
        r3 = tc_call(0x800d595cu, &a);
        c0lt = (s32)r3 < 2;
        if (r3 == 2u) {
            r3 = 2u;
        } else {
            if (!c0lt) {
                if ((s32)r3 < 4) {
                    r3 = 3u;
                    return r3;
                }
            } else {
                c0lt = (s32)r3 < 0;
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    r3 = 1u;
                    return r3;
                }
            }
            r3 = 0xffffffffu;
        }
    } else {
        r3 = 4u;
    }
    return r3;
}
