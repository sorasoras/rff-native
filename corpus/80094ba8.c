#include "tc_rt.h"

void fn_80094ba8(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x2cu);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = (u32)param_1;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r0) + 0x80u), &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006ff00u, &a);
    r3 = rd32((u32)param_1 + 0x3cu);
    if (r3 != 0u) {
        r0 = rd32((u32)param_1 + 0x34u);
        if (r0 == 1u) {
            a.r[0] = r3;
            (void)tc_call(0x80157f30u, &a);
        } else {
            if (r0 == 4u) {
                a.r[0] = r3;
                (void)tc_call(0x80157f30u, &a);
            } else {
                a.r[0] = r3;
                (void)tc_call(0x80157e6cu, &a);
            }
        }
        wr32((u32)param_1 + 0x3cu, 0u);
    }
    return;
}
