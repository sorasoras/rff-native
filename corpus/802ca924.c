#include "tc_rt.h"

u32 fn_802ca924(s32 param_1)
{
    return (u32)rd16(rd32((u32)param_1 + 0xcu) + 8u);
}
