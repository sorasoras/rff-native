#include "tc_rt.h"

u32 fn_800b3880(void)
{
    if ((u32)rd16(0x80499214u) != 0x2e8u) {
        return 1u;
    }
    return 0u;
}
