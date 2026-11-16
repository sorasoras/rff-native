#include "tc_rt.h"

void fn_801d1928(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        return;
    }
    r3 = rd32((u32)param_1 + 0x39cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157f30u, &a);
        wr32((u32)param_1 + 0x39cu, 0u);
    }
    return;
}
