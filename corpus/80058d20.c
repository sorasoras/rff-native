#include "tc_rt.h"

u32 fn_80058d20(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = (u32)param_1 + ((u32)param_2 * 0x14u);
    r0 = rd32(r30 + 0xcu) + 1u;
    wr32(r30 + 0xcu, r0);
    if ((s32)r0 > 1) {
        r3 = 1u;
    } else {
        if (rd32(r30 + 4u) != 0u) {
            if ((u32)param_3 != rd32(r30 + 0x10u) && (u32)param_3 == 0u) {
                wr32(r30 + 0x10u, (u32)param_3);
            }
            r3 = 1u;
        } else {
            a.r[0] = (u32)param_2;
            r3 = tc_call(0x800ce4c0u, &a);
            r31 = r3;
            r3 = tc_call(0x8005885cu, &a);
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
            wr32(r30, r3);
            a.r[0] = (u32)param_1;
            a.r[1] = r3;
            a.r[2] = (u32)param_2;
            r3 = tc_call(0x80058e84u, &a);
        }
    }
    return r3;
}
