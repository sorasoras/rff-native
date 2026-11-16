#include "tc_rt.h"

void fn_801c2590(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x48u) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80070068u, &a);
        return;
    }
    return;
}
