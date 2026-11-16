#include "tc_rt.h"

void fn_80311e4c(u32 param_r3)
{
    u32 r3 = 0, r5 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fcfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (rd32(param_r3 + 0xf0u) != 0u) {
        wr32(param_r3 + 0xf0u, 0u);
    }
    if ((rd32(param_r3 + 0x20u) & 1u) != 0u) {
        a.r[0] = param_r3;
        (void)tc_call(0x80311dbcu, &a);
    }
    a.r[0] = param_r3;
    (void)tc_call(0x80311fdcu, &a);
    if ((rd32(param_r3 + 0x20u) & 1u) != 0u) {
        r3 = rd32(param_r3 + 0xbcu);
        r5 = (u32)rd16(r3 + 0x2cu);
        r3 = r3 + 0x24u;
        a.r[0] = r3;
        a.r[1] = 0x817fcfe8u;
        a.r[2] = r5;
        r3 = tc_call(0x803200acu, &a);
        r31 = r3 & 0xffffu;
        r29 = 0u;
        while ((r29 & 0xffffu) < r31) {
            r28 = rd32(((r29 << 2u) & 0x3fffcu) - 0x7e803018u);
            r3 = rd32(r28 + 0xf4u);
            while (r3 != 0u) {
                if (r3 == param_r3) {
                    a.r[0] = r28;
                    (void)tc_call(0x80311dbcu, &a);
                    if (rd32(r28 + 0xcu) != 1u) break;
                    a.r[0] = rd32(param_r3 + 0xbcu);
                    a.r[1] = r28;
                    (void)tc_call(0x80310bb4u, &a);
                    break;
                }
                r3 = rd32(r3 + 0xf4u);
            }
            r29 = r29 + 1u;
        }
    }
    return;
}
