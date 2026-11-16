#include "tc_rt.h"

void fn_8028d810(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8028b2e0u, &a);
    wr32((u32)param_1 + 0xcu, param_2);
    wr8((u32)param_1 + 0x10u, (u8)param_3);
    return;
}
