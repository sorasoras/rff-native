#include "tc_rt.h"

s32 fn_802e4740(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 0x28u);
    if (r6 != 0u) {
        a.r[0] = r6 + 0x44u;
        a.r[1] = param_2;
        r3 = tc_call(0x802ef36cu, &a);
        f1 = tc_lastf();
        r6 = 0u;
        if (r3 != 0u) {
            r3 = rd32((u32)param_1 + 0x28u);
            return (s32)r3;
        }
    }
    if ((u32)param_3 != 0u) {
        r30 = (u32)param_1 + 0x14u;
        r31 = rd32(r30);
        while (r31 != r30) {
            a.r[0] = r31 - 4u;
            a.r[1] = param_2;
            a.r[2] = (u32)param_3;
            a.r[3] = r6;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r31 - 4u) + 0x40u), &a);
            f1 = tc_lastf();
            r6 = 0u;
            if (r3 != 0u) {
                return (s32)r3;
            }
            r31 = rd32(r31);
        }
    }
    r3 = 0u;
    return (s32)r3;
}
