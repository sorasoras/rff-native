#include "tc_rt.h"

u32 fn_801c0edc(u32 param_1, s32 param_2, s32 param_3)
{
    (void)param_1;
    return rd32(rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fc8d1f8u) + (((u32)param_3 << 2u) & 0xfffffffcu));
}
