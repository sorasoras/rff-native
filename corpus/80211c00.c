#include "tc_rt.h"

void fn_80211c00(void)
{
    u32 c0eq = 0, r3 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x804dfa8cu);
    if ((r3 + 0x10000u) != 0xffffu) {
        a.r[0] = r3;
        f1 = tc_callf(0x8004bc54u, &a);
    }
    r29 = 0u;
    r30 = 0x804dfa68u;
    do {
        r3 = rd32(r30 + 0x28u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 8u), &a);
            }
            wr32(r30 + 0x28u, 0u);
        }
        r29 = r29 + 1u;
        r30 = r30 + 4u;
    } while ((s32)r29 < 7);
    (void)tc_call(0x80211b9cu, &a);
    return;
}
