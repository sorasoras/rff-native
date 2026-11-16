#include "tc_rt.h"

s32 fn_8009f89c(u32 param_1)
{
    return (s32)((u32)rd8(param_1) + ((((u32)rd8(param_1 + 1u) + ((((u32)rd8(param_1 + 2u) + (((u32)rd8(param_1 + 3u) << 8u) & 0xffffff00u)) << 8u) & 0xffffff00u)) << 8u) & 0xffffff00u));
}
