#include "tc_rt.h"

u32 fn_80041170(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80041144u, &a);
    if (r3 != 0u) {
        r3 = tc_call(0x8004706cu, &a);
    } else {
        r3 = 0u;
    }
    return r3;
}
