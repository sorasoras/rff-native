#include "tc_rt.h"

u32 fn_80046ba0(void)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32(0x803c1de0u) != 0u && (u32)rd8(0x803c1de4u) == 3u) {
        r0 = (u32)rd8(0x803c1de7u);
        wr8(0x803c1de5u, 5u);
        wr8(0x803c1de4u, 5u);
        if (r0 != 0u) {
            (void)tc_call(0x8004802cu, &a);
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
