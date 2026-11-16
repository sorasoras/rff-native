#include "tc_rt.h"

void fn_801244dc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x10u);
    (void)tc_call(0x801f1144u, &a);
    return;
}
