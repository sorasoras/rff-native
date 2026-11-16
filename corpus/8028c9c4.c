#include "tc_rt.h"

void fn_8028c9c4(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)tc_call(0x8028b7a8u, &a);
    wr8(0x80539be9u, 0u);
    f1 = tc_callf(0x8028b784u, &a);
    if ((u32)rd16(0x80539bf4u) != 0u) {
        while ((u32)rd16(0x80539bf4u) != 0u) {
            a.r[0] = 0x80539becu;
            r3 = tc_call(0x8028a9f8u, &a);
            a.r[0] = r3;
            f1 = tc_callf(0x8028a35cu, &a);
        }
    }
    if ((u32)rd16(0x80539c04u) != 0u) {
        while ((u32)rd16(0x80539c04u) != 0u) {
            a.r[0] = 0x80539bfcu;
            r3 = tc_call(0x8028a9f8u, &a);
            a.r[0] = r3;
            f1 = tc_callf(0x8028a35cu, &a);
        }
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = rd32(0x80539bc0u);
    a.r[1] = 0x8028bebcu;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x802b76d4u, &a);
    return;
}
