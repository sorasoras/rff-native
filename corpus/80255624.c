#include "tc_rt.h"

void fn_80255624(s32 param_1, u32 param_2, u32 param_3, s32 param_4, u32 param_5)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = param_3;
    r6 = (u32)param_4;
    r7 = param_5;
    r31 = (u32)param_1;
    wr32(0x817fdfe8u, 0u);
    for (;;) {
        r4 = rd32(0x817fdfe8u);
        if (r4 >= param_5) break;
        a.r[0] = r31;
        a.r[1] = 1u;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.f[0] = f1;
        f1 = tc_callf(param_2, &a);
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r31 = r31 + (u32)param_4;
        wr32(0x817fdfe8u, rd32(0x817fdfe8u) + 1u);
    }
    if (r4 < param_5 && param_3 != 0u) {
        r31 = (u32)param_1 + ((u32)param_4 * r4);
        while (rd32(0x817fdfe8u) != 0u) {
            r31 = r31 - (u32)param_4;
            a.r[0] = r31;
            a.r[1] = 0xffffffffu;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = f1;
            f1 = tc_callf(param_3, &a);
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            wr32(0x817fdfe8u, rd32(0x817fdfe8u) - 1u);
        }
    }
    return;
}
