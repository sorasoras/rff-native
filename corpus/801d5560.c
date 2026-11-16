#include "tc_rt.h"

void fn_801d5560(f64 param_1, f64 param_2, s32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = 0x80480000u;
    a.f[0] = param_1;
    a.f[1] = param_2;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    a.f[0] = param_1;
    a.f[1] = param_2;
    a.r[0] = rd32((u32)param_3 + 8u);
    a.r[1] = r3;
    (void)tc_call(0x801d4a58u, &a);
    return;
}
