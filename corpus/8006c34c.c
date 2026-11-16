#include "tc_rt.h"

void fn_8006c34c(s32 param_1)
{
    wr16((u32)param_1 + 0xa70u, 0x2e8u);
    wr8((u32)param_1 + 0xa72u, 1u);
    wr8((u32)param_1 + 0xa73u, 1u);
    wr16((u32)param_1 + 0xa74u, 0x2e8u);
    wr8((u32)param_1 + 0xa76u, 1u);
    wr8((u32)param_1 + 0xa77u, 1u);
    wr16((u32)param_1 + 0xa78u, 0x2e8u);
    wr8((u32)param_1 + 0xa7au, 1u);
    wr8((u32)param_1 + 0xa7bu, 1u);
    wr16((u32)param_1 + 0xa7cu, 0x2e8u);
    wr8((u32)param_1 + 0xa7eu, 1u);
    wr8((u32)param_1 + 0xa7fu, 1u);
    return;
}
