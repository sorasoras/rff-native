#include "tc_rt.h"

void fn_80311290(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = param_1 + 0x24u;
    a.r[1] = 0u;
    r3 = tc_call(0x802de9f0u, &a);
    r30 = r3;
    while (r30 != 0u) {
        a.r[0] = param_1 + 0x24u;
        a.r[1] = r30;
        r3 = tc_call(0x802de9f0u, &a);
        f1 = tc_lastf();
        r29 = r3;
        if ((u32)param_4 != 0u || rd32(r30 + 0xcu) == 1u) {
            r3 = r30;
            r0 = 0u;
            while (r0 == 0u) {
                r3 = rd32(r3 + 0xf4u);
                if (r3 == 0u) break;
                if (r3 == (u32)param_5) {
                    r0 = 1u;
                }
            }
            if (r0 != 0u) {
                a.r[0] = r30;
                a.r[1] = param_3;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(param_2, &a);
                r31 = r31 + 1u;
            }
        }
        r30 = r29;
    }
    return;
}
