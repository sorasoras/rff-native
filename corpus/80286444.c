#include "tc_rt.h"

void fn_80286444(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = (u32)rd8(0x8050f110u);
    c0lt = (s32)r0 < 3;
    if (r0 != 3u) {
        if (!c0lt) {
            if ((s32)r0 < 5) {
                a.r[0] = 0x8050f810u;
                (void)tc_call(0x80226a70u, &a);
                wr8(0x8050f808u, 1u);
                a.r[0] = 0x80288514u;
                (void)tc_call(0x8028fd70u, &a);
                wr8(0x8050f110u, 5u);
            }
        } else {
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                r31 = 1u;
                (void)tc_call(0x802302bcu, &a);
                if ((s32)(0x1f4u - ppc_divwu(tc_lastr4() - rd32(0x8057148cu), (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu)) < 0) {
                    r3 = tc_call(0x80273734u, &a);
                    if (r3 != 1u) {
                        (void)tc_call(0x8028662cu, &a);
                        r31 = 2u;
                    }
                }
                wr8(0x8050f110u, (u8)r31);
            } else if (!c0lt) {
                (void)tc_call(0x80286088u, &a);
            }
        }
    }
    return;
}
