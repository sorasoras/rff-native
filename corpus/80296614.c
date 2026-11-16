#include "tc_rt.h"

u32 fn_80296614(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x8053dfa0u;
    a.r[1] = param_1;
    a.r[2] = 3u;
    (void)tc_call(0x80004338u, &a);
    if ((u32)rd8(0x8053dfa6u) <= 1u) {
        r3 = 0xcu;
    } else {
        a.r[0] = 2u;
        r3 = tc_call(0x8028a274u, &a);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_1;
            (void)tc_call(0x802a1824u, &a);
            r3 = 0u;
        } else {
            r3 = 3u;
        }
    }
    return r3;
}
