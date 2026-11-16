#include "tc_rt.h"

void fn_80057fd8(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = rd32(param_1);
    while (r6 != 0u) {
        r3 = r6;
        r6 = rd32(r6);
        r3 = rd32(r3 + 8u);
        if (rd32(r3 + 0x10u) == (u32)param_2) {
            if ((u32)param_3 != rd32(r3 + 0x1cu) && (u32)param_3 == 0u) {
                wr32(r3 + 0x1cu, (u32)param_3);
            }
            r4 = rd32(r3 + 0x18u) + 1u;
            wr32(r3 + 0x18u, r4 & ~(u32)((s32)r4 >> 31));
            return;
        }
    }
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x8007d114u, &a);
    r31 = r3;
    r3 = tc_call(0x80057a90u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = rd32(r31);
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = (u32)param_2;
    (void)tc_call(0x80058158u, &a);
    return;
}
