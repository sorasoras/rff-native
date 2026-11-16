#include "tc_rt.h"

u32 fn_802723e4(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r0 = rd32(0x80571aa0u);
    if (r0 == 1u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0xfffffffdu;
    } else {
        if (r0 == 2u) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
        } else {
            wr32(0x80571aa0u, 1u);
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
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x8026d950u, &a);
            r30 = r3;
            if (r3 == 0u) {
                r3 = tc_call(0x802de0e8u, &a);
                r30 = r3;
                if (r3 == 0u) {
                    a.r[0] = 0x817fdfe8u;
                    r3 = tc_call(0x802de670u, &a);
                    r30 = r3;
                }
                if (r3 == 0u) {
                    a.r[0] = rd32(0x817fdfe8u);
                    a.r[1] = rd32(0x817fdfecu);
                    a.r[2] = 0x80503420u;
                    r3 = tc_call(0x802de5d8u, &a);
                    r30 = r3;
                }
                if (r3 == 0u) {
                    a.r[0] = 0x8038f580u;
                    a.r[1] = 0x80503420u;
                    (void)tc_call(0x8025bd34u, &a);
                }
                f1 = tc_callf(0x802de13cu, &a);
                r4 = tc_lastr4();
                if (r30 != 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x8038f650u;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80228554u, &a);
                }
                a.r[0] = 0x8038f5c0u;
                (void)tc_call(0x8022d8b8u, &a);
                r3 = tc_call(0x8022c2b0u, &a);
                wr32(0x80571aa0u, 2u);
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
                a.r[0] = rd32(0x80570c40u);
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80226610u, &a);
                r3 = 0u;
            } else {
                r3 = tc_call(0x8022c2b0u, &a);
                wr32(0x80571aa0u, 0u);
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
                a.r[0] = r30;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x802721bcu, &a);
            }
        }
    }
    return r3;
}
