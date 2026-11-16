#include "tc_rt.h"

void fn_802300d0(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    for (;;) {
        r8 = rd32(param_1);
        if (r8 == 0u) break;
        r4 = rd32(r8 + 0x2e0u);
        if (r4 == 0u) {
            wr32(param_1 + 4u, 0u);
        } else {
            wr32(r4 + 0x2e4u, 0u);
        }
        wr32(param_1, r4);
        wr16(r8 + 0x2c8u, 1u);
        if ((s32)rd32(r8 + 0x2ccu) <= 0) {
            r4 = ((rd32(r8 + 0x2d0u) << 3u) & 0xfffffff8u) - 0x7fb1fa90u;
            wr32(r8 + 0x2dcu, r4);
            r7 = rd32(r4 + 4u);
            if (r7 == 0u) {
                wr32(r4, r8);
            } else {
                wr32(r7 + 0x2e0u, r8);
            }
            wr32(r8 + 0x2e4u, r7);
            wr32(r8 + 0x2e0u, 0u);
            wr32(rd32(r8 + 0x2dcu) + 4u, r8);
            r0 = 0x1fu - rd32(r8 + 0x2d0u);
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r0 = rd32(0x80571510u) | r0;
            wr32(0x80571510u, r0);
            wr32(0x8057150cu, 1u);
        }
    }
    if (rd32(0x8057150cu) != 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x8022f310u, &a);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
