#include "tc_rt.h"

void fn_801c782c(u32 param_1)
{
    u32 r0 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    f1 = tc_callf(0x800d9ffcu, &a);
    r4 = tc_lastr4();
    if ((u32)((s32)rd32(param_1 + 0x74u) >> 31) != 0u) {
        r0 = rd32(param_1 + 0x124u);
        if (r0 == 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0xa4u), &a);
            wr32(param_1 + 0x124u, 1u);
        } else {
            if (r0 == 1u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0xa8u), &a);
            } else {
                if (r0 == 2u) {
                    a.r[0] = param_1;
                    (void)tc_call(0x800da354u, &a);
                }
            }
        }
    }
    return;
}
