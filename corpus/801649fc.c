#include "tc_rt.h"

u32 fn_801649fc(s32 param_1)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x120u);
    if ((r0 != 0u && r0 != 2u) && r0 != 3u) {
        wr32((u32)param_1 + 0x120u, 1u);
    }
    return 1u;
}
