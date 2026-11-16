#include "tc_rt.h"

void fn_8031f0f0(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x38u);
    while (r4 != 0u) {
        if (rd32(r4 + 0xcu) == 1u && rd32(r4 + 0xd8u) == 3u) {
            wr32(r4 + 0xd8u, 1u);
        }
        r4 = r4 + (u32)rd16((u32)param_1 + 0x42u);
        r4 = rd32(r4 + 4u);
    }
    return;
}
