#include "tc_rt.h"

u32 fn_802963fc(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 == 0u) {
        r3 = 5u;
    } else {
        if ((u32)rd8(0x8053dfa6u) <= 1u) {
            r3 = 0xcu;
        } else {
            a.r[0] = 2u;
            r3 = tc_call(0x8028a274u, &a);
            r31 = r3;
            if (r3 != 0u) {
                if (param_1 != 0x8053d958u) {
                    a.r[0] = 0x8053d958u;
                    a.r[1] = 0u;
                    a.r[2] = 0x20u;
                    (void)tc_call(0x8000443cu, &a);
                    a.r[0] = 0x8053d958u;
                    a.r[1] = param_1;
                    a.r[2] = 0x1fu;
                    (void)tc_call(0x8025bdf4u, &a);
                }
                a.r[0] = r31;
                a.r[1] = 0x8053d958u;
                (void)tc_call(0x802a150cu, &a);
                r3 = 1u;
            } else {
                r3 = 3u;
            }
        }
    }
    return r3;
}
