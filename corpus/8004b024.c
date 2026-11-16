#include "tc_rt.h"

void fn_8004b024(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x803c624cu) != 0u) {
        a.r[0] = 1u;
        a.r[1] = 0u;
        a.r[2] = 1u;
        a.r[3] = 2u;
        a.r[4] = 3u;
        (void)tc_call(0x80253720u, &a);
        a.r[0] = 2u;
        a.r[1] = 0u;
        a.r[2] = 1u;
        a.r[3] = 2u;
        a.r[4] = 3u;
        (void)tc_call(0x80253720u, &a);
        wr8(0x803c624cu, 0u);
    }
    r3 = rd32(0x803c6250u);
    if (r3 != 0x10u) {
        a.r[0] = r3;
        (void)tc_call(0x8025326cu, &a);
        wr32(0x803c6250u, 0x10u);
    }
    if ((u32)rd8(0x803c6262u) != 0u) {
        r3 = (u32)rd8(0x803c6244u);
        wr32(0x803c62a8u, r3);
        wr8(0x803c6244u, (u8)(r3 + 1u));
    }
    return;
}
