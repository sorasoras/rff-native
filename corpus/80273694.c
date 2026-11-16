#include "tc_rt.h"

void fn_80273694(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if ((u32)rd8(0x80571ac6u) != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        wr8(0x80571ac6u, 1u);
        wr8(0x80571ab0u, 1u);
        a.r[0] = r3;
        f1 = tc_callf(0x8022c2d8u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32(0x80570c80u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80226610u, &a);
        a.r[0] = 0x80503780u;
        (void)tc_call(0x8022efd4u, &a);
        r3 = tc_call(0x80225448u, &a);
        if ((r3 & 0x10000000u) != 0u) {
            wr8(0x80571ac4u, 1u);
        }
        r3 = tc_call(0x802723e4u, &a);
        if (r3 == 0u) {
            a.r[0] = 0x80503920u;
            a.r[1] = 0x4000u;
            a.r[2] = 0u;
            r3 = tc_call(0x80273850u, &a);
            if (r3 == 0u) {
                return;
            }
        }
        wr8(0x80571ab0u, 2u);
    }
    return;
}
