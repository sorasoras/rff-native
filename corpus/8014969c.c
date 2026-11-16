#include "tc_rt.h"

u32 fn_8014969c(u32 param_1, s32 param_2)
{
    return rd32(rd32(0x805712f4u) + (rd32(param_1) * 0x8cu) + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x48u);
}
