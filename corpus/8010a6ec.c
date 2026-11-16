#include "tc_rt.h"

void fn_8010a6ec(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x19b8u;
    (void)tc_call(0x8016316cu, &a);
    return;
}
