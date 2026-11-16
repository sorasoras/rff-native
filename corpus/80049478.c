#include "tc_rt.h"

void fn_80049478(void)
{
    u32 r3 = tc_argr(0u), r5 = tc_argr(2u), r29 = 0, r30 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r29 = 0u;
    for (;;) {
        r3 = tc_call(0x80048d78u, &a);
        f1 = tc_lastf();
        r30 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x800495ccu, &a);
        f1 = tc_lastf();
        if ((s32)r29 < 2 && ((u32)rd8(0x803c1de6u) & 1u) == 0u) {
            r3 = rd32(0x803c1d90u);
            r5 = rd32(r30 + 4u);
            if ((r5 + rd32(0x803c1e04u)) == (r3 - 1u)) {
                a.r[0] = 1u;
                r3 = tc_call(0x80046720u, &a);
                f1 = tc_lastf();
            }
        }
        if (r29 == 2u) {
            a.r[0] = 1u;
            r3 = tc_call(0x80046720u, &a);
            f1 = tc_lastf();
        }
        a.r[0] = r30;
        r3 = tc_call(0x80048e3cu, &a);
        f1 = tc_lastf();
        r29 = r29 + 1u;
    }
}
