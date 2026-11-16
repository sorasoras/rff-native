#include "tc_rt.h"

u32 fn_801b1248(void)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(0x805706e8u) != 0x36u) {
        r3 = 0u;
    } else {
        r4 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
        while (r4 != 0u) {
            r3 = r4;
            r4 = rd32(r4);
            r31 = rd32(r3 + 8u);
            if (rd32(r31 + 0x84u) == 0xd6dau) {
                a.r[0] = r31;
                a.r[1] = 1u;
                a.f[0] = 0.0;
                (void)tc_call(rd32(rd32(r31) + 0x4cu), &a);
                a.r[0] = r31;
                r3 = tc_call(0x801f196cu, &a);
                return r3;
            }
        }
        r3 = 0u;
    }
    return r3;
}
