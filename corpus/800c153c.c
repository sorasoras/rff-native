#include "tc_rt.h"

void fn_800c153c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 7u;
    (void)tc_call(0x80145edcu, &a);
    return;
}
