#include "tc_rt.h"

void fn_802acef4(s32 param_1, s32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 0x6cu);
    if (r6 != 0u) {
        if ((u32)rd8(r6 + 0x72u) == 2u) {
            if ((u32)param_2 != 0u) {
                r0 = (u32)rd16((u32)param_1 + 0x9au);
                if (param_3 > r0) {
                    wr16((u32)param_1 + 0x9au, 0u);
                } else {
                    r0 = r0 - param_3;
                    wr16((u32)param_1 + 0x9au, (u16)r0);
                }
                r4 = (u32)rd16((u32)param_1 + 0x9au);
                if (r4 > (u32)rd16((u32)param_1 + 0x9eu) || (u32)rd8((u32)param_1 + 0x3du) != 0u) {
                    return;
                }
                r0 = (u32)rd16((u32)param_1 + 0x9cu);
                if (r0 <= r4) {
                    return;
                }
                r0 = r0 - r4;
                a.r[0] = rd32((u32)param_1 + 0x6cu);
                a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                a.r[2] = r0 & 0xffu;
                (void)tc_call(0x802b06f4u, &a);
                r3 = (u32)rd16((u32)param_1 + 0x9cu);
                wr8((u32)param_1 + 0x3cu, 0u);
                wr16((u32)param_1 + 0x9au, (u16)r3);
                return;
            }
            if (rd32((u32)param_1 + 0x94u) != 0u) {
                wr8((u32)param_1 + 0x3cu, 1u);
                return;
            }
            if ((u32)rd16((u32)param_1 + 0x38u) < (u32)rd16((u32)param_1 + 0x9cu)) {
                return;
            }
            wr8((u32)param_1 + 0x3cu, 1u);
        } else {
            if ((u32)param_2 != 0u) {
                if (((u32)rd8((u32)param_1 + 0x3cu) == 0u || rd32((u32)param_1 + 0x40u) >= 0x1388u) || (u32)rd16((u32)param_1 + 0x38u) >= 8u) {
                    return;
                }
                r0 = (u32)rd8((u32)param_1 + 0x3du);
                wr8((u32)param_1 + 0x3cu, 0u);
                if (r0 != 0u) {
                    return;
                }
                a.r[0] = r6;
                a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                a.r[2] = 1u;
                (void)tc_call(0x802afb64u, &a);
            } else {
                if (rd32((u32)param_1 + 0x94u) != 0u) {
                    r4 = (u32)rd8((u32)param_1 + 0xdu);
                    wr8((u32)param_1 + 0x3cu, 1u);
                    a.r[0] = r6;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    (void)tc_call(0x802afb64u, &a);
                } else {
                    if (rd32((u32)param_1 + 0x40u) > 0x1f40u || (u32)rd16((u32)param_1 + 0x38u) > 0x10u) {
                        if ((u32)rd8((u32)param_1 + 0x3cu) == 0u) {
                            if ((u32)rd8(0x8054161cu) >= 4u) {
                                a.f[0] = param_f1;
                                a.f[1] = param_f2;
                                a.f[2] = param_f3;
                                a.f[3] = param_f4;
                                a.f[4] = param_f5;
                                a.f[5] = param_f6;
                                a.f[6] = param_f7;
                                a.f[7] = param_f8;
                                a.r[0] = 0x90003u;
                                a.r[1] = 0x80397018u;
                                a.r[2] = param_3;
                                a.r[3] = r6;
                                a.r[4] = param_r7;
                                a.r[5] = param_r8;
                                a.r[6] = param_r9;
                                a.r[7] = param_r10;
                                (void)tc_call(0x8028cc54u, &a);
                            }
                            r3 = rd32((u32)param_1 + 0x6cu);
                            wr8((u32)param_1 + 0x3cu, 1u);
                            a.r[0] = r3;
                            a.r[1] = (u32)rd8((u32)param_1 + 0xdu);
                            a.r[2] = 0u;
                            (void)tc_call(0x802afb64u, &a);
                        }
                    }
                }
            }
        }
    }
    return;
}
