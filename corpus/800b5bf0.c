#include "tc_rt.h"

void fn_800b5bf0(void)
{
    u32 r4 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0x8049f178u;
    r29 = 0x8049f150u;
    r28 = 0u;
    do {
        r12 = rd32(r30);
        if (r12 != 0u) {
            a.r[0] = rd32(r29);
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(r12, &a);
            r4 = tc_lastr4();
            wr32(r30, 0u);
        }
        r28 = r28 + 1u;
        r29 = r29 + 4u;
        r30 = r30 + 4u;
    } while ((s32)r28 < 10);
    (void)tc_call(0x800b5c78u, &a);
    return;
}
