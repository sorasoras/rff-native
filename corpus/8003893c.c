#include "tc_rt.h"

void fn_8003893c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80043e8cu, &a);
    a.r[0] = param_1;
    (void)tc_call(0x80035b6cu, &a);
    return;
}
