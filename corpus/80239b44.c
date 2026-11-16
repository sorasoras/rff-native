#include "tc_rt.h"

u32 fn_80239b44(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = 0u;
    r4 = 0x804e5cf0u;
    ctr = 4u;
    do {
        if (rd32(r4) != r4) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = tc_call(0x8022c2b0u, &a);
            r0 = (r31 << 3u) & 0xfffffff8u;
            r31 = rd32(r0 - 0x7fb1a310u);
            r5 = r0 - 0x7fb1a310u;
            wr32(r5, rd32(r31));
            wr32(rd32(r31) + 4u, r5);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = r31;
            wr32(r31, 0u);
            wr32(r31 + 4u, 0u);
            return r3;
        }
        r4 = r4 + 8u;
        r31 = r31 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    r3 = 0u;
    return r3;
}
