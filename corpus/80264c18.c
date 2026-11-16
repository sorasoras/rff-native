#include "tc_rt.h"

u32 fn_80264c18(void)
{
    u32 r4 = 0;
    r4 = rd32(0x8038f2e0u);
    return (((0xffffffffu - r4) | (r4 + 1u)) >> 0x1fu) & 1u;
}
