#include "tc_rt.h"

void fn_800abddc(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x28u) != 0u) {
        wr32((u32)param_1 + 0x28u, 0u);
        wr32(0x804b9e08u, 1u);
    }
    if (rd32((u32)param_1 + 0x2cu) != 0u) {
        wr32(0x804b9e08u, 0u);
    }
    wr32((u32)param_1 + 0x40u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 0u;
    (void)tc_call(0x800ac680u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 2u;
    a.r[2] = 0u;
    (void)tc_call(0x800ac680u, &a);
    return;
}
