#include "tc_rt.h"

u32 fn_802525a8(s32 param_1)
{
    return (u32)rd8((u32)param_1 + 0x1fu) & 1u;
}
