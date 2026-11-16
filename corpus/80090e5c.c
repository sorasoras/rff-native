#include "tc_rt.h"

void fn_80090e5c(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80090d90u, &a);
    wr32((u32)param_1 + 0xbf4u, (u32)param_2);
    if ((u32)param_2 != 0x19u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x8009183cu, &a);
    }
    return;
}
