#include "tc_rt.h"

void fn_800d6d24(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x8046adc4u;
    a.r[1] = rd32((u32)param_1 + 0x8cu);
    (void)tc_call(0x8007aff0u, &a);
    wr32((u32)param_1 + 0x8cu, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80070a14u, &a);
    return;
}
