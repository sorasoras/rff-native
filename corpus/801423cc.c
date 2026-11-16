#include "tc_rt.h"

s32 fn_801423cc(s32 param_1, s32 param_2)
{
    return (s32)(rd32((u32)param_1 + (((u32)rd8(0x80492821u) << 2u) & 0xfffffffcu) + 8u) + (((u32)param_2 << 3u) & 0xfffffff8u));
}
