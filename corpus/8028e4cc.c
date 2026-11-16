#include "tc_rt.h"

void fn_8028e4cc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = 0u;
    r5 = (u32)rd16((u32)param_1 + 8u);
    r3 = 0u;
    if (r5 == 0u || r5 == 0xfff0u || r5 == 0xfff4u) {
        r30 = (u32)rd16(((((u32)rd8(0x8053d5e8u) - 1u) << 1u) & 0xfffffffeu) - 0x7fcb7e30u);
        do {
            if (r5 != 0xfff4u) {
                a.r[0] = rd32(0x8053d58cu);
                a.r[1] = r30;
                a.r[2] = 0u;
                r3 = tc_call(0x802b1f8cu, &a);
                if (r3 == 0u) break;
            }
            if (r30 != 0x1200u) {
                r29 = 1u;
            } else if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x8001u;
                r3 = tc_call(0x802b1f64u, &a);
                if (r3 != 0u) {
                    r29 = 1u;
                }
            }
            if (r29 != 0u) {
                r0 = (u32)rd8(0x8053d5e8u) - 1u;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = rd32(0x8053d588u) | r0;
                wr32(0x8053d588u, r0);
            }
        } while (0);
        a.r[0] = rd32(0x8053d58cu);
        (void)tc_call(0x8028a35cu, &a);
        r0 = rd32(0x8053d584u);
        wr32(0x8053d58cu, 0u);
        if (r0 == 0u) {
            a.r[0] = 0x8028ede4u;
            (void)tc_call(0x8029a6c4u, &a);
            a.r[0] = 0x110u;
            r3 = tc_call(0x8028a0d4u, &a);
            r29 = r3;
            if (r3 != 0u) {
                wr16(r3, 0x208u);
                wr8(r3 + 0x10cu, 0u);
                wr32(r3 + 0x108u, rd32(0x8053d588u));
                r3 = r3 + 8u;
                a.r[0] = r3;
                a.r[1] = 0x8053d592u;
                (void)tc_call(0x8028d2a4u, &a);
                r31 = 0x8053d598u;
                if ((u32)(s8)rd8(0x8053d598u) == 0u) {
                    a.r[0] = 0x8053d592u;
                    r3 = tc_call(0x802950e8u, &a);
                    if (r3 != 0u) {
                        r31 = r3;
                    }
                }
                a.r[0] = r29 + 0xeu;
                a.r[1] = r31;
                a.r[2] = 0x20u;
                (void)tc_call(0x8025bdf4u, &a);
                a.r[0] = r29;
                (void)tc_call(0x8028d750u, &a);
            }
        } else {
            a.r[0] = 0x8053d592u;
            (void)tc_call(0x8028ea40u, &a);
        }
    } else {
        if (r5 == 0xfff1u || ((r5 + 0xau) & 0xffffu) <= 1u) {
            wr8(0x8053d5f0u, 0u);
        }
        a.r[0] = rd32(0x8053d58cu);
        (void)tc_call(0x8028a35cu, &a);
        wr32(0x8053d58cu, 0u);
        a.r[0] = 0x8028ede4u;
        (void)tc_call(0x8029a6c4u, &a);
        a.r[0] = 0x110u;
        r3 = tc_call(0x8028a0d4u, &a);
        r29 = r3;
        if (r3 != 0u) {
            wr16(r3, 0x208u);
            wr8(r3 + 0x10cu, 1u);
            wr32(r3 + 0x108u, rd32(0x8053d588u));
            r3 = r3 + 8u;
            a.r[0] = r3;
            a.r[1] = 0x8053d592u;
            (void)tc_call(0x8028d2a4u, &a);
            r30 = 0x8053d598u;
            if ((u32)(s8)rd8(0x8053d598u) == 0u) {
                a.r[0] = 0x8053d592u;
                r3 = tc_call(0x802950e8u, &a);
                if (r3 != 0u) {
                    r30 = r3;
                }
            }
            a.r[0] = r29 + 0xeu;
            a.r[1] = r30;
            a.r[2] = 0x20u;
            (void)tc_call(0x8025bdf4u, &a);
            a.r[0] = r29;
            (void)tc_call(0x8028d750u, &a);
        }
    }
    return;
}
