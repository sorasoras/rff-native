#include "tc_rt.h"

void fn_8028bbdc(u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = (u32)rd16(param_r4);
    r6 = param_r4 + (u32)rd16(param_r4 + 4u) + 8u;
    if (r5 == 0x2100u) {
        r28 = 2u;
    } else {
        if (r5 == 0x2200u) {
            r28 = 3u;
        } else {
            if (r5 == 0x2000u) {
                r28 = 0u;
            }
        }
    }
    if (r5 == 0x2100u && (u32)rd16(param_r4 + 2u) > (u32)rd16(0x8053d4aeu)) {
        r0 = (u32)rd8(r6 + 1u);
        r3 = (u32)rd8(r6);
        r6 = r6 + 2u;
        r0 = (r0 << 8u) & 0xff00u;
        r0 = r3 + r0;
        r0 = r0 & 0xffffu;
        r0 = r0 & 0xcfffu;
        r31 = r0 | 0x1000u;
        r29 = (u32)((s32)r31 >> 8);
        for (;;) {
            r5 = (u32)rd16(0x8053d4aeu);
            if ((u32)rd16(param_r4 + 2u) <= r5) break;
            a.r[0] = r28;
            a.r[1] = r6;
            a.r[2] = r5;
            (void)tc_call(0x8028c7b0u, &a);
            r4 = (u32)rd16(param_r4 + 2u);
            r0 = (u32)rd16(param_r4 + 4u) + (u32)rd16(0x8053d4acu);
            wr16(param_r4 + 4u, (u16)r0);
            r0 = r0 & 0xffffu;
            r3 = param_r4 + r0;
            r6 = r3 + 0xau;
            wr16(param_r4 + 2u, (u16)(r4 - (u32)rd16(0x8053d4acu)));
            wr8(r3 + 8u, (u8)r31);
            wr8(r3 + 9u, (u8)r29);
            r3 = (u32)rd16(param_r4 + 2u);
            if (r3 > (u32)rd16(0x8053d4aeu)) {
                wr8(r6, (u8)rd16(0x8053d4acu));
                wr8(r6 + 1u, (u8)((s32)rd16(0x8053d4acu) >> 8));
                r6 = r6 + 2u;
            } else {
                wr8(r6, (u8)(r3 - 4u));
                wr8(r6 + 1u, (u8)((s32)((u32)rd16(param_r4 + 2u) - 4u) >> 8));
                r6 = r6 + 2u;
            }
            r3 = (u32)rd16(param_r4 + 6u);
            if (r3 != 0u) {
                r3 = r3 - 1u;
                wr16(param_r4 + 6u, (u16)r3);
                if ((r3 & 0xffffu) == 0u) {
                    wr16(param_r4, 0x1900u);
                    a.r[0] = (u32)rd8(0x80539ba7u);
                    a.r[1] = 0u;
                    a.r[2] = param_r4;
                    (void)tc_call(0x8028a510u, &a);
                    return;
                }
            }
        }
    }
    a.r[0] = r28;
    a.r[1] = r6;
    a.r[2] = (u32)rd16(param_r4 + 2u);
    (void)tc_call(0x8028c7b0u, &a);
    a.r[0] = param_r4;
    (void)tc_call(0x8028a35cu, &a);
    return;
}
