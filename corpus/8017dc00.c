#include "tc_rt.h"

u32 fn_8017dc00(u32 param_1, u32 param_2, s32 param_3)
{
    (void)param_1;
    if (param_2 <= 8u && (u32)param_3 == rd32(((param_2 << 3u) & 0xfffffff8u) - 0x7fc90de4u)) {
        return 1u;
    }
    return 0u;
}
