#include "tc_rt.h"

u32 fn_80046a58(void)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32(0x803c1de0u) != 0u) {
        r0 = (u32)rd8(0x803c1de4u);
        if (r0 == 1u || r0 == 5u) {
            if (r0 == 5u && (u32)rd8(0x803c1de7u) != 0u) {
                (void)tc_call(0x80047544u, &a);
            }
            wr8(0x803c1de4u, 3u);
            r3 = 1u;
            wr32(0x803c1e10u, 0u);
            wr32(0x803c1e14u, 0u);
            wr32(0x803c1e0cu, 0xffffffffu);
            wr32(0x803c1e08u, 0xffffffffu);
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
