#include "tc_rt.h"

void fn_801a7760(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x130u) == 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x68u), &a);
        if (r3 == 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x8017b81cu, &a);
            return;
        }
        wr32(param_1 + 0x130u, 1u);
        wr32(0x8057118cu, rd32(0x8057118cu) & 0xffff7fffu);
    } else {
        if (rd32(rd32(0x804863d8u) + 0x110u) != 0u) {
            wr32(0x8057118cu, rd32(0x8057118cu) | 0x8000u);
            a.r[0] = 0x803d29f8u;
            a.r[1] = rd32(param_1 + 0x84u);
            (void)tc_call(0x80097bc8u, &a);
        }
    }
    a.r[0] = param_1;
    (void)tc_call(0x8017b81cu, &a);
    return;
}
