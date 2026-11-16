#include "tc_rt.h"

u32 fn_80230910(u32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = rd32(0x8057153cu);
    r30 = r3;
    if (param_1 != 0u) {
        wr32(0x8057153cu, param_1);
    } else {
        wr32(0x8057153cu, 0x80230e68u);
    }
    if (rd32(0x80571530u) == 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = r3;
        a.r[0] = rd32(0x8057152cu);
        a.r[1] = 0x1000u;
        a.r[2] = 0x804e0c60u;
        a.r[3] = 0x20u;
        a.r[4] = 0x804e0c80u;
        a.r[5] = 0x20u;
        a.r[6] = 0x80230e70u;
        a.r[7] = 0u;
        r3 = tc_call(0x8026fd70u, &a);
        if (r3 == 0u) {
            wr32(0x80571530u, 1u);
        } else {
            wr32(0x80571530u, 0u);
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    if (r29 == 0x80230e68u) {
        r3 = 0u;
    } else {
        r3 = r29;
    }
    return r3;
}
