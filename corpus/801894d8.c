#include "tc_rt.h"

u32 fn_801894d8(u32 param_1, s32 param_2)
{
    u32 r4 = 0;
    r4 = (u32)param_2;
    if (param_2 < 0 || param_2 >= (s32)rd32(param_1)) {
        r4 = 0u;
    }
    return rd32(rd32(param_1 + 0x24u) + ((r4 << 2u) & 0xfffffffcu));
}
