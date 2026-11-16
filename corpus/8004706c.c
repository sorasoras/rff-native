#include "tc_rt.h"

u32 fn_8004706c(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80047034u, &a);
    if (r3 != 0u) {
        r3 = rd32(0x803c1e38u);
    } else {
        r3 = 0u;
    }
    return r3;
}
