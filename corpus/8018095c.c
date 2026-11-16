#include "tc_rt.h"

u32 fn_8018095c(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x100u);
    if ((s32)rd32((u32)param_1 + 0x140u) <= (s32)r4 && (s32)r4 <= (s32)rd32((u32)param_1 + 0x144u)) {
        return 0u;
    }
    return 1u;
}
