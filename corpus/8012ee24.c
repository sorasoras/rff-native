#include "tc_rt.h"

void fn_8012ee24(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0xcu, param_2);
    wr32((u32)param_1 + 4u, param_3);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8012eea0u, &a);
    return;
}
