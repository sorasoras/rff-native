#include "tc_rt.h"

void fn_8030ab28(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0xe34u);
    (void)tc_call(0x8030ab5cu, &a);
    return;
}
