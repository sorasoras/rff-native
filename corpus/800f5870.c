#include "tc_rt.h"

void fn_800f5870(s32 param_1, s32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0x4au) {
        r31 = (u32)param_2 + (u32)param_1;
        if ((u32)rd8(r31 + 0xafu) == 0u) {
            (void)tc_call(0x8013eae0u, &a);
            wr8(r31 + 0xafu, 1u);
        }
    }
    return;
}
