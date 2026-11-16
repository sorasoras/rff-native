#include "tc_rt.h"

void fn_8005b3c0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    if ((param_2 & 0x10u) != 0u) {
        a.r[0] = 0x10u;
        r3 = tc_call(0x80082730u, &a);
        if (r3 != 0u) {
            a.r[0] = 0x8046d8c8u;
            a.r[1] = param_3;
            (void)tc_call(0x8008bf04u, &a);
            a.r[0] = 0x80471ed0u;
            a.r[1] = 2u;
            a.r[2] = param_3;
            (void)tc_call(0x80091518u, &a);
            a.r[0] = 0x80471ed0u;
            a.r[1] = 1u;
            a.r[2] = param_3;
            (void)tc_call(0x80091518u, &a);
        }
    }
    if ((param_2 & 0x20u) != 0u) {
        a.r[0] = 0x20u;
        r3 = tc_call(0x80082730u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r31 = rd32(0x8046adecu);
            while (r31 != 0u) {
                r3 = r31;
                r31 = rd32(r31);
                r3 = rd32(r3 + 8u);
                if ((u32)((s32)rd32(r3 + 0x74u) >> 31) != 0u) {
                    a.r[0] = r3;
                    a.r[1] = param_3;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
                }
            }
        }
    }
    return;
}
