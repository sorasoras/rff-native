#include "tc_rt.h"

void fn_8004f468(void)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    do {
        if ((s32)r30 < 4) {
            a.r[0] = r30;
            r3 = tc_call(0x8004f428u, &a);
            if (r3 == 1u) {
                f1 = tc_callf(0x8004eeecu, &a);
                r3 = rd32(0x803c6df0u);
                if (r3 != 0u) {
                    a.f[0] = f1;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    (void)tc_call(0x802f7250u, &a);
                }
            }
        }
        r30 = r30 + 1u;
    } while ((s32)r30 < 4);
    return;
}
