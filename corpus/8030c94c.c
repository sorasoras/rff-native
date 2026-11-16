#include "tc_rt.h"

void fn_8030c94c(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + (((u32)param_2 << 4u) & 0xfffffff0u);
    r30 = 0u;
    while ((s32)r30 < (s32)rd32((u32)param_1 + 0x90u)) {
        r3 = rd32(r31 + 0xcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_3;
            (void)tc_call(0x802f2f98u, &a);
        }
        r31 = r31 + 4u;
        r30 = r30 + 1u;
    }
    return;
}
