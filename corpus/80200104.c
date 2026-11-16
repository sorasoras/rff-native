#include "tc_rt.h"

void fn_80200104(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x28u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80201558u, &a);
        return;
    }
    return;
}
