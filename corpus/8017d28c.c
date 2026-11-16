#include "tc_rt.h"

void fn_8017d28c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = ((u32)rd8(0x80492823u) + ((u32)rd8(0x80492822u) * 6u) + 1u) & 0xffu;
    if (r31 != 0x14u) {
        r28 = 0u;
        do {
            if (r28 != 0u) {
                if (r31 > 7u) {
                    a.r[0] = param_1;
                    a.r[1] = r28;
                    (void)tc_call(0x8017d528u, &a);
                } else {
                    a.r[0] = param_1;
                    a.r[1] = r28;
                    (void)tc_call(0x8017d438u, &a);
                }
            }
            r28 = r28 + 1u;
        } while (r28 <= 8u);
    } else {
        r3 = tc_call(0x80040b64u, &a);
        r30 = r3 - (((ppc_mulhwu(0x38e38e39u, r3) >> 1u) & 0x7fffffffu) * 9u);
        if (r30 < 1u) {
            r30 = 1u;
        }
        if (r30 > 8u) {
            r30 = 8u;
        }
        r29 = 0u;
        for (;;) {
            r3 = tc_call(0x80040b64u, &a);
            r28 = r3 - (((ppc_mulhwu(0x38e38e39u, r3) >> 1u) & 0x7fffffffu) * 9u);
            if (r28 < 1u) {
                r28 = 1u;
            }
            if (r28 > 8u) {
                r28 = 8u;
            }
            if (r28 != r30) break;
            r29 = r29 + 1u;
            if (r29 > 0x2710u) {
                r28 = 0u;
                break;
            }
        }
        r3 = tc_call(0x80040b64u, &a);
        r3 = r3 & 3u;
        r3 = ((r30 << 2u) & 0xfffffffcu) - 0x7fb6d800u + r3;
        r0 = (u32)rd8(r3 + 0x39cu) + 0x14u;
        if (r0 > 0x3cu) {
            wr8(r3 + 0x39cu, 0x3cu);
        } else {
            wr8(r3 + 0x39cu, (u8)r0);
        }
        if (r28 != 0u) {
            r3 = tc_call(0x80040b64u, &a);
            r3 = r3 & 3u;
            r3 = ((r28 << 2u) & 0xfffffffcu) - 0x7fb6d800u + r3;
            r0 = (u32)rd8(r3 + 0x39cu) + 0x14u;
            if (r0 > 0x3cu) {
                wr8(r3 + 0x39cu, 0x3cu);
            } else {
                wr8(r3 + 0x39cu, (u8)r0);
            }
        }
    }
    return;
}
