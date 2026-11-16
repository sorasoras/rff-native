#include "tc_rt.h"

void fn_8014108c(void)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = 0u;
    while (r30 < rd32(0x804beb2cu)) {
        a.r[0] = r30;
        (void)tc_call(0x80141274u, &a);
        r30 = r30 + 1u;
    }
    r4 = rd32(0x804beb34u);
    if (r4 != 0u) {
        r6 = rd32(0x805712c4u);
        if (rd32(r6 + 0x10u) != 0u) {
            r3 = rd32(r6);
            r5 = rd32(r6 + 0xcu);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r6 + 0x20u) != 0u) {
                a.r[0] = r6 + 0x24u;
                a.r[1] = r4;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r3 = rd32(r6);
                r5 = rd32(r6 + 0xcu);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        wr32(0x804beb34u, 0u);
    }
    wr32(0x805712c0u, 0u);
    a.r[0] = 0x804beb28u;
    a.r[1] = 0u;
    a.r[2] = 0x10u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
