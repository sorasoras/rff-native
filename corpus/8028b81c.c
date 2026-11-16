#include "tc_rt.h"

void fn_8028b81c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80284bc4u, &a);
    return;
}
