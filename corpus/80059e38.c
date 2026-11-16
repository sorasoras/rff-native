#include "tc_rt.h"

u32 fn_80059e38(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if (rd32(0x804dfa78u) != 0u) {
        r3 = tc_call(0x8003c220u, &a);
        if (r3 != 1u) {
            r31 = 1u;
        }
    }
    return r31;
}
