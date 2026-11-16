#include "tc_rt.h"

void fn_8012d790(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    (void)tc_call(0x8012d4ecu, &a);
    return;
}
