#include "tc_rt.h"

void fn_801caa7c(s32 param_1)
{
    TcArgs a = {0};
    if ((rd32(0x8057118cu) & 0x10u) != 0u && (u32)rd8((u32)param_1 + 0x8cu) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x28u, 1u);
    }
    return;
}
