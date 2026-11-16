#include "tc_rt.h"

void fn_800b0050(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0xed4u, 0u);
    if ((u32)param_2 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x800b31a0u, &a);
        wr32((u32)param_1 + 0xed0u, 0u);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xdu;
        (void)tc_call(0x800b31a0u, &a);
        wr32((u32)param_1 + 0xed0u, 0xdu);
    }
    wr32((u32)param_1 + 0xe8cu, (u32)param_2);
    return;
}
