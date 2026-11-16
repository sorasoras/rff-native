#include "tc_rt.h"

u32 fn_800a8674(void)
{
    u32 r4 = 0;
    if (rd32(0x803541b8u) == 1u) {
        r4 = rd32(0x8049e2c8u);
        return (((0xffffffffu - r4) | (r4 + 1u)) >> 0x1fu) & 1u;
    }
    return 0u;
}
