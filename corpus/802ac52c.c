#include "tc_rt.h"

void fn_802ac52c(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x802acd40u, &a);
    f1 = tc_lastf();
    r31 = r3;
    r30 = 0u;
    if ((u32)rd8(0x8054161cu) >= 4u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x90003u;
        a.r[1] = 0x80396e20u;
        a.r[2] = (u32)rd16((u32)param_3 + 2u);
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8028cc6cu, &a);
    }
    if (r31 != 0u) {
        if (rd32(r31 + 0x94u) == 0u) {
            r4 = (u32)rd16((u32)param_3 + 2u);
            if ((rd32(r31 + 0x40u) + r4) > 0x2ee0u || (s32)((u32)rd16(r31 + 0x38u) + 1u) > (s32)rd16(r31 + 0xa0u)) {
                if ((u32)rd8(0x8054161cu) >= 4u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x90003u;
                    a.r[1] = 0x80396e44u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
                a.r[0] = (u32)param_3;
                (void)tc_call(0x8028a35cu, &a);
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 2u;
                (void)tc_call(0x802afc08u, &a);
            } else {
                r5 = (u32)rd8(r31 + 0x4eu);
                if (r5 != 0u && (rd32(r31 + 0x88u) & 2u) != 0u) {
                    r3 = (u32)param_3 + (u32)rd16((u32)param_3 + 4u) + 8u;
                    ctr = r4;
                    if ((s32)r4 > 0) {
                        do {
                            r0 = (u32)rd8(r3);
                            r3 = r3 + 1u;
                            if (r0 == r5) {
                                r30 = 2u;
                                break;
                            }
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                a.r[0] = r31 + 0x30u;
                a.r[1] = (u32)param_3;
                f1 = tc_callf(0x8028a77cu, &a);
                wr32(r31 + 0x40u, rd32(r31 + 0x40u) + (u32)rd16((u32)param_3 + 2u));
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r31;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802acef4u, &a);
                if ((u32)rd8(r31 + 0x3du) == 0u) {
                    r12 = rd32(r31 + 0x8cu);
                    r30 = r30 | 1u;
                    r30 = r30 & rd32(r31 + 0x88u);
                    if (r12 != 0u && r30 != 0u) {
                        a.r[0] = r30;
                        a.r[1] = (u32)rd8(r31);
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                    }
                } else if ((r30 & 2u) != 0u) {
                    wr8(r31 + 0x65u, 1u);
                }
            }
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r31;
            a.r[1] = 1u;
            a.r[2] = 1u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802acef4u, &a);
            a.r[0] = (u32)rd8(r31);
            a.r[1] = (u32)param_3 + (u32)rd16((u32)param_3 + 4u) + 8u;
            a.r[2] = (u32)rd16((u32)param_3 + 2u);
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(r31 + 0x94u), &a);
            a.r[0] = (u32)param_3;
            (void)tc_call(0x8028a35cu, &a);
        }
    } else {
        a.r[0] = (u32)param_3;
        (void)tc_call(0x8028a35cu, &a);
    }
    return;
}
