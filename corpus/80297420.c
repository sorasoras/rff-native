#include "tc_rt.h"

u32 fn_80297420(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u && (u32)param_1 != 1u) {
        r3 = 5u;
    } else {
        if (((u32)rd8(0x8053df9bu) & 0x40u) == 0u) {
            r3 = 4u;
        } else {
            r3 = tc_call(0x80295814u, &a);
            if ((r3 & 0xffu) == 0u) {
                r3 = 6u;
            } else {
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = (u32)param_1;
                    (void)tc_call(0x802a20f4u, &a);
                    r3 = 0u;
                } else {
                    r3 = 3u;
                }
            }
        }
    }
    return r3;
}
