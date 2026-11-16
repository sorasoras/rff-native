#include "tc_rt.h"

void fn_80048f7c(void)
{
    u32 r0 = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r29 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r29 = 0u;
    for (;;) {
        if ((u32)rd8(0x803c1de7u) != 0u) {
            while (r29 != 0u) {
                r3 = tc_call(0x80048e08u, &a);
                f1 = tc_lastf();
                r4 = rd32(r3 + 4u);
                r31 = r3;
                r0 = rd32(0x803c1e04u);
                r6 = rd32(0x803c1d90u);
                r5 = r4 + r0;
                if ((r5 - (ppc_divwu(r5, r6) * r6)) == (r6 - 1u) && ((u32)rd8(0x803c1de6u) & 1u) == 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x80049178u, &a);
                    f1 = tc_lastf();
                }
                a.r[0] = r31;
                r3 = tc_call(0x80048df4u, &a);
                f1 = tc_lastf();
                r29 = r29 - 1u;
                wr32(0x803c1e18u, rd32(0x803c1e18u) + 1u);
            }
        }
        if ((u32)rd8(0x803c1de7u) != 0u) {
            r3 = tc_call(0x80048e08u, &a);
            f1 = tc_lastf();
            r31 = r3;
        } else {
            r3 = tc_call(0x80048d78u, &a);
            f1 = tc_lastf();
            r31 = r3;
        }
        r3 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x80049178u, &a);
        f1 = tc_lastf();
        r29 = r3;
        a.r[0] = r31;
        r3 = tc_call(0x80048df4u, &a);
        f1 = tc_lastf();
    }
}
