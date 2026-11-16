#include "tc_rt.h"

s32 fn_80230de0(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(0x80571530u) == 0u) {
        r3 = 0u;
    } else {
        if (rd32(0x80571524u) == 0u) {
            r3 = 0xfffffffau;
        } else {
            a.r[0] = rd32(0x80571528u);
            a.r[1] = 0x3002u;
            a.r[2] = 0x804e0ca0u;
            a.r[3] = 0x20u;
            a.r[4] = 0x804e0cc0u;
            a.r[5] = 0x20u;
            r3 = tc_call(0x8026fea8u, &a);
            if (r3 == 0u) {
                wr32(0x80571530u, 0u);
            }
        }
    }
    return (s32)r3;
}
