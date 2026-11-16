#include "tc_rt.h"

void fn_80095f78(s32 param_1)
{
    wr16((u32)param_1 + 0x100u, 0xb4u);
    return;
}
