#include "tc_rt.h"

void fn_802dc040(s32 param_1)
{
    u32 r6 = 0;
    r6 = (u32)(s8)rd8((u32)param_1 - 0x7fab8a98u);
    if ((s32)r6 >= 0) {
        wr8((u32)param_1 - 0x7fab8a98u, 0xffu);
        wr8(r6 - 0x7fab8aa8u, 0xffu);
        return;
    }
    return;
}
