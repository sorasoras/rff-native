#include "tc_rt.h"

u32 fn_80081034(void)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    r5 = (u32)rd8(0x80492824u);
    r3 = (u32)rd8(0x80492821u);
    r0 = ((u32)rd8(0x80492823u) + ((u32)rd8(0x80492822u) * 6u) + 1u) & 0xffu;
    if (r0 < 2u || r0 > 0x1eu) {
        if (r0 != 1u) {
            return r3;
        }
        if (r5 > 4u) {
            return r3;
        }
        if (r3 >= 1u) {
            r3 = r3 - 1u;
            return r3;
        }
        return 3u;
    }
    return r3;
}
