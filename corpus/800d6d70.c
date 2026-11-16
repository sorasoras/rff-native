#include "tc_rt.h"

void fn_800d6d70(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x7cu) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8007091cu, &a);
        return;
    }
    return;
}
