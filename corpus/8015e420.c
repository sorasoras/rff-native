#include "tc_rt.h"

u32 fn_8015e420(s32 param_1)
{
    u32 r3 = 0;
    if (rd32((u32)param_1 + 0x120u) == 4u) {
        return 1u;
    }
    r3 = rd32((u32)param_1 + 0x130u);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
