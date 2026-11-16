#include "tc_rt.h"

s32 fn_80242cd0(void)
{
    return (s32)(((u32)rd16(0xcc005036u) << 5u) & 0xfffe0u);
}
