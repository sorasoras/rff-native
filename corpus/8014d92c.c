#include "tc_rt.h"

void fn_8014d92c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    a.r[0] = param_1;
    a.r[1] = rd32(r3 + 4u);
    (void)tc_call(0x8009f6fcu, &a);
    return;
}
