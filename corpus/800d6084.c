#include "tc_rt.h"

void fn_800d6084(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x98u) != 2u) {
        if ((u32)((s32)rd32((u32)param_1 + 0xb4u) >> 31) == 0u) {
            return;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = param_r4;
        (void)tc_call(0x800d6d84u, &a);
        return;
    }
    return;
}
