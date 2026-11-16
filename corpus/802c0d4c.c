#include "tc_rt.h"

void fn_802c0d4c(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r27 = 0;
    TcArgs a = {0};
    r27 = rd32(param_r3);
    a.r[0] = rd32(param_r3 + 0x20u);
    a.r[1] = r27;
    r3 = tc_call(0x802c197cu, &a);
    if (r3 == 0u) {
        if ((u32)rd8(param_r3 + 0x42u) == 0u) {
            return;
        }
        if ((u32)rd8(param_r3 + 0x43u) == 0u) {
            r3 = tc_call(0x8023029cu, &a);
            wr32(param_r3 + 0x3cu, tc_lastr4());
            wr32(param_r3 + 0x38u, r3);
            wr8(param_r3 + 0x43u, 1u);
            return;
        }
        (void)tc_call(0x8023029cu, &a);
        if (ppc_divwu(tc_lastr4() - rd32(param_r3 + 0x3cu), (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) < 0x3e8u) {
            return;
        }
        wr8(param_r3 + 0x42u, 0u);
        wr8(param_r3 + 0x43u, 0u);
    } else {
        if ((u32)rd8(param_r3 + 0x42u) != 0u) {
            wr8(param_r3 + 0x43u, 0u);
            (void)tc_call(0x8023029cu, &a);
            if (ppc_divwu(tc_lastr4() - rd32(param_r3 + 0x34u), (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) >= 0x75300u) {
                r27 = rd32(param_r3);
                wr8(param_r3 + 0x42u, 0u);
                wr8(param_r3 + 0x43u, 0u);
                a.r[0] = r27;
                r3 = tc_call(0x8027b068u, &a);
                if (r3 == 0u) {
                    return;
                }
                a.r[0] = r27;
                a.r[1] = 2u;
                a.r[2] = 0u;
                (void)tc_call(0x8027b0acu, &a);
                r4 = r27;
                r27 = (r27 * 0x30u) - 0x7fab8c60u;
                a.r[0] = r27;
                a.r[1] = r4;
                (void)tc_call(0x80226e98u, &a);
                a.r[0] = r27;
                (void)tc_call(0x80226a70u, &a);
                a.r[0] = r27;
                a.r[1] = 0x10624dd3u;
                a.r[2] = 0u;
                a.r[3] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x3e8u;
                a.r[4] = 0x802c0858u;
                (void)tc_call(0x8022697cu, &a);
                wr8(param_r3 + 0x41u, 1u);
                return;
            }
        }
        if ((u32)rd8(param_r3 + 0x41u) == 0u) {
            a.r[0] = r27;
            r3 = tc_call(0x80278ebcu, &a);
            if ((r3 & 0xffu) <= 0x55u) {
                r27 = rd32(param_r3);
                a.r[0] = r27;
                r3 = tc_call(0x8027b068u, &a);
                if (r3 != 0u) {
                    a.r[0] = r27;
                    a.r[1] = 2u;
                    a.r[2] = 0u;
                    (void)tc_call(0x8027b0acu, &a);
                    r4 = r27;
                    r27 = (r27 * 0x30u) - 0x7fab8c60u;
                    a.r[0] = r27;
                    a.r[1] = r4;
                    (void)tc_call(0x80226e98u, &a);
                    a.r[0] = r27;
                    (void)tc_call(0x80226a70u, &a);
                    a.r[0] = r27;
                    a.r[1] = 0x10624dd3u;
                    a.r[2] = 0u;
                    a.r[3] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x3e8u;
                    a.r[4] = 0x802c0858u;
                    (void)tc_call(0x8022697cu, &a);
                    wr8(param_r3 + 0x41u, 1u);
                }
            }
        }
    }
    return;
}
