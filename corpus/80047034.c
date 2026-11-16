#include "tc_rt.h"

u32 fn_80047034(void)
{
    if (rd32(0x803c1de0u) != 0u) {
        if ((u32)rd8(0x803c1de4u) == 0u) {
            return 0u;
        }
        if (rd32(0x803c1e38u) == 0u) {
            return 0u;
        }
        return 1u;
    }
    return 0u;
}
