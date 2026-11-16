#include "tc_rt.h"

void fn_802faf40(u32 param_r3)
{
    TcArgs a = {0};
    a.r[0] = param_r3;
    (void)tc_call(0x802fdff8u, &a);
    return;
}
