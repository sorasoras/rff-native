#include "tc_rt.h"

void fn_8027a380(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(((param_r3 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = rd32(r31 + 0x8dcu);
    r30 = rd32(r31 + 0x8bcu);
    r28 = rd32(r31 + 0x8b8u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (r30 != 0xffffffffu) {
        if (r29 == 0u) {
            return;
        }
        if (r28 != param_r4) {
            a.r[0] = r31 + 0x160u;
            a.r[1] = param_r4;
            a.r[2] = (u32)rd8(r31 + 0x98eu);
            a.r[3] = 0u;
            r3 = tc_call(0x8027de44u, &a);
            if (r3 == 0u) {
                return;
            }
            r3 = tc_call(0x8022c2b0u, &a);
            wr32(r31 + 0x8b8u, param_r4);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
    }
    return;
}
