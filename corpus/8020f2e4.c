#include "tc_rt.h"

void fn_8020f2e4(s32 param_1)
{
    wr32((u32)param_1 + 0x18u, 3u);
    wr32((u32)param_1 + 0x1cu, 0xffffffffu);
    return;
}
