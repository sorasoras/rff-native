#include "tc_rt.h"

u32 fn_802c10d4(u32 param_1)
{
    u32 r0 = 0;
    r0 = rd32(param_1);
    if ((s32)r0 >= 4) {
        return 0u;
    }
    return (u32)rd8(r0 - 0x7fab8d28u);
}
