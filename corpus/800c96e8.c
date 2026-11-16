#include "tc_rt.h"

void fn_800c96e8(s32 param_1)
{
    wr32((u32)param_1 + 0x48cu, 0u);
    wr16((u32)param_1 + 0xcu, 0u);
    wr16((u32)param_1 + 0x40cu, 0u);
    wr32((u32)param_1 + 0x490u, 0u);
    wr32((u32)param_1 + 0x494u, 0u);
    wr32((u32)param_1 + 0x49cu, 1u);
    wr32((u32)param_1 + 0x4a0u, 0xffffffffu);
    return;
}
