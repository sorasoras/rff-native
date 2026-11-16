#include "tc_rt.h"

u32 fn_800c9498(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x20u);
    if ((((r3 >> 0x1cu) & 0xfu) == 1u && ((r3 >> 0x18u) & 0xfu) == 1u) && (r3 & 0xffffu) == 0x4a50u) {
        return 1u;
    }
    return 0u;
}
