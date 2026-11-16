#include "tc_rt.h"

void fn_80040ca4(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802302b4u, &a);
    a.r[0] = r3;
    (void)tc_call(0x800407f0u, &a);
    return;
}
