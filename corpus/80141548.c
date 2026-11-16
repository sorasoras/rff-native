#include "tc_rt.h"

void fn_80141548(s32 param_1, u32 param_2)
{
    if ((rd32((u32)param_1 + 0x90u) & 0x8070c27fu) != 0u) {
        wr32((u32)param_1 + 0xc4u, (((0u - param_2) | param_2) >> 0x1fu) & 1u);
        return;
    }
    return;
}
