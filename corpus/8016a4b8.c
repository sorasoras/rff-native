#include "tc_rt.h"

void fn_8016a4b8(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(param_2 + 0x148u, rd32(param_2 + 0x148u) | 0x4000000u);
    a.r[0] = param_2;
    f1 = tc_callf(0x800b516cu, &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_2) + 0x1a4u), &a);
    a.r[0] = param_2;
    f1 = tc_callf(0x800b2e68u, &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x140u), &a);
    if (r3 != 0u) {
        r3 = rd32(0x804863d8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8006d7ccu, &a);
        }
    }
    return;
}
