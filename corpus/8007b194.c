#include "tc_rt.h"

void fn_8007b194(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x70u);
    a.r[1] = rd32((u32)param_1 + 0x74u);
    (void)tc_call(0x80040144u, &a);
    return;
}
