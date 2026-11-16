#include "tc_rt.h"

void fn_8021860c(s32 param_1)
{
    wr8((u32)param_1 + 0x20cu, 0u);
    wr32((u32)param_1 + 0x208u, 0u);
    wr8((u32)param_1 + 0x8cu, 0u);
    return;
}
