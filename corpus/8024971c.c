#include "tc_rt.h"

void fn_8024971c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(0x80570a48u);
    a.r[1] = param_1;
    (void)tc_call(0x80226f54u, &a);
    return;
}
