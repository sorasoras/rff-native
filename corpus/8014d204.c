#include "tc_rt.h"

void fn_8014d204(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x54u) != 0u) {
        if (rd32((u32)param_1 + 0x50u) == (u32)param_2) {
            return;
        }
        wr32((u32)param_1 + 0x50u, (u32)param_2);
        a.r[0] = (u32)param_1;
        a.r[1] = 4u;
        (void)tc_call(0x8014d2d8u, &a);
        return;
    }
    return;
}
