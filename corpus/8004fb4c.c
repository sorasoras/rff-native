#include "tc_rt.h"

void fn_8004fb4c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(0x80571090u);
    a.r[1] = param_1;
    a.r[2] = 4u;
    (void)tc_call(0x8026ce0cu, &a);
    return;
}
