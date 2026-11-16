#include "tc_rt.h"

void fn_802431fc(void)
{
    u32 r4 = 0, r12 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = rd32(0x805717e8u);
    if (r29 != 0u) {
        wr32(0x805717e8u, rd32(r29 + 8u));
    }
    while (r29 != 0u) {
        if (rd32(r29 + 0xcu) != 0u) {
            r12 = rd32(r29 + 0x10u);
            if (r12 != 0u) {
                a.r[0] = r29;
                a.r[1] = r4;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
            a.r[0] = r29;
            f1 = tc_callf(0x80243434u, &a);
            r4 = tc_lastr4();
            wr32(r29, rd32(0x804e6380u));
            wr32(0x804e6380u, r29);
            wr32(r29 + 0xcu, 0u);
        }
        r29 = rd32(0x805717e8u);
        if (r29 != 0u) {
            wr32(0x805717e8u, rd32(r29 + 8u));
        }
    }
    return;
}
