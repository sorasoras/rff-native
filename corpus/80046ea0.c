#include "tc_rt.h"

u32 fn_80046ea0(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x803c1dc8u);
    if ((r3 & 1u) != 0u) {
        r3 = tc_call(0x8023f380u, &a);
        if (r3 != 0u) {
            r3 = 0u;
            return r3;
        }
        r3 = 1u;
        return r3;
    }
    if ((r3 & 2u) != 0u) {
        r3 = tc_call(0x8023f380u, &a);
        if (r3 != 1u) {
            r3 = 0u;
            return r3;
        }
        r3 = 1u;
        return r3;
    }
    r3 = 1u;
    return r3;
}
