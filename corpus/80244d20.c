#include "tc_rt.h"

void fn_80244d20(void)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80571888u) == 2u) {
        wr32(0x80571888u, 0u);
        r3 = tc_call(0x80244a04u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r12 = rd32(0x80571858u);
        if (r12 == 0u) {
            return;
        }
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    } else {
        wr32(0x80571888u, 1u);
    }
    return;
}
