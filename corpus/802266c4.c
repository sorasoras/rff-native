#include "tc_rt.h"

void fn_802266c4(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 8u;
    r3 = tc_call(0x802264a8u, &a);
    if (r3 != 0x80226db4u) {
        wr32(0x80571494u, 0u);
        wr32(0x80571490u, 0u);
        a.r[0] = 8u;
        a.r[1] = 0x80226db4u;
        (void)tc_call(0x80226494u, &a);
        a.r[0] = 0x803794d0u;
        (void)tc_call(0x8022d8b8u, &a);
    }
    return;
}
