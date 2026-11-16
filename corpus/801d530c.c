#include "tc_rt.h"

u32 fn_801d530c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xcu);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r0 + 0x74u) + 0x10u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            r3 = rd32((u32)param_1 + 0xcu);
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3 + 0x74u) + 0x14u), &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x801d5250u, &a);
            r3 = 0u;
            return r3;
        }
        r3 = rd32((u32)param_1 + 0xcu);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3 + 0x74u) + 0x18u), &a);
    }
    r3 = 1u;
    return r3;
}
