#include "tc_rt.h"

void fn_80219c1c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r24 = 0, r25 = 0, r26 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32((u32)param_1 + 0x68u);
    a.r[1] = 0u;
    (void)tc_call(0x800a7bb8u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80218684u, &a);
    r3 = rd32(r3 + 0x3e8u);
    r29 = 0u;
    r28 = 0xffffffffu;
    r25 = 0xffffffffu;
    r30 = rd32(r3 + 4u);
    r24 = r30 - 1u;
    while ((s32)r24 >= 0) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80218684u, &a);
        a.r[0] = r3;
        a.r[1] = rd32((u32)param_1 + 0x68u);
        a.r[2] = r24;
        r3 = tc_call(0x802156d0u, &a);
        r26 = r3;
        if (r3 == 0u || rd32(r3 + 0xcu) != 0u || (s32)rd32(r3 + 8u) <= (s32)r25) {
            r24 = r24 - 1u;
        } else {
            r3 = rd32(r3 + 4u);
            if (r3 != 0xfffffffeu) {
                if (r3 == 0xffffffffu) {
                    r24 = r24 - 1u;
                    continue;
                }
                a.r[0] = r3;
                r3 = tc_call(0x8014d8acu, &a);
                if (r3 == 0u) {
                    r24 = r24 - 1u;
                    continue;
                }
            }
            r25 = rd32(r26 + 8u);
            r28 = r24;
            r29 = 1u;
            r24 = r24 - 1u;
        }
    }
    if (r29 == 0u) {
        r28 = 0u;
        a.r[0] = 0x202du;
        r3 = tc_call(0x8014d9a4u, &a);
        if (r3 == 0u) {
            r0 = (u32)rd8(0x80492b98u);
            if (r0 == 1u || r0 == 2u) {
                r7 = rd32(0x8033c7fcu);
                r28 = 0x817fdfc8u;
                r5 = rd32(0x8033c800u);
                r4 = rd32(0x8033c804u);
                r3 = rd32(0x8033c808u);
                r0 = rd32(0x8033c80cu);
                wr32(0x817fdfc8u, rd32(0x8033c7f8u));
                wr32(0x817fdfccu, r7);
                wr32(0x817fdfd0u, r5);
                wr32(0x817fdfd4u, r4);
                wr32(0x817fdfd8u, r3);
                wr32(0x817fdfdcu, r0);
            } else {
                r7 = rd32(0x8033c814u);
                r28 = 0x817fdfb0u;
                r5 = rd32(0x8033c818u);
                r4 = rd32(0x8033c81cu);
                r3 = rd32(0x8033c820u);
                r0 = rd32(0x8033c824u);
                wr32(0x817fdfb0u, rd32(0x8033c810u));
                wr32(0x817fdfb4u, r7);
                wr32(0x817fdfb8u, r5);
                wr32(0x817fdfbcu, r4);
                wr32(0x817fdfc0u, r3);
                wr32(0x817fdfc4u, r0);
            }
            r26 = (u32)rd8(0x80492823u);
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80218684u, &a);
            a.r[0] = r3;
            a.r[1] = rd32((u32)param_1 + 0x68u);
            a.r[2] = rd32(r28 + ((r26 << 2u) & 0x3fcu));
            r3 = tc_call(0x802156d0u, &a);
            if (r3 != 0u && (s32)rd32(r3) > 0) {
                r29 = 1u;
            }
        }
        if (r29 == 0u) {
            r0 = (u32)rd8(0x80492b98u);
            if (r0 == 1u || r0 == 2u) {
                r7 = rd32(0x8033c82cu);
                r28 = 0x817fdf98u;
                r5 = rd32(0x8033c830u);
                r4 = rd32(0x8033c834u);
                r3 = rd32(0x8033c838u);
                r0 = rd32(0x8033c83cu);
                wr32(0x817fdf98u, rd32(0x8033c828u));
                wr32(0x817fdf9cu, r7);
                wr32(0x817fdfa0u, r5);
                wr32(0x817fdfa4u, r4);
                wr32(0x817fdfa8u, r3);
                wr32(0x817fdfacu, r0);
            } else {
                if ((u32)rd8(0x80492821u) == 1u) {
                    r8 = rd32(0x8033c844u);
                    r6 = rd32(0x8033c848u);
                    r28 = 0x817fdf80u;
                    r5 = rd32(0x8033c84cu);
                    r4 = rd32(0x8033c850u);
                    r0 = rd32(0x8033c854u);
                    wr32(0x817fdf80u, rd32(0x8033c840u));
                    r26 = (u32)rd8(0x80492823u);
                    wr32(0x817fdf84u, r8);
                    wr32(0x817fdf88u, r6);
                    wr32(0x817fdf8cu, r5);
                    wr32(0x817fdf90u, r4);
                    wr32(0x817fdf94u, r0);
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x80218684u, &a);
                    a.r[0] = r3;
                    a.r[1] = rd32((u32)param_1 + 0x68u);
                    a.r[2] = rd32(((r26 << 2u) & 0x3fcu) - 0x7e802080u);
                    r3 = tc_call(0x802156d0u, &a);
                    if (r3 != 0u && (s32)rd32(r3) > 0) {
                        r29 = 1u;
                    }
                }
                if (r29 == 0u) {
                    r7 = rd32(0x8033c85cu);
                    r28 = 0x817fdf68u;
                    r5 = rd32(0x8033c860u);
                    r4 = rd32(0x8033c864u);
                    r3 = rd32(0x8033c868u);
                    r0 = rd32(0x8033c86cu);
                    wr32(0x817fdf68u, rd32(0x8033c858u));
                    wr32(0x817fdf6cu, r7);
                    wr32(0x817fdf70u, r5);
                    wr32(0x817fdf74u, r4);
                    wr32(0x817fdf78u, r3);
                    wr32(0x817fdf7cu, r0);
                }
            }
        }
        if (r28 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = rd32(r28 + (((u32)rd8(0x80492823u) << 2u) & 0xfffffffcu));
            a.r[2] = 0u;
            (void)tc_call(0x8021acc0u, &a);
        }
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = r28;
        a.r[2] = 0u;
        (void)tc_call(0x8021acc0u, &a);
    }
    r3 = tc_call(0x80218648u, &a);
    r28 = r3;
    a.r[0] = 6u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    r3 = tc_call(0x80218624u, &a);
    r24 = r3;
    while ((s32)r24 <= (s32)r28) {
        a.r[0] = (u32)param_1;
        a.r[1] = r24;
        a.r[2] = 2u;
        (void)tc_call(0x8021a544u, &a);
        r24 = r24 + 1u;
    }
    r24 = 0xffffffffu;
    r25 = 0xffffffffu;
    r26 = 1u;
    do {
        r29 = r30 - 1u;
        while ((s32)r29 >= 0) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80218684u, &a);
            a.r[0] = r3;
            a.r[1] = rd32((u32)param_1 + 0x68u);
            a.r[2] = r29;
            r3 = tc_call(0x802156d0u, &a);
            r28 = r3;
            if (r3 != 0u && rd32(r3 + 0xcu) == r26 && (s32)rd32(r3 + 8u) > (s32)r25) {
                r3 = rd32(r3 + 4u);
                if (r3 == 0xfffffffeu) {
                    r24 = r29;
                    r25 = rd32(r28 + 8u);
                } else if (r3 != 0xffffffffu) {
                    a.r[0] = r3;
                    r3 = tc_call(0x8014d8acu, &a);
                    if (r3 != 0u) {
                        r24 = r29;
                        r25 = rd32(r28 + 8u);
                    }
                }
            }
            r29 = r29 - 1u;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = r24;
        a.r[2] = r26;
        (void)tc_call(0x8021acc0u, &a);
        r26 = r26 + 1u;
    } while ((s32)r26 < 3);
    a.r[0] = (u32)param_1;
    a.r[1] = 5u;
    (void)tc_call(0x8021854cu, &a);
    if (rd32((u32)param_1 + 0x68u) == 9u) {
        r3 = rd32((u32)param_1 + 0x54u);
        if (((((0u - r3) | r3) >> 0x1fu) & 1u) == 0u) {
            wr8(rd32((u32)param_1 + 0x64u), 0u);
        }
    }
    return;
}
