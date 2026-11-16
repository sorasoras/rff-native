#include "tc_rt.h"

void fn_8006c418(s32 param_1)
{
    wr16((u32)param_1 + 0xa50u, 0x2e8u);
    wr8((u32)param_1 + 0xa52u, 1u);
    wr8((u32)param_1 + 0xa53u, 1u);
    wr16((u32)param_1 + 0xa4cu, 0x2e8u);
    wr8((u32)param_1 + 0xa4eu, 1u);
    wr8((u32)param_1 + 0xa4fu, 1u);
    wr32((u32)param_1 + 0xa54u, 4u);
    wr32((u32)param_1 + 0xa58u, 0x20u);
    wr32((u32)param_1 + 0xa5cu, 1u);
    wr32((u32)param_1 + 0xa60u, 1u);
    return;
}
