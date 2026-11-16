#include "tc_rt.h"

void fn_80176bdc(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r4 = (u32)param_2;
    for (;;) {
        r6 = rd32(0x8046ad74u);
        for (;;) {
            if (r6 == 0u) {
                return;
            }
            r5 = r6;
            r6 = rd32(r6);
            r7 = rd32(r5 + 8u);
            if (r7 != 0u) {
                r5 = rd32(r3 + 0x148u);
                if (r5 == rd32(r7 + 0x154u)) break;
            }
        }
        if (r4 == 0u) break;
        r12 = rd32(r7);
        r3 = r7;
        r4 = 0u;
        r12 = rd32(r12 + 0x1b0u);
        if (r12 != 0x80176bdcu) {
            if (r12 == 0x817ff000u) {
                return;
            }
            a.r[0] = r7;
            a.r[1] = 0u;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            return;
        }
    }
    wr32(r7 + 0x148u, rd32(r7 + 0x148u) | 0x10000000u);
    return;
}
