#include "tc_rt.h"

u32 fn_8003cb58(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8003cf20u, &a);
    if (r3 == 1u) {
        r3 = tc_call(0x8023f56cu, &a);
        if (r3 != 0u) {
            r3 = tc_call(0x8023f50cu, &a);
            if (r3 != 2u) {
                a.r[0] = 0x8038e33cu;
                (void)tc_call(0x8003caf0u, &a);
            }
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
