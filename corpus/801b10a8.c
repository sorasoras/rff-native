#include "tc_rt.h"

u32 fn_801b10a8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x801b0c80u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        r3 = tc_call(0x8018095cu, &a);
    }
    return r3;
}
