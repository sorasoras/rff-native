#include "tc_rt.h"

u32 fn_8011a564(void)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = rd32(0x80571280u);
    if (r30 != 0u) {
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r30;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        wr32(0x80571274u, 0u);
        wr32(0x80571280u, 0u);
    }
    wr32(0x804bc298u, 0u);
    wr32(0x804bc29cu, 0u);
    wr32(0x804bc2a0u, 0u);
    wr32(0x804bc2a4u, 0u);
    wr32(0x804bc2b0u, 0u);
    wr32(0x804bc2b4u, 0u);
    wr32(0x804bc2b8u, 0u);
    wr32(0x804bc2bcu, 0u);
    wr32(0x804bc2c0u, 0u);
    wr32(0x804bc2c4u, 0u);
    wr32(0x804bc2c8u, 0u);
    wr32(0x804bc2ccu, 0u);
    a.r[0] = 0x804bc2d0u;
    a.r[1] = 0u;
    a.r[2] = 8u;
    (void)tc_call(0x8000443cu, &a);
    wr32(0x804bc2d8u, 0u);
    wr32(0x804bc2dcu, 0u);
    wr32(0x8057127cu, 0u);
    return 1u;
}
