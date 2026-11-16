#include "tc_rt.h"

void fn_80044e28(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80250e3cu, &a);
    return;
}
