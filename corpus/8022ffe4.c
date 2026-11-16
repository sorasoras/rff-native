#include "tc_rt.h"

void fn_8022ffe4(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = rd32(0x800000e4u);
    r31 = r3;
    wr16(r4 + 0x2c8u, 4u);
    wr32(r4 + 0x2dcu, param_1);
    r5 = rd32(param_1);
    while (r5 != 0u && (s32)rd32(r5 + 0x2d0u) <= (s32)rd32(r4 + 0x2d0u)) {
        r5 = rd32(r5 + 0x2e0u);
    }
    if (r5 == 0u) {
        r3 = rd32(param_1 + 4u);
        if (r3 == 0u) {
            wr32(param_1, r4);
        } else {
            wr32(r3 + 0x2e0u, r4);
        }
        wr32(r4 + 0x2e4u, r3);
        wr32(r4 + 0x2e0u, 0u);
        wr32(param_1 + 4u, r4);
    } else {
        wr32(r4 + 0x2e0u, r5);
        r3 = rd32(r5 + 0x2e4u);
        wr32(r5 + 0x2e4u, r4);
        wr32(r4 + 0x2e4u, r3);
        if (r3 == 0u) {
            wr32(param_1, r4);
        } else {
            wr32(r3 + 0x2e0u, r4);
        }
    }
    wr32(0x8057150cu, 1u);
    if (rd32(0x8057150cu) != 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x8022f310u, &a);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
