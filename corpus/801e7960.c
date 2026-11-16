#include "tc_rt.h"

void fn_801e7960(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0x32cu) * 0x144u) + 0xa54u;
    (void)tc_call(0x8020c504u, &a);
    wr32((u32)param_1 + 0x32cu, 2u);
    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    (void)tc_call(0x80056f08u, &a);
    return;
}
