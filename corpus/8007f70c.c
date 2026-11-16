#include "tc_rt.h"

void fn_8007f70c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        wr32(param_1 + 0x148u, rd32(param_1 + 0x148u) | 0x8000000u);
    }
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        r3 = rd32(param_1 + 0x158u);
        if (r3 != 0u) {
            a.r[0] = r3;
            f1 = tc_callf(0x80095f78u, &a);
            r4 = tc_lastr4();
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x148u), &a);
        r30 = 0u;
        r31 = 0u;
        while (r30 < rd32(param_1 + 0x328u)) {
            r4 = rd32(rd32(param_1 + 0x324u) + r31);
            if (r4 != 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                (void)tc_call(0x8007fc80u, &a);
            }
            r31 = r31 + 4u;
            r30 = r30 + 1u;
        }
    }
    return;
}
