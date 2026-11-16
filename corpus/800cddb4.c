#include "tc_rt.h"

void fn_800cddb4(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xf0u) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8006ff00u, &a);
        wr32((u32)param_1 + 0xf0u, 0u);
    }
    return;
}
