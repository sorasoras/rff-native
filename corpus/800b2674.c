#include "tc_rt.h"

void fn_800b2674(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0xe98u) == 0u) {
        wr32(param_1 + 0xe98u, 1u);
        a.r[0] = param_1;
        a.r[1] = 1u;
        f1 = tc_callf(0x800b3b64u, &a);
        r4 = tc_lastr4();
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x140u), &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r3 = rd32(0x804863d8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            f1 = tc_callf(0x8006d7ccu, &a);
        }
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x144u), &a);
        a.r[0] = param_1;
        (void)tc_call(0x800b2e68u, &a);
        wr32(0x80571140u, 0u);
        wr32(0x80571144u, 0x46u);
    }
    return;
}
