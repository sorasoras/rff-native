#include "tc_rt.h"

void fn_800dad3c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 2u;
    a.r[1] = 0x38u;
    a.r[2] = rd32((u32)param_1 + 0xf4u);
    (void)tc_call(0x800a6dccu, &a);
    return;
}
