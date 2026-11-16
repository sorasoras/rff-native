#include "tc_rt.h"

void fn_800380d4(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = param_1 + 0x28u;
    r4 = rd32(param_1 + 0x28u);
    wr32(param_1 + 4u, rd32(param_1 + 4u) & 0x7fffffffu);
    a.r[0] = r4 + 0x10u;
    r3 = tc_call(0x80037b5cu, &a);
    if (r3 == 0u) {
        a.r[0] = r31;
        r3 = tc_call(0x80037e20u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            if (r3 != 0xfffffff4u) {
                wr32(param_1, 0u);
                return;
            }
            a.r[0] = r31;
            a.r[1] = param_1 + 4u;
            r3 = tc_call(0x8003802cu, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                wr32(param_1, 0u);
                return;
            }
        } else {
            wr32(param_1 + 4u, rd32(param_1 + 4u) | 1u);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r31;
        a.r[1] = param_1 + 8u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x80037e64u, &a);
        if (r3 == 0u) {
            r3 = rd32(param_1 + 4u);
            wr32(param_1, 0u);
            wr32(param_1 + 4u, r3 | 2u);
            return;
        }
        if (r3 != 0xfffffff4u) {
            wr32(param_1, 0u);
            return;
        }
        a.r[0] = r31;
        a.r[1] = param_1 + 4u;
        r3 = tc_call(0x8003802cu, &a);
        if (r3 != 0u) {
            wr32(param_1, 0u);
            return;
        }
    }
    wr32(param_1, 0u);
    return;
}
