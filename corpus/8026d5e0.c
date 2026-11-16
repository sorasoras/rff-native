#include "tc_rt.h"

u32 fn_8026d5e0(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32(0x80571a48u) != 0u) {
        r3 = 1u;
    } else {
        r3 = tc_call(0x80225448u, &a);
        if ((r3 & 0x10000000u) == 0u) {
            r3 = 0u;
            wr32(0x80571a4cu, 2u);
        } else {
            r3 = tc_call(0x8022c2b0u, &a);
            r31 = r3;
            wr8(0x817fdfe8u, 0xf2u);
            a.r[0] = 0u;
            a.r[1] = 1u;
            a.r[2] = 0xb0000000u;
            a.r[3] = 0x817fdfe8u;
            a.r[4] = 1u;
            r3 = tc_call(0x80264a8cu, &a);
            if (r3 == 0u) {
                wr32(0x80571a4cu, 5u);
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = 0u;
            } else {
                wr8(0x817fdfe8u, 0xf3u);
                a.r[0] = 0u;
                a.r[1] = 1u;
                a.r[2] = 0xb0000000u;
                a.r[3] = 0x817fdfe8u;
                a.r[4] = 1u;
                r3 = tc_call(0x80264a8cu, &a);
                if (r3 == 0u) {
                    wr32(0x80571a4cu, 5u);
                    a.r[0] = r31;
                    (void)tc_call(0x8022c2d8u, &a);
                    r3 = 0u;
                } else {
                    a.r[0] = r31;
                    (void)tc_call(0x8022c2d8u, &a);
                    wr32(0x80571a48u, 1u);
                    r3 = 1u;
                    wr32(0x80571a4cu, 0u);
                    wr32(0x80571a50u, 0u);
                }
            }
        }
    }
    return r3;
}
