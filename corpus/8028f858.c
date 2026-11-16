#include "tc_rt.h"

void fn_8028f858(u32 param_r10, u32 param_r3)
{
    u32 r3 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_r10;
    r31 = 0x8053d548u;
    r30 = 0x8053d548u;
    r28 = 0u;
    do {
        if ((u32)rd8(r31 + 8u) == 1u) {
            a.r[0] = r30;
            a.r[1] = param_r3;
            r3 = tc_call(0x8028d2d8u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                if ((u32)rd8(0x80571b80u) >= 4u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x503u;
                    a.r[1] = 0x80392a6cu;
                    a.r[2] = (u32)rd8(((r28 << 3u) & 0xfffffff8u) + r28 - 0x7fac2ab2u);
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc6cu, &a);
                }
                (void)tc_call(0x80289b9cu, &a);
                return;
            }
        }
        r28 = r28 + 1u;
        r30 = r30 + 9u;
        r31 = r31 + 9u;
    } while ((s32)r28 < 5);
    return;
}
