#include "tc_rt.h"

void fn_8028c7b0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80539be9u) == 2u) {
        c0lt = (s32)param_1 < 2;
        if (param_1 == 2u) {
            a.r[0] = (u32)rd8(0x80539bddu);
            r3 = tc_call(0x8028a274u, &a);
            r27 = r3;
            if (r3 != 0u) {
                wr16(r3 + 2u, (u16)param_3);
                r28 = (r3 + 0x27u) & 0xffffffe0u;
                wr16(r3 + 4u, (u16)(r28 - (r3 + 8u)));
                a.r[0] = r28;
                a.r[1] = param_2;
                a.r[2] = param_3;
                (void)tc_call(0x80004338u, &a);
                if ((u32)rd8(0x80539bf8u) >= 5u || (u32)rd16(0x80539bf4u) != 0u) {
                    a.r[0] = 0x80539becu;
                    a.r[1] = r27;
                    (void)tc_call(0x8028a77cu, &a);
                } else {
                    a.r[0] = rd32(0x80539bc0u);
                    a.r[1] = (u32)rd8(0x80539bd0u);
                    a.r[2] = param_3;
                    a.r[3] = r28;
                    a.r[4] = 0x8028c3b8u;
                    a.r[5] = r27;
                    r3 = tc_call(0x802b7c1cu, &a);
                    if (r3 == 0u) {
                        (void)tc_call(0x8028b7a8u, &a);
                        wr8(0x80539bf8u, (u8)((u32)rd8(0x80539bf8u) + 1u));
                        (void)tc_call(0x8028b784u, &a);
                    } else {
                        a.r[0] = r27;
                        (void)tc_call(0x8028a35cu, &a);
                    }
                }
            }
        } else if (c0lt && param_1 == 0u) {
            a.r[0] = (u32)rd8(0x80539bdcu);
            r3 = tc_call(0x8028a274u, &a);
            r26 = r3;
            if (r3 != 0u) {
                wr16(r3 + 2u, (u16)param_3);
                r27 = (r3 + 0x27u) & 0xffffffe0u;
                wr16(r3 + 4u, (u16)(r27 - (r3 + 8u)));
                a.r[0] = r27;
                a.r[1] = param_2;
                a.r[2] = param_3;
                (void)tc_call(0x80004338u, &a);
                if ((u32)rd8(0x80539c08u) >= 5u || (u32)rd16(0x80539c04u) != 0u) {
                    a.r[0] = 0x80539bfcu;
                    a.r[1] = r26;
                    (void)tc_call(0x8028a77cu, &a);
                } else {
                    a.r[0] = rd32(0x80539bc0u);
                    a.r[1] = 0x20u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = param_3;
                    a.r[6] = r27;
                    a.r[7] = 0x8028c2ccu;
                    a.s[0] = r26;
                    r3 = tc_call(0x802b8234u, &a);
                    if (r3 == 0u) {
                        (void)tc_call(0x8028b7a8u, &a);
                        wr8(0x80539c08u, (u8)((u32)rd8(0x80539c08u) + 1u));
                        (void)tc_call(0x8028b784u, &a);
                    } else {
                        a.r[0] = r26;
                        (void)tc_call(0x8028a35cu, &a);
                    }
                }
            }
        }
    }
    return;
}
