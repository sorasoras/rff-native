#include "tc_rt.h"

s32 fn_80273734(void)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = (u32)rd8(0x80571ab0u);
    if (r29 == 3u) {
        wr8(0x80571ab0u, 1u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = rd32(0x805038ecu);
        a.r[1] = rd32(0x805038fcu);
        r3 = tc_call(0x80273ce8u, &a);
        if (r3 == 0u) {
            r3 = tc_call(0x8022c2b0u, &a);
            r4 = rd32(0x805038ecu);
            r29 = r3;
            if (r4 != 0x80503920u) {
                a.r[0] = 0x80503920u;
                a.r[1] = r4;
                a.r[2] = 0x4000u;
                (void)tc_call(0x80004338u, &a);
            }
            wr8(0x80571ac5u, 0u);
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
        } else {
            r3 = tc_call(0x8022c2b0u, &a);
            r31 = rd32(0x805038ecu);
            r29 = r3;
            a.r[0] = r31;
            a.r[1] = 0u;
            a.r[2] = 0x4000u;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = r31;
            a.r[1] = 0x80570d78u;
            a.r[2] = 4u;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = r31 + 0x3ffcu;
            a.r[1] = 0x80570d80u;
            a.r[2] = 4u;
            (void)tc_call(0x80004338u, &a);
            wr16(r31 + 6u, 8u);
            wr8(0x80571ac5u, 0u);
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
        }
        r29 = 0u;
        wr8(0x80571ab0u, 0u);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return (s32)r29;
}
