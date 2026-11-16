#include "tc_rt.h"

void fn_8028c064(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80539be9u) != 2u) {
        a.r[0] = (u32)param_2;
        (void)tc_call(0x8028a35cu, &a);
        a.r[0] = (u32)rd8(0x80539bddu);
        (void)tc_call(0x8028aed8u, &a);
        wr8(0x80539bddu, 0xffu);
    } else {
        if (param_1 <= 0) {
            a.r[0] = (u32)param_2;
            (void)tc_call(0x8028a35cu, &a);
        } else {
            wr16((u32)param_2 + 2u, (u16)param_1);
            a.r[0] = 3u;
            r3 = tc_call(0x8028a274u, &a);
            r28 = r3;
            if (r3 == 0u) {
                a.r[0] = (u32)param_2;
                (void)tc_call(0x8028a35cu, &a);
            } else {
                a.r[0] = r3;
                a.r[1] = (u32)param_2;
                a.r[2] = (((u32)rd16((u32)param_2 + 2u) + (u32)rd16((u32)param_2 + 4u) + 8u) & 0xfffffffcu) + 4u;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = r28;
                r3 = tc_call(0x802a8360u, &a);
                if (r3 != 0u) {
                    r3 = tc_call(0x802a8530u, &a);
                    if ((r3 & 0xffu) != 0u) {
                        a.r[4] = 0x8028cb5cu;
                        a.r[5] = 0x8053bc20u;
                        (void)tc_call(0x80228118u, &a);
                    }
                }
                a.r[0] = (u32)param_2;
                (void)tc_call(0x8028a35cu, &a);
            }
        }
        do {
            a.r[0] = (u32)rd8(0x80539bddu);
            r3 = tc_call(0x8028a274u, &a);
            r28 = r3;
        } while (r3 == 0u);
        wr16(r3, 0x1100u);
        r29 = (r3 + 0x27u) & 0xffffffe0u;
        wr16(r3 + 2u, 0u);
        wr16(r3 + 4u, (u16)(r29 - (r3 + 8u)));
        a.r[0] = r3;
        r3 = tc_call(0x8028a4ccu, &a);
        r3 = r3 & 0xffffu;
        a.r[0] = rd32(0x80539bc0u);
        a.r[1] = (u32)rd8(0x80539bd1u);
        a.r[2] = r3 - 0x28u - (u32)rd16(r28 + 4u);
        a.r[3] = r29;
        a.r[4] = 0x8028c064u;
        a.r[5] = r28;
        r3 = tc_call(0x802b7ba8u, &a);
        if (r3 != 0u) {
            a.r[0] = r28;
            (void)tc_call(0x8028a35cu, &a);
        }
    }
    return;
}
