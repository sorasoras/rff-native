#include "tc_rt.h"

void fn_80326368(s32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r9 = 0;
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32((u32)param_1 + 0xb0u, 0xffffffffu);
    wr32((u32)param_1 + 0xb4u, 0xffffffffu);
    a.r[0] = 1u;
    (void)tc_call(0x80251e90u, &a);
    if ((u32)rd8((u32)param_4 + 0x60u) != 0u) {
        if ((u32)rd8((u32)param_3 + 0x60u) != 1u) {
            a.r[0] = 0u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 2u;
            (void)tc_call(0x80251eb4u, &a);
        } else {
            r7 = rd32((u32)param_4 + 0x64u);
            r9 = 2u;
            if ((u32)rd8((u32)param_4 + 0x6cu) != 0u) {
                r9 = 1u;
            }
            a.r[0] = 0u;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = r7;
            a.r[5] = 0u;
            a.r[6] = r9;
            (void)tc_call(0x80251eb4u, &a);
        }
        if ((u32)rd8((u32)param_3 + 0x68u) != 1u) {
            a.r[0] = 2u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 2u;
            (void)tc_call(0x80251eb4u, &a);
        } else {
            r7 = rd32((u32)param_4 + 0x68u);
            r9 = 2u;
            if ((u32)rd8((u32)param_4 + 0x6cu) != 0u) {
                r9 = 1u;
            }
            a.r[0] = 2u;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = r7;
            a.r[5] = 0u;
            a.r[6] = r9;
            (void)tc_call(0x80251eb4u, &a);
        }
    } else {
        a.r[0] = 4u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 2u;
        (void)tc_call(0x80251eb4u, &a);
    }
    a.r[0] = 5u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 2u;
    (void)tc_call(0x80251eb4u, &a);
    r6 = (u32)rd8((u32)param_4 + 0x99u);
    r5 = (u32)rd8((u32)param_4 + 0x9au);
    r0 = (u32)rd8((u32)param_4 + 0x9bu);
    wr8(0x817fdfecu, rd8((u32)param_4 + 0x98u));
    wr8(0x817fdfedu, (u8)r6);
    wr8(0x817fdfeeu, (u8)r5);
    wr8(0x817fdfefu, (u8)r0);
    a.r[0] = 4u;
    a.r[1] = 0x817fdfecu;
    (void)tc_call(0x80251db8u, &a);
    r6 = (u32)rd8((u32)param_4 + 0x9du);
    r5 = (u32)rd8((u32)param_4 + 0x9eu);
    r0 = (u32)rd8((u32)param_4 + 0x9fu);
    wr8(0x817fdfe8u, rd8((u32)param_4 + 0x9cu));
    wr8(0x817fdfe9u, (u8)r6);
    wr8(0x817fdfeau, (u8)r5);
    wr8(0x817fdfebu, (u8)r0);
    a.r[0] = 4u;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x80251ce0u, &a);
    wr8((u32)param_1 + 0xb8u, 0u);
    r5 = 0u;
    wr8((u32)param_1 + 0xb9u, 0u);
    wr8((u32)param_1 + 0xbau, 0u);
    wr8((u32)param_1 + 0xbbu, 0u);
    wr8((u32)param_1 + 0xbcu, 0u);
    wr8((u32)param_1 + 0xbdu, 0u);
    wr8((u32)param_1 + 0xbeu, 0u);
    wr8((u32)param_1 + 0xbfu, 0u);
    ctr = 3u;
    do {
        r4 = (u32)param_3 + r5;
        r0 = (u32)rd8(r4 + 0x61u);
        c0lt = (s32)r0 < 4;
        if (r0 == 4u) {
            wr8((u32)param_1 + 0xbbu, 1u);
        } else if (!c0lt) {
            c0lt = (s32)r0 < 6;
            if (r0 == 6u) {
                wr8((u32)param_1 + 0xbau, 1u);
                wr8((u32)param_1 + 0xbbu, 1u);
            } else if (c0lt) {
                wr8((u32)param_1 + 0xb8u, 1u);
                wr8((u32)param_1 + 0xb9u, 1u);
            }
        } else {
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                wr8((u32)param_1 + 0xb9u, 1u);
            } else if (!c0lt) {
                wr8((u32)param_1 + 0xbau, 1u);
            } else if ((s32)r0 >= 1) {
                wr8((u32)param_1 + 0xb8u, 1u);
            }
        }
        r0 = (u32)rd8(r4 + 0x69u);
        c0lt = (s32)r0 < 4;
        if (r0 == 4u) {
            wr8((u32)param_1 + 0xbfu, 1u);
        } else if (!c0lt) {
            c0lt = (s32)r0 < 6;
            if (r0 == 6u) {
                wr8((u32)param_1 + 0xbeu, 1u);
                wr8((u32)param_1 + 0xbfu, 1u);
            } else if (c0lt) {
                wr8((u32)param_1 + 0xbcu, 1u);
                wr8((u32)param_1 + 0xbdu, 1u);
            }
        } else {
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                wr8((u32)param_1 + 0xbdu, 1u);
            } else if (!c0lt) {
                wr8((u32)param_1 + 0xbeu, 1u);
            } else if ((s32)r0 >= 1) {
                wr8((u32)param_1 + 0xbcu, 1u);
            }
        }
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r5 = 0u;
    ctr = 4u;
    do {
        r4 = (u32)param_3 + r5;
        r0 = (u32)rd8(r4 + 0x64u);
        c0lt = (s32)r0 < 4;
        if (r0 == 4u) {
            wr8((u32)param_1 + 0xbbu, 1u);
        } else if (!c0lt) {
            c0lt = (s32)r0 < 6;
            if (r0 == 6u) {
                wr8((u32)param_1 + 0xbau, 1u);
                wr8((u32)param_1 + 0xbbu, 1u);
            } else if (c0lt) {
                wr8((u32)param_1 + 0xb8u, 1u);
                wr8((u32)param_1 + 0xb9u, 1u);
            }
        } else {
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                wr8((u32)param_1 + 0xb9u, 1u);
            } else if (!c0lt) {
                wr8((u32)param_1 + 0xbau, 1u);
            } else if ((s32)r0 >= 1) {
                wr8((u32)param_1 + 0xb8u, 1u);
            }
        }
        r0 = (u32)rd8(r4 + 0x6cu);
        c0lt = (s32)r0 < 4;
        if (r0 == 4u) {
            wr8((u32)param_1 + 0xbfu, 1u);
        } else if (!c0lt) {
            c0lt = (s32)r0 < 6;
            if (r0 == 6u) {
                wr8((u32)param_1 + 0xbeu, 1u);
                wr8((u32)param_1 + 0xbfu, 1u);
            } else if (c0lt) {
                wr8((u32)param_1 + 0xbcu, 1u);
                wr8((u32)param_1 + 0xbdu, 1u);
            }
        } else {
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                wr8((u32)param_1 + 0xbdu, 1u);
            } else if (!c0lt) {
                wr8((u32)param_1 + 0xbeu, 1u);
            } else if ((s32)r0 >= 1) {
                wr8((u32)param_1 + 0xbcu, 1u);
            }
        }
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
