#include "tc_rt.h"

void fn_800317e0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x50u);
    if (rd32(r5 + 0x18u) == 0u) {
        r30 = 0u;
        r31 = 0u;
        while (r30 < rd32(param_2)) {
            r29 = rd32(rd32(param_2 + 4u) + r31);
            if (((u32)rd16(r29 + 0x34u) & 0x3010u) == 0x3010u) {
                r3 = tc_call(0x800450e8u, &a);
                f1 = tc_lastf();
                r5 = 0u;
                if (r3 == 0u) {
                    r0 = 1u;
                } else if (((u32)rd16(r29 + 0x34u) & 2u) == 0u) {
                    r0 = 0u;
                } else {
                    r0 = 1u;
                }
            } else {
                r0 = 0u;
            }
            if (r0 != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = r29;
                a.r[2] = r5;
                a.f[0] = f1;
                (void)tc_call(rd32(r29 + 0x5cu), &a);
                f1 = tc_callf(0x80040278u, &a);
                r5 = 0u;
            }
            r31 = r31 + 4u;
            r30 = r30 + 1u;
        }
    }
    return;
}
