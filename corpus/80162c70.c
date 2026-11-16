#include "tc_rt.h"

void fn_80162c70(s32 param_1, u32 param_2)
{
    u32 r5 = 0;
    r5 = rd32((u32)param_1 + 0x48u);
    if (r5 != 0u) {
        wr32(r5 + 0x44u, param_2);
    }
    if (rd32((u32)param_1 + 0x44u) == 0u) {
        wr32((u32)param_1 + 0x44u, param_2);
    }
    wr32((u32)param_1 + 0x48u, param_2);
    return;
}
