#include "tc_rt.h"

u32 fn_800cf66c(void)
{
    u32 r3 = 0;
    r3 = rd32(0x805711e8u);
    if (r3 != 0u) {
        r3 = rd32(r3 + 8u);
        return r3;
    }
    return 5u;
}
