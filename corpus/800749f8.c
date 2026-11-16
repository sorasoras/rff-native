#include "tc_rt.h"

void fn_800749f8(void)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0x8046b810u;
    r29 = 0u;
    do {
        if (rd32(r30 + 0x48u) != 0u) {
            a.r[0] = 0x8046ad4cu;
            a.r[1] = r30;
            a.r[2] = 0u;
            r3 = tc_call(0x8007b0f4u, &a);
            if (r3 == 0u) {
                a.r[0] = r30;
                f1 = tc_callf(0x80070068u, &a);
                a.r[0] = r30;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r30) + 0x10u), &a);
            }
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x114u;
    } while (r29 < 0x1eu);
    (void)tc_call(0x80177428u, &a);
    return;
}
