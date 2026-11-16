#include "tc_rt.h"

void fn_800975f4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x24u);
    (void)tc_call(0x80112d60u, &a);
    return;
}
