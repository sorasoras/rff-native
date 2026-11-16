#include "tc_rt.h"

void fn_800ca37c(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0x80u, (rd32((u32)param_1 + 0x80u) & 0x7fffffffu) | (((u32)param_2 << 0x1fu) & 0x80000000u));
    if ((u32)param_2 == 0u) {
        wr32((u32)param_1 + 0xc4u, 0u);
        return;
    }
    if ((u32)param_2 == 1u) {
        wr32((u32)param_1 + 0xc4u, rd32((u32)param_1 + 0x120u));
        return;
    }
    return;
}
