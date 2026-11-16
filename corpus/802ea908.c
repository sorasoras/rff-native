#include "tc_rt.h"

u32 fn_802ea908(s32 param_1, u32 param_2)
{
    if (param_2 >= (u32)rd8((u32)param_1 + 0x104u)) {
        return 0u;
    }
    return rd32(rd32((u32)param_1 + 0x100u) + ((param_2 << 3u) & 0xfffffff8u) + 4u);
}
