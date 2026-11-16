#include "tc_rt.h"

s32 fn_802d0dc0(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xb4u;
    a.r[1] = param_2;
    r3 = tc_call(0x802cb6fcu, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r3 = (u32)param_1;
    } else {
        if ((u32)param_3 != 0u) {
            r31 = rd32((u32)param_1 + 0x14u);
            r30 = (u32)param_1 + 0x14u;
            while (r31 != r30) {
                a.r[0] = r31 - 4u;
                a.r[1] = param_2;
                a.r[2] = 1u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r31 - 4u) + 0x3cu), &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    return (s32)r3;
                }
                r31 = rd32(r31);
            }
        }
        r3 = 0u;
    }
    return (s32)r3;
}
