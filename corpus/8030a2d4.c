#include "tc_rt.h"

void fn_8030a2d4(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x10u);
    wr8(r4 + 0x121u, 1u);
    r3 = rd32((u32)param_1 + 0x14u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x54u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            r3 = rd32((u32)param_1 + 0x14u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                r3 = rd32((u32)param_1 + 0x14u);
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0x4cu), &a);
            } else {
                r3 = rd32((u32)param_1 + 0x14u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0x48u), &a);
            }
        }
    }
    return;
}
