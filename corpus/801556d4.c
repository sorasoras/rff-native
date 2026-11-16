#include "tc_rt.h"

u32 fn_801556d4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x80471ed0u;
    a.r[1] = 0u;
    r3 = tc_call(0x80091b10u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r0 = rd32(r3 + 4u);
        r3 = rd32(r3 + 8u);
        r0 = r0 * (u32)param_2;
        r0 = (u32)param_3 + r0;
        r0 = r0 * 0x9cu;
        r31 = r3 + r0;
        if (r31 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = rd32(r31);
            a.r[1] = 0x8033a618u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fcc59e8u), &a);
            if (r3 != 0u) {
                r3 = r31;
            } else {
                r3 = 0u;
            }
        }
    }
    return r3;
}
