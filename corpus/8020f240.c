#include "tc_rt.h"

void fn_8020f240(s32 param_1)
{
    if (rd32(rd32(0x805711ccu) + 0xfcu) == 2u) {
        wr32((u32)param_1 + 0x18u, 9u);
    } else {
        wr32((u32)param_1 + 0x18u, 1u);
    }
    wr32((u32)param_1 + 0x1cu, 0xffffffffu);
    return;
}
