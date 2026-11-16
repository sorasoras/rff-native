#include "tc_rt.h"

u32 fn_8004180c(void)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80041144u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32(0x8034f7f4u);
        (void)tc_call(0x800481f8u, &a);
        r3 = tc_call(0x80041170u, &a);
        r5 = r3;
        if (rd32(0x8034f810u) == 0u) {
            r4 = rd32(r3 + 4u);
            r3 = rd32(r3);
            r5 = rd32(r5 + 8u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = (u32)(s16)rd16(0x8034f848u);
            a.r[4] = (u32)(s16)rd16(0x8034f84au);
            a.r[5] = (u32)(s16)rd16(0x8034f84cu);
            a.r[6] = (u32)(s16)rd16(0x8034f84eu);
            a.r[7] = (u32)(s16)rd16(0x8034f850u);
            a.s[1] = rd32(0x8034f854u);
            (void)tc_call(0x8004895cu, &a);
        } else {
            r4 = rd32(r3 + 4u);
            r3 = rd32(r3);
            r5 = rd32(r5 + 8u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = (u32)(s16)rd16(0x8034f848u);
            a.r[4] = (u32)(s16)rd16(0x8034f84au);
            a.r[5] = (u32)(s16)rd16(0x8034f84cu);
            a.r[6] = (u32)(s16)rd16(0x8034f84eu);
            a.r[7] = (u32)(s16)rd16(0x8034f850u);
            a.s[1] = rd32(0x8034f854u);
            (void)tc_call(0x80048710u, &a);
        }
        (void)tc_call(0x800480e0u, &a);
        (void)tc_call(0x800471a0u, &a);
        a.r[0] = 1u;
        a.r[1] = 3u;
        a.r[2] = 1u;
        (void)tc_call(0x80253f64u, &a);
        a.r[0] = 1u;
        (void)tc_call(0x80253f0cu, &a);
        (void)tc_call(0x8003abc0u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
