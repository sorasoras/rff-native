#include "tc_rt.h"

void fn_8006d6bc(s32 param_1)
{
    wr32((u32)param_1 + 0x1610u, 0xffffffffu);
    wr16((u32)param_1 + 0x1618u, 0u);
    wr16((u32)param_1 + 0x1616u, 0u);
    wr16((u32)param_1 + 0x1614u, 0u);
    return;
}
