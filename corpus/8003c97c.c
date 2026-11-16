#include "tc_rt.h"

u32 fn_8003c97c(void)
{
    u32 r3 = 0;
    r3 = rd32(0x803be2acu);
    if ((r3 & 1u) != 0u && (r3 & 2u) != 0u) {
        return 1u;
    }
    return 0u;
}
