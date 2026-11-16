#include "tc_rt.h"

void fn_801a9dd4(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x290u) == 2u) {
        wr32((u32)param_1 + 0x9f0u, 1u);
        wr32((u32)param_1 + 0x9f8u, 0u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801a9e70u, &a);
        return;
    }
    if (rd32((u32)param_1 + 0xa08u) == 1u) {
        wr32((u32)param_1 + 0x9f0u, 1u);
        wr32((u32)param_1 + 0x9f8u, 0u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801a9e70u, &a);
        return;
    }
    return;
}
