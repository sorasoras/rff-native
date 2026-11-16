#include "tc_rt.h"

void fn_80082340(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x80080af8u;
    a.r[1] = 0x3cu;
    a.r[2] = param_1;
    (void)tc_call(0x800815ccu, &a);
    return;
}
