#include "tc_rt.h"

void fn_802872d0(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr8(0x8050f7ebu, (u8)param_1);
    wr8(0x8050f7eau, (u8)param_2);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x8028feccu, &a);
    return;
}
