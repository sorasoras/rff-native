#include "tc_rt.h"

s32 fn_8026f2a0(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        if ((u32)param_2 == 0u) {
            a.r[0] = (u32)param_1 + 0x2cu;
            (void)tc_call(0x8022efd4u, &a);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0x20u;
        (void)tc_call(0x80227738u, &a);
        r3 = tc_call(0x8022c2b0u, &a);
        r30 = r3;
        r4 = rd32(0x80503200u);
        r0 = rd32(0x80503204u);
        r31 = 0u;
        if (r0 >= r4) {
            r4 = r0 - r4;
            r0 = (((r4 | 0xffffffefu) - (((r4 - 0x10u) >> 1u) & 0x7fffffffu)) >> 0x1fu) & 1u;
        } else {
            r0 = r0 - r4;
        }
        if (r0 == 0u) {
            wr32(((rd32(0x8050320cu) << 2u) & 0xfffffffcu) - 0x7fafcdf0u, (u32)param_1);
            r0 = rd32(0x80503204u) + 1u;
            wr32(0x8050320cu, (rd32(0x8050320cu) + 1u) & 0xfu);
            wr32(0x80503204u, r0);
            a.r[0] = (u32)param_1;
            a.r[1] = rd32((u32)param_1 + 8u);
            (void)tc_call(0x80270bacu, &a);
        } else {
            r31 = 0xfffffff8u;
        }
        if (r31 == 0u) {
            if ((s32)rd32(0x80570c38u) > 0) {
                r4 = rd32(0x80503200u);
                r0 = rd32(0x80503204u);
                if (r0 >= r4) {
                    r0 = r0 - r4;
                    r0 = ppc_cntlzw(r0);
                    r0 = (r0 >> 5u) & 0x7ffffffu;
                } else {
                    r0 = r0 - r4;
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
            if ((u32)param_2 == 0u) {
                a.r[0] = (u32)param_1 + 0x2cu;
                (void)tc_call(0x8022ffe4u, &a);
            }
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
            if ((u32)param_2 == 0u) {
                r31 = rd32((u32)param_1 + 4u);
            }
        } else {
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
            if ((u32)param_2 != 0u) {
                a.r[0] = rd32(0x80570c3cu);
                a.r[1] = (u32)param_1;
                (void)tc_call(0x80270908u, &a);
            }
        }
    } else {
        r31 = 0xfffffffcu;
    }
    if ((u32)param_1 != 0u && (u32)param_2 == 0u) {
        a.r[0] = rd32(0x80570c3cu);
        a.r[1] = (u32)param_1;
        (void)tc_call(0x80270908u, &a);
    }
    return (s32)r31;
}
