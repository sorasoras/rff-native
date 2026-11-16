#include "tc_rt.h"

void fn_8027a0b0(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = (((u32)param_1 + 0xau) * 0x46u) - 0x7faf07afu;
    a.r[1] = 0u;
    a.r[2] = 0x46u;
    (void)tc_call(0x8000443cu, &a);
    wr8(0x80571af9u, 1u);
    r29 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = rd32(r29 + 0x8bcu);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (r30 != 0xffffffffu) {
        r3 = tc_call(0x8022c2b0u, &a);
        if ((u32)rd8(r29 + 0x986u) != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        } else {
            wr8(r29 + 0x986u, 1u);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = 0x8027a08cu;
            (void)tc_call(0x8027a874u, &a);
        }
    }
    return;
}
