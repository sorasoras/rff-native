#include "tc_rt.h"

u32 fn_800450f4(void)
{
    if ((u32)rd8(0x803c1c9cu) != 0u) {
        return rd32(0x803c1c94u);
    }
    return 0u;
}
