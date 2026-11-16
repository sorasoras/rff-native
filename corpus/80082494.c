#include "tc_rt.h"

void fn_80082494(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x800824a8u;
    a.r[1] = 0x1eu;
    a.r[2] = param_1;
    (void)tc_call(0x800815ccu, &a);
    return;
}
