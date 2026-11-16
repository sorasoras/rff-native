#include "tc_rt.h"

void fn_80141f50(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0xcu;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x80141fe8u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x20u;
    } while ((s32)r30 < 8);
    return;
}
