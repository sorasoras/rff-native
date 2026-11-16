#include "tc_rt.h"

void fn_800b026c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x138u), &a);
    if (r3 != 0u) {
        r3 = rd32(param_1 + 0xda4u);
        if (r3 != 0u) {
            r0 = rd32(r3 + 4u);
        } else {
            r0 = 0xffffffffu;
        }
        if (r0 == 0u) {
            a.r[0] = param_1;
            a.r[1] = (u32)param_2;
            r3 = tc_call(0x800b1fb8u, &a);
            if (r3 != 0xffffffffu) {
                wr32(param_1 + 0xed4u, 0u);
                a.r[0] = param_1;
                a.r[1] = r3;
                (void)tc_call(0x800b31a0u, &a);
                wr32(param_1 + 0xcecu, (u32)param_2);
            }
        }
    }
    return;
}
