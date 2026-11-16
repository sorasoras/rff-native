#include "tc_rt.h"

void fn_8009626c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8009561cu, &a);
    return;
}
