#include "tc_rt.h"

u32 fn_8009f2f4(s32 param_1)
{
    u32 r4 = 0;
    r4 = 0u;
    if ((u32)param_1 != 0u && (rd32((u32)param_1 + 0x1cu) & 1u) != 0u) {
        r4 = rd32((u32)param_1 + 0x18u);
    }
    return r4;
}
