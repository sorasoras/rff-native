#include "tc_rt.h"

void fn_801c2ab8(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = rd32(0x804863d8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_2;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        wrf32d(param_2, (f64)rdf32(r3));
        wrf32d(param_2 + 4u, (f64)rdf32(r3 + 4u));
        wrf32d(param_2 + 8u, (f64)rdf32(r3 + 8u));
    }
    return;
}
