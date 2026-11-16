#include "tc_rt.h"

void fn_802c1634(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x80226ea0u, &a);
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[2] = 0x802c1664u;
    (void)tc_call(0x8027b0acu, &a);
    return;
}
