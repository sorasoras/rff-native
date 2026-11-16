#include "tc_rt.h"

void fn_8031c574(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0xc8u);
    a.r[1] = (u32)param_1;
    (void)tc_call(0x8031d3acu, &a);
    return;
}
