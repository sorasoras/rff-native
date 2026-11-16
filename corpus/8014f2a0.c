#include "tc_rt.h"

void fn_8014f2a0(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x134u) != 1u || rd32((u32)param_1 + 0x120u) == 9u) {
        if (rd32((u32)param_1 + 0x14cu) != 0u) {
            return;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800da0d8u, &a);
        return;
    }
    return;
}
