#include "tc_rt.h"

u32 fn_800cf350(void)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = rd32(0x804b14d4u);
    while (r30 != 0u) {
        r3 = r30;
        r30 = rd32(r30);
        r29 = rd32(r3 + 8u);
        if (rd32(r29 + 0xcu) != 0u) {
            a.r[0] = r29;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r29) + 0x10u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                r31 = 1u;
                a.r[0] = r29;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r29) + 0x14u), &a);
                r4 = tc_lastr4();
            }
        }
    }
    return r31;
}
