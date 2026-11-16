#include "tc_rt.h"

u32 fn_8007dd4c(s32 param_1)
{
    if (param_1 >= 85) {
        return 0u;
    }
    if (((((u32)param_1 == 2u || (u32)param_1 == 0xeu) || ((u32)param_1 == 0x12u || (u32)param_1 == 0x16u)) || (((u32)param_1 == 0x1au || (u32)param_1 == 0x1eu) || ((u32)param_1 == 0x22u || (u32)param_1 == 0x24u))) || ((((u32)param_1 == 0x29u || (u32)param_1 == 0x2du) || ((u32)param_1 == 0x31u || (u32)param_1 == 0x35u)) || (((u32)param_1 == 0x39u || (u32)param_1 == 0x3du) || (u32)param_1 == 0x41u))) {
        return 1u;
    }
    return 0u;
}
