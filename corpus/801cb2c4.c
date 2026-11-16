#include "tc_rt.h"

u32 fn_801cb2c4(u32 param_1, s32 param_2)
{
    return (u32)rd16(rd32(param_1) + (((u32)param_2 << 3u) & 0xfffffff8u));
}
