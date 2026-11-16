#include "tc_rt.h"

u32 fn_801e5d2c(void)
{
    u32 r4 = 0;
    r4 = 0u;
    if (rd32(0x804dcaf4u) != 0u || rd32(0x804dcb0cu) != 0u) {
        r4 = 1u;
    }
    if (r4 != 0u || rd32(0x805713b8u) != 0u) {
        return 1u;
    }
    return 0u;
}
