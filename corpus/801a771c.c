#include "tc_rt.h"

void fn_801a771c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8017b810u, &a);
    wr32((u32)param_1 + 0x128u, 8u);
    wr32((u32)param_1 + 0x12cu, 2u);
    wr32((u32)param_1 + 0x130u, 0u);
    return;
}
