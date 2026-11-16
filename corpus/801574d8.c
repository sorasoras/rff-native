#include "tc_rt.h"

void fn_801574d8(u32 param_1, s32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if (param_3 >= 0 && param_3 < 70) {
        a.r[0] = 0x8049c500u;
        a.r[1] = (u32)param_3;
        r3 = tc_call(0x800c8794u, &a);
        if ((s32)r3 >= 0 && (s32)r3 < 171) {
            r6 = 7u;
            r5 = 0x8033a670u;
            ctr = 8u;
            do {
                r4 = (u32)(s8)rd8(r5);
                if ((s32)r4 <= param_2 && param_2 < (s32)(r4 + (u32)(s8)rd8(r5 + 1u))) {
                    r0 = (r6 << 3u) & 0xfffffff8u;
                    r10 = r0 - 0x7fcc59c8u;
                    r11 = (u32)rd8(r0 - 0x7fcc59c8u);
                    r9 = (u32)rd8(r10 + 1u);
                    r8 = (u32)rd8(r10 + 2u);
                    r7 = (u32)rd8(r10 + 3u);
                    r6 = (u32)rd8(r10 + 4u);
                    r5 = (u32)rd8(r10 + 5u);
                    r4 = (u32)rd8(r10 + 6u);
                    r0 = (u32)rd8(r10 + 7u);
                    wr8(0x817fdfe0u, (u8)r11);
                    wr8(0x817fdfe1u, (u8)r9);
                    wr8(0x817fdfe2u, (u8)r8);
                    wr8(0x817fdfe3u, (u8)r7);
                    wr8(0x817fdfe4u, (u8)r6);
                    wr8(0x817fdfe5u, (u8)r5);
                    wr8(0x817fdfe6u, (u8)r4);
                    wr8(0x817fdfe7u, (u8)r0);
                    break;
                }
                if ((s32)r6 <= 0) {
                    return;
                }
                r5 = r5 - 8u;
                r6 = r6 - 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            wr32(0x817fdfd8u, r3);
            r29 = 1u;
            a.r[0] = 0x817fdfd8u;
            r3 = tc_call(0x8014961cu, &a);
            r30 = r3;
            r28 = 0xffffffffu;
            a.r[0] = 0x817fdfd8u;
            r3 = tc_call(0x80149634u, &a);
            if ((s32)r30 >= (s32)r3) {
                a.r[0] = 0x817fdfd8u;
                r3 = tc_call(0x80149634u, &a);
                if ((s32)r3 > -1) {
                    a.r[0] = 0x817fdfd8u;
                    r3 = tc_call(0x80149634u, &a);
                    r28 = r3;
                }
            } else {
                r29 = 2u;
                a.r[0] = 0x817fdfd8u;
                r3 = tc_call(0x80149634u, &a);
                r30 = r3;
            }
            a.r[0] = 0x817fdfd8u;
            r3 = tc_call(0x8014964cu, &a);
            if ((s32)r30 >= (s32)r3) {
                a.r[0] = 0x817fdfd8u;
                r3 = tc_call(0x8014964cu, &a);
                if ((s32)r28 < (s32)r3) {
                    a.r[0] = 0x817fdfd8u;
                    r3 = tc_call(0x8014964cu, &a);
                    r28 = r3;
                }
            } else {
                r29 = 3u;
                a.r[0] = 0x817fdfd8u;
                r3 = tc_call(0x8014964cu, &a);
                r30 = r3;
            }
            a.r[0] = 0x817fdfd8u;
            r3 = tc_call(0x80149664u, &a);
            if ((s32)r30 >= (s32)r3) {
                a.r[0] = 0x817fdfd8u;
                r3 = tc_call(0x80149664u, &a);
                if ((s32)r28 < (s32)r3) {
                    a.r[0] = 0x817fdfd8u;
                    r3 = tc_call(0x80149664u, &a);
                    r28 = r3;
                }
            } else {
                r29 = 4u;
                a.r[0] = 0x817fdfd8u;
                r3 = tc_call(0x80149664u, &a);
                r30 = r3;
            }
            if ((s32)(r30 - r28) < 10) {
                r29 = 0u;
            }
            a.r[0] = 0x8049c500u;
            a.r[1] = (u32)param_3;
            r3 = tc_call(0x800c8ca4u, &a);
            r28 = r3 & 0xffu;
            r0 = (u32)(s8)rd8(r29 - 0x7e80201eu);
            if ((s32)r0 < 2) {
                if ((s32)r0 >= 1 && (r28 & 0x20u) == 0u) {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = (u32)param_3;
                    r3 = tc_call(0x800c8b58u, &a);
                    r5 = (r3 & 0xffu) + 2u;
                    if ((s32)r5 < 0) {
                        r5 = 0u;
                    }
                    r5 = r5 & 0xffu;
                    a.r[0] = 0x8049c500u;
                    a.r[1] = (u32)param_3;
                    a.r[2] = r5;
                    (void)tc_call(0x800c8b68u, &a);
                    r28 = r28 | 0x20u;
                    a.r[0] = (u32)param_3;
                    a.r[1] = 0x14u;
                    a.r[2] = 0u;
                    (void)tc_call(0x80156818u, &a);
                }
            } else if ((r28 & 0x40u) == 0u) {
                if ((r28 & 0x20u) == 0u) {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = (u32)param_3;
                    r3 = tc_call(0x800c8b58u, &a);
                    r5 = (r3 & 0xffu) + 3u;
                    if ((s32)r5 < 0) {
                        r5 = 0u;
                    }
                    r5 = r5 & 0xffu;
                    a.r[0] = 0x8049c500u;
                    a.r[1] = (u32)param_3;
                    a.r[2] = r5;
                    (void)tc_call(0x800c8b68u, &a);
                } else {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = (u32)param_3;
                    r3 = tc_call(0x800c8b58u, &a);
                    r5 = (r3 & 0xffu) + 1u;
                    if ((s32)r5 < 0) {
                        r5 = 0u;
                    }
                    r5 = r5 & 0xffu;
                    a.r[0] = 0x8049c500u;
                    a.r[1] = (u32)param_3;
                    a.r[2] = r5;
                    (void)tc_call(0x800c8b68u, &a);
                }
                r28 = r28 | 0x60u;
                a.r[0] = (u32)param_3;
                a.r[1] = 0x15u;
                a.r[2] = 0u;
                (void)tc_call(0x80156818u, &a);
            }
            a.r[0] = 0x8049c500u;
            a.r[1] = (u32)param_3;
            a.r[2] = r28 & 0xffu;
            (void)tc_call(0x800c8cb4u, &a);
        }
    }
    return;
}
