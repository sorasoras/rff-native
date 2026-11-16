#include "tc_rt.h"

u32 fn_80091b10(s32 param_1, u32 param_2)
{
    if (param_2 >= 0x14u) {
        return 0u;
    }
    return rd32((u32)param_1 + ((param_2 << 2u) & 0xfffffffcu) + 0xbf8u);
}
