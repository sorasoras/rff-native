#include "tc_rt.h"

void fn_80174414(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800d9ffcu, &a);
        if ((u32)((s32)rd32(param_1 + 0x74u) >> 31) != 0u && rd32(param_1 + 0x120u) == 0u) {
            r4 = rd32(param_1 + 0x124u);
            if (r4 != 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                f1 = tc_callf(0x800da840u, &a);
                r3 = rd32(param_1 + 0x11cu);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = param_1;
                    a.r[2] = 5u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 0x7cu), &a);
                }
            }
            wr32(param_1 + 0x120u, 1u);
        }
    }
    return;
}
