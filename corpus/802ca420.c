#include "tc_rt.h"

u32 fn_802ca420(s32 param_1)
{
    if (rd32((u32)param_1 + 0x14u) != 0x12u) {
        return 0xffffffffu;
    }
    return rd32((u32)param_1 + 0xb8u);
}
