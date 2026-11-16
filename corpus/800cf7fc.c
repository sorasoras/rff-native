#include "tc_rt.h"

void fn_800cf7fc(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    while (rd32(0x804b152cu) != 0u) {
        a.r[0] = 0x804b1524u;
        r3 = tc_call(0x8007b09cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r0 = rd32(r3 + 4u);
        r29 = r3;
        if (r0 == 0u) {
            a.r[0] = 0x804b14d4u;
            a.r[1] = rd32(r3 + 0x10u);
            f1 = tc_callf(0x8007aff0u, &a);
            r4 = tc_lastr4();
        } else {
            if (r0 == 1u) {
                a.r[0] = 0x804b14fcu;
                a.r[1] = rd32(r3 + 0x10u);
                f1 = tc_callf(0x8007aff0u, &a);
                r4 = tc_lastr4();
            }
        }
        a.r[0] = r29;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r29) + 0xcu), &a);
        if (r29 != 0u) {
            a.r[0] = r29;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r29) + 8u), &a);
        }
    }
    return;
}
