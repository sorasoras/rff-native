#include "tc_rt.h"

void fn_80210da4(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    for (;;) {
        if ((u32)param_2 != 4u) {
            r3 = r3 + ((u32)param_2 * 0xf8u);
            if (rd32(r3 + 0x4f8u) == 0u) break;
            r3 = r3 + 0x488u;
            r12 = rd32(r3);
            r12 = rd32(r12 + 0x18u);
            if (r12 != 0x80210da4u) {
                if (r12 == 0x817ff000u) {
                    return;
                }
                a.r[0] = r3;
                a.r[1] = (u32)param_2;
                a.f[0] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                return;
            }
        } else {
            if (rd32(r3 + 0x1098u) == 0u) {
                return;
            }
            r3 = r3 + 0x1028u;
            r12 = rd32(r3);
            r12 = rd32(r12 + 0x18u);
            if (r12 != 0x80210da4u) {
                if (r12 == 0x817ff000u) {
                    return;
                }
                a.r[0] = r3;
                a.r[1] = (u32)param_2;
                a.f[0] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                return;
            }
        }
    }
    return;
}
