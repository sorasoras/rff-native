#include "tc_rt.h"

void fn_802e8768(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = rd32(param_1 + 0x28u);
    if (r6 != 0u) {
        a.r[0] = r6 + 0x44u;
        a.r[1] = param_2;
        r3 = tc_call(0x802ef36cu, &a);
        f1 = tc_lastf();
        r6 = 0u;
        if (r3 != 0u) {
            return;
        }
    }
    r31 = 0u;
    r30 = 0u;
    while ((s32)r31 < (s32)rd8(param_1 + 0x104u)) {
        a.r[0] = rd32(rd32(param_1 + 0x100u) + r30 + 4u) + 0x44u;
        a.r[1] = param_2;
        r3 = tc_call(0x802ef36cu, &a);
        f1 = tc_lastf();
        r6 = 0u;
        if (r3 != 0u) {
            return;
        }
        r30 = r30 + 8u;
        r31 = r31 + 1u;
    }
    if ((u32)param_3 != 0u) {
        r31 = rd32(param_1 + 0x14u);
        r30 = param_1 + 0x14u;
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
                return;
            }
            r31 = rd32(r31);
        }
    }
    return;
}
