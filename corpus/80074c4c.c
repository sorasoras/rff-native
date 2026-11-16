#include "tc_rt.h"

void fn_80074c4c(void)
{
    u32 r3 = 0, r4 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    while (rd32(0x8046ada4u) != 0u) {
        a.r[0] = 0x8046ad9cu;
        r3 = tc_call(0x8007b09cu, &a);
        r28 = r3;
        a.r[0] = 0x8046ad74u;
        a.r[1] = rd32(r3 + 0x15cu);
        f1 = tc_callf(0x8007aff0u, &a);
        r3 = rd32(r28 + 0x158u);
        if (r3 != 0u) {
            r3 = r3 + 0xd8u;
            a.r[0] = r3;
            a.r[1] = rd32(r28 + 0x160u);
            f1 = tc_callf(0x8007aff0u, &a);
        }
        r4 = rd32(0x8046ad24u);
        while (r4 != 0u) {
            r3 = r4;
            r4 = rd32(r4);
            r3 = rd32(r3 + 8u);
            if (rd32(r3 + 0x2cu) == r28) {
                wr32(r3 + 0x2cu, 0u);
            }
        }
        a.r[0] = r28;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r28) + 0x18u), &a);
        if (r28 != 0u) {
            a.r[0] = r28;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r28) + 8u), &a);
        }
    }
    return;
}
