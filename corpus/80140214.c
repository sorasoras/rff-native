#include "tc_rt.h"

u32 fn_80140214(u32 param_1, s32 param_2)
{
    return (u32)rd8(rd32(param_1) + ((((u32)param_2 - rd32(param_1 + 8u)) << 3u) & 0xfffffff8u) + 6u);
}
