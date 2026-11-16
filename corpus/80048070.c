#include "tc_rt.h"

void fn_80048070(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x80571054u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8024b034u, &a);
        a.r[0] = rd32(0x80571054u);
        (void)tc_call(0x802434b8u, &a);
        wr32(0x80571054u, 0u);
    }
    r3 = rd32(0x80571058u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8024b034u, &a);
        a.r[0] = rd32(0x80571058u);
        (void)tc_call(0x802434b8u, &a);
        wr32(0x80571058u, 0u);
    }
    return;
}
