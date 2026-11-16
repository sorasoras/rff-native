#include "tc_rt.h"

s32 fn_80258b5c(u32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_1 == 0u) {
        r3 = 0xffffffffu;
    } else {
        if (((rd32(param_1 + 4u) >> 0x16u) & 7u) == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = param_1;
            r3 = tc_call(0x80258c18u, &a);
            f1 = tc_lastf();
            r30 = r3;
            a.r[0] = rd32(param_1);
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(param_1 + 0x44u), &a);
            r4 = rd32(param_1 + 4u);
            r31 = r3;
            c0eq = ((rd32(param_1 + 8u) >> 0x1cu) & 1u) == 0u;
            wr32(param_1, 0u);
            r4 = r4 & 0xfe3fffffu;
            wr32(param_1 + 4u, r4);
            if (!c0eq) {
                a.r[0] = rd32(param_1 + 0x1cu);
                (void)tc_call(0x80257974u, &a);
            }
            r0 = 0u;
            if (r30 != 0u || r31 != 0u) {
                r0 = 1u;
            }
            r3 = 0u - r0;
        }
    }
    return (s32)r3;
}
