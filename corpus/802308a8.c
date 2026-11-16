#include "tc_rt.h"

u32 fn_802308a8(u32 param_1)
{
    u32 r4 = 0;
    if (param_1 >= 0x10000u) {
        return 0u;
    }
    r4 = rd32(((param_1 >> 6u) & 0x3fcu) - 0x7fc79a80u);
    if (r4 != 0u) {
        return (u32)rd16(r4 + ((param_1 << 1u) & 0x1feu));
    }
    return 0u;
}
