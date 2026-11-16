#include "tc_rt.h"

u32 fn_800461a8(void)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32(0x803c1de0u) != 0u && (u32)rd8(0x803c1de4u) == 0u) {
        r0 = rd32(0x803c1df4u);
        wr32(0x803c1de0u, 0u);
        if (r0 == 0u) {
            a.r[0] = 0x803c1d40u;
            (void)tc_call(0x80234b88u, &a);
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
