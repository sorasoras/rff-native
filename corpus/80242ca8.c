#include "tc_rt.h"

s32 fn_80242ca8(void)
{
    return (s32)(((u32)rd16(0xcc00503au) << 5u) & 0xfffe0u);
}
