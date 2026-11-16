#include "tc_rt.h"

u32 fn_8013f39c(u32 param_1)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8013f288u, &a);
    if (r3 != 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x8013f2c0u, &a);
        if (r3 != 0u) {
            r3 = 1u;
        } else {
            a.r[0] = param_1;
            r3 = tc_call(0x8013f2f8u, &a);
            if (r3 != 0u) {
                r3 = 2u;
            } else {
                a.r[0] = param_1;
                r3 = tc_call(0x8013f330u, &a);
                if (r3 != 0u) {
                    r3 = 3u;
                } else {
                    a.r[0] = param_1;
                    r3 = tc_call(0x8013f368u, &a);
                    c0eq = r3 == 0u;
                    r3 = 0u;
                    if (!c0eq) {
                        r3 = 4u;
                    }
                }
            }
        }
    }
    return r3;
}
