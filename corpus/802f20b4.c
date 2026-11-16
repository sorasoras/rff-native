#include "tc_rt.h"

void fn_802f20b4(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (rd32(param_1) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r3 = tc_call(0x8022c2b0u, &a);
        r4 = rd32(param_1);
        if (r4 == 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        } else {
            wr16(r4 + 0x96u, (u16)param_2);
            r5 = rd32(param_1);
            r4 = rd32(r5 + 0x1cu);
            if ((r4 & 0x400u) == 0u) {
                wr32(r5 + 0x1cu, r4 | 0x800u);
            }
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
