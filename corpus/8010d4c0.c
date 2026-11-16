#include "tc_rt.h"

void fn_8010d4c0(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = tc_call(0x800a7854u, &a);
    if (r3 != 0u) {
        r3 = rd32(r3 + 0x5c0u);
        r4 = 0x72u;
        r0 = 0u;
        if ((s32)r3 >= 526 && (s32)r3 <= 547) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            r0 = 0u;
            if ((s32)r3 >= 570 && (s32)r3 <= 591) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r4 = 0x6fu;
            } else {
                r0 = 0u;
                if ((s32)r3 >= 592 && (s32)r3 <= 613) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                    if ((s32)r3 >= 548 && (s32)r3 <= 569) {
                        r0 = 1u;
                    }
                    if (r0 != 0u) {
                        r4 = 0x71u;
                    } else {
                        r0 = 0u;
                        if ((s32)r3 >= 635 && (s32)r3 <= 639) {
                            r0 = 1u;
                        }
                        if (r0 != 0u) {
                            r4 = 0x71u;
                        } else {
                            r0 = 0u;
                            if ((s32)r3 >= 640 && (s32)r3 <= 644) {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                r4 = 0x71u;
                            }
                        }
                    }
                } else {
                    r4 = 0x6fu;
                }
            }
        } else {
            r4 = 0x70u;
        }
        wr32(0x817fdfecu, r4);
        wr32(0x817fdfe8u, 0u);
        wr32(0x817fdff0u, 0u);
        r3 = tc_call(0x80097da4u, &a);
        f1 = tc_lastf();
        r3 = rd32(r3 + 0xcu);
        a.r[0] = r3;
        a.r[1] = 0x21u;
        a.r[2] = 0x817fdfe8u;
        a.r[3] = 3u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 8u), &a);
    }
    return;
}
