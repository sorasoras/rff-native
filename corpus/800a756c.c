#include "tc_rt.h"

void fn_800a756c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800a4040u, &a);
    a.r[0] = r3;
    a.r[1] = param_1;
    (void)tc_call(0x80119084u, &a);
    return;
}
