#include "tc_rt.h"

void fn_800ed5f4(s32 param_1, u32 param_r4)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = (u32)rd8(((u32)param_1 * 0x38u) - 0x7fb64fcau);
    if (r31 == 1u || r31 == 2u) {
        r30 = 1u;
        wr8(((u32)param_1 * 0x38u) - 0x7fb64fcau, 0u);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x800a4340u, &a);
    if (r30 != 0u) {
        wr8(((u32)param_1 * 0x38u) - 0x7fb64fcau, (u8)r31);
    }
    return;
}
