#include "tc_rt.h"

void fn_802c6014(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x80226ea0u, &a);
    a.r[0] = r3;
    (void)tc_call(0x802c0ffcu, &a);
    return;
}
