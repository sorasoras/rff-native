#include "tc_rt.h"

u32 fn_8013bdc0(u32 param_1, s32 param_2, s32 param_3)
{
    (void)param_1;
    return rd32((((u32)param_2 << 2u) & 0xfffffffcu) + ((((u32)param_3 << 4u) & 0xfffffff0u) - 0x7fcc5c28u));
}
