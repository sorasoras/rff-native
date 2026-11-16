#include "tc_rt.h"

void fn_802dc06c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r5 = 0u;
    r6 = rd32(0x80547c18u);
    r4 = 0u;
    while (r6 != 0u) {
        if (r6 != param_1) {
            if (r5 != 0u) {
                wr32(r4, r6);
                r4 = r6;
            } else {
                r4 = r6;
                r5 = r6;
            }
        }
        r6 = rd32(r6);
    }
    if (r4 != 0u) {
        wr32(r4, 0u);
    }
    wr32(0x80547c18u, r5);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
