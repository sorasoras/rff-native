#include "tc_rt.h"

u32 fn_802154f8(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x3dcu, param_2);
    return 1u;
}
