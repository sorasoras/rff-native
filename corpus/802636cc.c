#include "tc_rt.h"

u32 fn_802636cc(s32 param_1)
{
    u32 r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r31 = (((u32)param_1 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    if ((u32)param_1 != 2u) {
        r29 = 1u;
        r3 = tc_call(0x8022c2b0u, &a);
        f1 = tc_lastf();
        r30 = r3;
        r3 = ((u32)param_1 * 0x14u) - 0x33000000u;
        r5 = rd32(r3 + 0x6800u);
        if ((rd32(r31 + 0xcu) & 8u) != 0u) {
            if ((r5 & 0x1000u) == 0u || (r5 & 0x800u) != 0u) {
                wr32(r31 + 0x20u, 0u);
                wr32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fffcf40u, 0u);
                r29 = 0u;
            }
        } else {
            if ((r5 & 0x800u) != 0u) {
                wr32(r3 + 0x6800u, (rd32(r3 + 0x6800u) & 0x7f5u) | 0x800u);
                wr32(r31 + 0x20u, 0u);
                wr32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fffcf40u, 0u);
            }
            if ((r5 & 0x1000u) == 0u) {
                wr32(r31 + 0x20u, 0u);
                wr32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fffcf40u, 0u);
                r29 = 0u;
            } else {
                r3 = tc_call(0x8023029cu, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu;
                r3 = tc_call(0x80255b5cu, &a);
                f1 = tc_lastf();
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0x64u;
                r3 = tc_call(0x80255b5cu, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4() + 1u;
                r3 = (((u32)param_1 << 2u) & 0xfffffffcu) - 0x80000000u;
                if (rd32(r3 + 0x30c0u) == 0u) {
                    wr32(r3 + 0x30c0u, r4);
                }
                if ((s32)(r4 - rd32(r3 + 0x30c0u)) < 3) {
                    r29 = 0u;
                }
            }
        }
        a.r[0] = r30;
        r3 = tc_call(0x8022c2d8u, &a);
        f1 = tc_lastf();
        r3 = r29;
    } else {
        r3 = 1u;
    }
    return r3;
}
