#include "tc_rt.h"

void fn_8031060c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 - 0xdcu;
    (void)tc_call(0x80310598u, &a);
    return;
}
