#include "tc_rt.h"

u32 fn_80081094(void)
{
    u32 r3 = 0;
    r3 = ((u32)rd8(0x80492823u) + ((u32)rd8(0x80492822u) * 6u) + 1u) & 0xffu;
    if ((u32)rd8(0x80492824u) <= 4u) {
        if (r3 >= 2u) {
            r3 = r3 - 1u;
            return r3;
        }
        return 0x1eu;
    }
    return r3;
}
