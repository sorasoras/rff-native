#include "tc_rt.h"

void fn_8020f2a0(s32 param_1)
{
    if (rd32(rd32(0x805711ccu) + 0xfcu) == 2u) {
        wr32((u32)param_1 + 0x18u, 0xbu);
    } else {
        wr32((u32)param_1 + 0x18u, 5u);
    }
    wr32((u32)param_1 + 0x1cu, 0xffffffffu);
    return;
}
