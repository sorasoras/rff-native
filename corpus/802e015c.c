#include "tc_rt.h"

u32 fn_802e015c(s32 param_1)
{
    return (u32)rd16(rd32(rd32((u32)param_1 + 0x14u) + 8u) + 0xau);
}
