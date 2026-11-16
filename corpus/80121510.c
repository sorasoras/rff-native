#include "tc_rt.h"

void fn_80121510(s32 param_1)
{
    wr32((u32)param_1 + 0x1cu, 1u);
    return;
}
