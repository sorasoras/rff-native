#include "tc_rt.h"

void fn_801f87a4(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x801f888cu, &a);
    a.r[0] = r3;
    (void)tc_call(0x800d431cu, &a);
    return;
}
