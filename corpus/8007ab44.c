#include "tc_rt.h"

u32 fn_8007ab44(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    TcArgs a = {0};
    r3 = param_1;
    r4 = (u32)param_2;
    if (param_1 == 0u) {
        r4 = 0x180u;
        r3 = 0x80489180u;
    }
    r8 = r3;
    r7 = ((r4 + 0x1fu) >> 3u) & 0x1ffffffcu;
    r9 = 0u;
    r5 = 0u;
    ctr = r7;
    if ((s32)r7 > 0) {
        do {
            if ((u32)rd8(r8) != 0xffu) {
                r10 = 0x80u;
                r11 = 0u;
                for (;;) {
                    r6 = r10 & 0xffu;
                    if ((r6 & (u32)rd8(r8)) == 0u) break;
                    r10 = (r10 >> 1u) & 0x7fu;
                    r11 = r11 + 1u;
                }
                r0 = r11 + r5;
                if ((s32)r0 < (s32)r4) {
                    wr8(r3 + r9, (u8)((u32)rd8(r3 + r9) | r10));
                    r3 = (r0 * 0x64u) + (r3 + r7);
                    return r3;
                }
            }
            r9 = r9 + 1u;
            r5 = r5 + 8u;
            r8 = r8 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    a.f[0] = 0.0;
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x64u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x64u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x64u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
    }
    return r3;
}
