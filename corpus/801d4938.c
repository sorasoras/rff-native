#include "tc_rt.h"

void fn_801d4938(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = 0x80480000u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = r3;
    (void)tc_call(0x801d4994u, &a);
    return;
}
