#include "tc_rt.h"

void fn_80074984(void)
{
    u32 r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0x8046b810u;
    r30 = 0u;
    do {
        if (rd32(r31 + 0x48u) != 0u) {
            a.r[0] = r31;
            f1 = tc_callf(0x80070068u, &a);
            r4 = tc_lastr4();
        }
        a.r[0] = r31;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r31) + 0xcu), &a);
        r4 = tc_lastr4();
        r30 = r30 + 1u;
        r31 = r31 + 0x114u;
    } while (r30 < 0x1eu);
    (void)tc_call(0x80177428u, &a);
    return;
}
