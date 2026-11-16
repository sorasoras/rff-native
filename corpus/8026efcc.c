#include "tc_rt.h"

void fn_8026efcc(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 1u;
    r3 = tc_call(0x8026ed10u, &a);
    if ((r3 & 0x14u) == 0x14u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        (void)tc_call(0x8026ed74u, &a);
    }
    a.r[0] = 1u;
    r3 = tc_call(0x8026ed10u, &a);
    if ((r3 & 0x22u) == 0x22u) {
        a.r[0] = 1u;
        r3 = tc_call(0x8026ed10u, &a);
        a.r[0] = 1u;
        a.r[1] = (r3 & 0x30u) | 2u;
        (void)tc_call(0x8026ed20u, &a);
        wr32(0xcd000030u, 0x40000000u);
        r31 = rd32(0x80570c38u);
        if ((s32)r31 < 1) {
            r31 = r31 + 1u;
            wr32(0x80570c38u, r31);
            (void)tc_call(0x80270c2cu, &a);
        }
        if ((s32)r31 > 0) {
            if (rd32(0x80571a88u) != 0u) {
                wr32(rd32(0x80571a8cu) + 4u, 0u);
                r3 = rd32(0x80571a8cu);
                wr32(0x80571a88u, 0u);
                r3 = r3 + 0x2cu;
                a.r[0] = r3;
                (void)tc_call(0x802300d0u, &a);
                a.r[0] = 1u;
                r3 = tc_call(0x8026ed10u, &a);
                a.r[0] = 1u;
                a.r[1] = (r3 & 0x30u) | 8u;
                (void)tc_call(0x8026ed20u, &a);
            }
            r4 = rd32(0x80503200u);
            r0 = rd32(0x80503204u);
            if (r0 < r4) {
                r0 = r0 - r4;
            } else {
                r0 = r0 - r4;
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
    }
    return;
}
