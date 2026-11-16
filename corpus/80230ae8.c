#include "tc_rt.h"

u32 fn_80230ae8(void)
{
    u32 r0 = 0, r3 = 0, r30 = 0;
    TcArgs a = {0};
    r0 = rd32(0x80571524u);
    wr32(0x80571538u, 0x80230e6cu);
    wr32(0x8057153cu, 0x80230e68u);
    wr32(0x80571520u, 0u);
    if (r0 != 0u) {
        r3 = 1u;
    } else {
        wr32(0x80571534u, 0u);
        a.r[0] = 0x80386980u;
        a.r[1] = 0u;
        r3 = tc_call(0x8026f5f8u, &a);
        wr32(0x80571528u, r3);
        if ((s32)r3 < 0) {
            wr32(0x80571524u, 0u);
            r3 = 0u;
        } else {
            a.r[0] = 0x80386994u;
            a.r[1] = 0u;
            r3 = tc_call(0x8026f5f8u, &a);
            wr32(0x8057152cu, r3);
            if ((s32)r3 < 0) {
                wr32(0x80571524u, 0u);
                r3 = 0u;
            } else {
                r3 = tc_call(0x8022c2b0u, &a);
                r30 = r3;
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
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = 1u;
                wr32(0x80571524u, 1u);
            }
        }
    }
    return r3;
}
