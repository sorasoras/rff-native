#include "tc_rt.h"

u32 fn_80297370(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_1 == 0u || param_1 == 1u) {
        if (((u32)rd8(0x8053df9bu) & 0x20u) != 0u) {
            if (param_1 != (u32)rd16(0x8053effeu)) {
                r3 = tc_call(0x80295814u, &a);
                if ((r3 & 0xffu) == 0u) {
                    r3 = 6u;
                    return r3;
                }
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                if (r3 == 0u) {
                    r3 = 3u;
                    return r3;
                }
                a.r[0] = r3;
                a.r[1] = param_1 & 0xffu;
                (void)tc_call(0x802a2124u, &a);
                wr16(0x8053effeu, (u16)param_1);
            }
            r3 = 0u;
        } else {
            r3 = 4u;
        }
    } else {
        r3 = 5u;
    }
    return r3;
}
