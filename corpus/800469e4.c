#include "tc_rt.h"

u32 fn_800469e4(void)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800466d0u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r0 = (u32)rd8(0x803c1de7u);
        wr8(0x803c1de4u, 1u);
        wr8(0x803c1de5u, 0u);
        wr32(0x803c1e38u, 0u);
        wr32(0x803c1e3cu, 0u);
        if (r0 != 0u) {
            (void)tc_call(0x800471dcu, &a);
        }
        a.r[0] = 0x80046c04u;
        r3 = tc_call(0x8023d914u, &a);
        wr32(0x80571050u, r3);
        r3 = 1u;
    }
    return r3;
}
