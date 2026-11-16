#include "tc_rt.h"

void fn_80049048(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = 0u;
    r28 = 0u;
    wr32(0x817fdfd8u, param_1);
    r30 = rd32(0x803c1e00u);
    for (;;) {
        if ((u32)rd8(0x803c1de7u) != 0u) {
            ctr = r28;
            if (r28 != 0u) {
                do {
                    r0 = rd32(0x803c1e04u);
                    r28 = r28 - 1u;
                    r6 = rd32(0x803c1d90u);
                    r4 = r29 + r0;
                    wr32(0x803c1e18u, rd32(0x803c1e18u) + 1u);
                    if ((r4 - (ppc_divwu(r4, r6) * r6)) != (r6 - 1u)) {
                        r3 = rd32(0x817fdfd8u);
                        r4 = rd32(r3);
                        wr32(0x817fdfd8u, r3 + r30);
                        r30 = r4;
                    } else {
                        if (((u32)rd8(0x803c1de6u) & 1u) == 0u) break;
                        r3 = rd32(0x817fdfd8u);
                        r0 = rd32(0x803c1df8u);
                        r30 = rd32(r3);
                        wr32(0x817fdfd8u, r0);
                    }
                    r29 = r29 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        wr32(0x817fdfdcu, r29);
        a.r[0] = 0x817fdfd8u;
        r3 = tc_call(0x80049178u, &a);
        f1 = tc_lastf();
        r0 = rd32(0x803c1e04u);
        r28 = r3;
        r5 = rd32(0x803c1d90u);
        r4 = r29 + r0;
        if ((r4 - (ppc_divwu(r4, r5) * r5)) != (r5 - 1u)) {
            r3 = rd32(0x817fdfd8u);
            r4 = rd32(r3);
            wr32(0x817fdfd8u, r3 + r30);
            r30 = r4;
        } else if (((u32)rd8(0x803c1de6u) & 1u) == 0u) {
            a.r[0] = 0x803c3b48u;
            r3 = tc_call(0x8022fe50u, &a);
            f1 = tc_lastf();
        } else {
            r3 = rd32(0x817fdfd8u);
            r0 = rd32(0x803c1df8u);
            r30 = rd32(r3);
            wr32(0x817fdfd8u, r0);
        }
        r29 = r29 + 1u;
    }
}
