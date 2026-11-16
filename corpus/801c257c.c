#include "tc_rt.h"

void fn_801c257c(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x48u) == 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8006ff58u, &a);
        return;
    }
    return;
}
