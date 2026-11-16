#include "tc_rt.h"

void fn_802dddd4(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r28 = rd32(0x805480e8u);
    r27 = r3;
    wr32(0x805480e8u, 0u);
    while (r28 != 0u) {
        r29 = rd32(r28);
        if (r28 != param_r3) {
            r3 = tc_call(0x8022c2b0u, &a);
            r0 = rd32(0x805480e8u);
            if (r0 != 0u) {
                wr32(r28, r0);
            } else {
                wr32(r28, 0u);
            }
            wr32(0x805480e8u, r28);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
        r28 = r29;
    }
    a.r[0] = r27;
    (void)tc_call(0x8022c2d8u, &a);
    a.r[0] = param_r3 + 0x14u;
    (void)tc_call(0x802dc3dcu, &a);
    return;
}
