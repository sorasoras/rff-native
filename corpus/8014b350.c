#include "tc_rt.h"

void fn_8014b350(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x4cu);
    a.r[1] = rd32((u32)param_1 + 0xcu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    return;
}
