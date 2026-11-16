#include "tc_rt.h"

void fn_802ad9d8(u32 param_1, s32 param_2)
{
    wr32(((((u32)param_2 - 0x40u) << 2u) & 0xfffffffcu) - 0x7fabedbcu, param_1);
    return;
}
