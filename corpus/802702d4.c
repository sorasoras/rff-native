#include "tc_rt.h"

void fn_802702d4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(0x80571a88u) != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        wr32(0x80571a88u, 1u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r31 = 0u;
        a.r[0] = rd32(0x80570c3cu);
        a.r[1] = 0x40u;
        a.r[2] = 0x20u;
        r3 = tc_call(0x80270904u, &a);
        wr32(0x817fdfd8u, r3);
        if (r3 == 0u) {
            r31 = 0xffffffeau;
        } else {
            wr32(r3 + 0x20u, 0u);
            wr32(r3 + 0x24u, 0u);
            wr32(r3 + 0x28u, 0u);
            wr32(r3, 7u);
            wr32(r3 + 8u, param_1);
        }
        if (r31 == 0u) {
            r3 = r3;
            wr32(0x80571a90u, r3);
            wr32(r3 + 0x28u, 1u);
            a.r[0] = rd32(0x817fdfd8u);
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = param_4;
            a.r[4] = param_5;
            r3 = tc_call(0x8026ffd8u, &a);
            r31 = r3;
            if (r3 == 0u) {
                a.r[0] = 0x80503260u;
                a.r[1] = rd32(0x817fdfd8u);
                a.r[2] = 0x40u;
                (void)tc_call(0x80004338u, &a);
                r29 = rd32(0x817fdfd8u);
                wr32(0x80571a8cu, 0x80503260u);
                a.r[0] = 0x8050328cu;
                (void)tc_call(0x8022efd4u, &a);
                a.r[0] = r29;
                a.r[1] = 0x20u;
                (void)tc_call(0x80227738u, &a);
                r3 = tc_call(0x8022c2b0u, &a);
                r30 = r3;
                r0 = rd32(0x80503200u);
                r3 = rd32(0x80503204u);
                r31 = 0u;
                if (r3 < r0) {
                    r0 = 0u - r0;
                    r0 = r0 + r3;
                } else {
                    r4 = r3 - r0;
                    r0 = (((r4 | 0xffffffefu) - (((r4 - 0x10u) >> 1u) & 0x7fffffffu)) >> 0x1fu) & 1u;
                }
                if (r0 != 0u) {
                    r31 = 0xfffffff8u;
                } else {
                    wr32(((rd32(0x8050320cu) << 2u) & 0xfffffffcu) - 0x7fafcdf0u, r29);
                    r0 = rd32(0x80503204u) + 1u;
                    wr32(0x8050320cu, (rd32(0x8050320cu) + 1u) & 0xfu);
                    wr32(0x80503204u, r0);
                    a.r[0] = r29;
                    a.r[1] = rd32(r29 + 8u);
                    (void)tc_call(0x80270bacu, &a);
                }
                if (r31 != 0u) {
                    a.r[0] = r30;
                    (void)tc_call(0x8022c2d8u, &a);
                } else {
                    if ((s32)rd32(0x80570c38u) > 0) {
                        r0 = rd32(0x80503200u);
                        r3 = rd32(0x80503204u);
                        if (r3 < r0) {
                            r0 = 0u - r0;
                            r0 = r0 + r3;
                        } else {
                            r0 = r3 - r0;
                            r0 = ppc_cntlzw(r0);
                            r0 = (r0 >> 5u) & 0x7ffffffu;
                        }
                        if (r0 == 0u) {
                            r4 = rd32(((rd32(0x80503208u) << 2u) & 0xfffffffcu) - 0x7fafcdf0u);
                            if (r4 != 0u) {
                                if (rd32(r4 + 0x28u) != 0u) {
                                    wr32(0x80570c38u, rd32(0x80570c38u) - 1u);
                                }
                                r4 = r4 - 0x80000000u;
                                a.r[0] = 0u;
                                a.r[1] = r4;
                                (void)tc_call(0x8026ed20u, &a);
                                r4 = rd32(0x80503200u);
                                r5 = rd32(0x80503208u);
                                wr32(0x80570c38u, rd32(0x80570c38u) - 1u);
                                r4 = r4 + 1u;
                                wr32(0x80503200u, r4);
                                wr32(0x80503208u, (r5 + 1u) & 0xfu);
                                a.r[0] = 1u;
                                r3 = tc_call(0x8026ed10u, &a);
                                a.r[0] = 1u;
                                a.r[1] = (r3 & 0x30u) | 1u;
                                (void)tc_call(0x8026ed20u, &a);
                            }
                        }
                    }
                    a.r[0] = rd32(0x80571a8cu) + 0x2cu;
                    (void)tc_call(0x8022ffe4u, &a);
                    a.r[0] = r30;
                    (void)tc_call(0x8022c2d8u, &a);
                    r31 = rd32(rd32(0x80571a8cu) + 4u);
                }
            }
        }
        r4 = rd32(0x817fdfd8u);
        wr32(0x80571a88u, 0u);
        wr32(0x80571a90u, 0u);
        if (r4 != 0u && r31 != 0u) {
            a.r[0] = rd32(0x80570c3cu);
            a.r[1] = r4;
            (void)tc_call(0x80270908u, &a);
        }
    }
    return;
}
