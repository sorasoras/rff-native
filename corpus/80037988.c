#include "tc_rt.h"

u32 fn_80037988(s32 param_1, s32 param_2)
{
    if (param_2 < 0) {
        return 0u;
    }
    return rd32(rd32((u32)param_1 + 0xcu) + (((u32)param_2 << 3u) & 0xfffffff8u));
}
