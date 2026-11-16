#include "tc_rt.h"

u32 fn_8006fdac(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_2 != 0u) {
        r31 = 0u;
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        r3 = tc_call(0x8006fe98u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r4 = 0u;
            r5 = rd32((u32)param_1 + ((rd32((u32)param_1 + 0xa0u) ^ 1u) * 0x1cu) + 0xa8u);
            while (r5 != 0u) {
                r3 = r5;
                r5 = rd32(r5);
                if (rd32(r3 + 8u) == param_2) {
                    r4 = 1u;
                    break;
                }
            }
            if (r4 == 0u) {
                r31 = 1u;
                a.r[0] = param_2;
                a.r[1] = (u32)param_1;
                a.r[2] = param_3;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_2) + 0x70u), &a);
            }
            a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0xa0u) * 0x1cu) + 0xa8u;
            a.r[1] = param_2;
            (void)tc_call(0x8007b03cu, &a);
        }
        r3 = r31;
    } else {
        r3 = 0u;
    }
    return r3;
}
