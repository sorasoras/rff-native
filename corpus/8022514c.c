#include "tc_rt.h"

void fn_8022514c(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80225078u, &a);
    r3 = r3 | 0x200u;
    a.r[0] = r3;
    (void)tc_call(0x80225080u, &a);
    return;
}
