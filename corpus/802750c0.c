#include "tc_rt.h"

void fn_802750c0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 2u;
    a.r[2] = 9u;
    (void)tc_call(0x802744d4u, &a);
    return;
}
