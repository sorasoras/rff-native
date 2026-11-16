#include "tc_rt.h"

u32 fn_80255568(u32 param_1, s32 param_2)
{
    u32 r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r4 = rd32(param_1 + 0x10u);
        if (r4 < rd32(param_1 + 8u) && rd32(param_1 + 0xcu) != 0u) {
            r31 = rd32(param_1) + (rd32(param_1 + 4u) * r4);
            while (rd32(param_1 + 0x10u) != 0u) {
                r31 = r31 - rd32(param_1 + 4u);
                a.r[0] = r31;
                a.r[1] = 0xffffffffu;
                a.f[0] = f1;
                f1 = tc_callf(rd32(param_1 + 0xcu), &a);
                wr32(param_1 + 0x10u, rd32(param_1 + 0x10u) - 1u);
            }
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
