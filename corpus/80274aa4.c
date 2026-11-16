#include "tc_rt.h"

void fn_80274aa4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = param_1;
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r0 = (u32)rd8(0x80571ab0u);
    r31 = r3;
    if (r0 != 0u) {
        if (param_1 != 0u) {
            if (r0 != 1u) {
                r0 = 2u;
            }
            a.r[0] = r0;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(param_1, &a);
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        wr8(0x80571ab0u, 1u);
        if (param_1 == 0u) {
            r30 = 0x80274a98u;
        }
        r0 = (u32)rd8(0x80571ac5u);
        wr32(0x80503904u, r30);
        wr32(0x80503908u, 0u);
        wr8(0x805038d9u, 0u);
        wr32(0x8050390cu, 0x4000u);
        if (r0 == 0u) {
            r0 = 0u;
        } else {
            r0 = 1u;
        }
        if (r0 != 0u) {
            wr8(0x80571ac5u, 0u);
            a.r[0] = 0x80507920u;
            a.r[1] = 0x80503920u;
            a.r[2] = 0x4000u;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            wr8(0x805038d8u, 0u);
            a.r[0] = 0x8033dde8u;
            a.r[1] = 0x805038d0u;
            a.r[2] = 0x80274cc0u;
            a.r[3] = 0x80503814u;
            r3 = tc_call(0x80272ca0u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                r5 = 0x80503780u;
                r0 = (u32)rd8(0x805038d9u);
                wr32(0x80503908u, 2u);
                if (r0 != 0u) {
                    wr8(0x805038d8u, 9u);
                    a.r[0] = 0x80503788u;
                    a.r[1] = 0x80274cc0u;
                    a.r[2] = 0x80503814u;
                    r3 = tc_call(0x80271d50u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r5 = 0u;
                    if (r3 == 0u) {
                        return;
                    }
                }
                if (rd32(0x80503908u) != 0u) {
                    wr8(0x80571ac5u, 1u);
                }
                r12 = rd32(0x80503904u);
                if (r12 != 0u) {
                    r3 = rd32(0x80503908u);
                    wr32(0x80503904u, 0u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                    if (rd32(0x80503780u) != 0u) {
                        a.r[0] = 0x80503780u;
                        (void)tc_call(0x802300d0u, &a);
                    }
                }
                wr8(0x80571ab0u, (u8)rd32(0x80503908u));
            }
        } else {
            a.r[0] = r3;
            f1 = tc_callf(0x8022c2d8u, &a);
            r4 = tc_lastr4();
            if (rd32(0x80503908u) != 0u) {
                wr8(0x80571ac5u, 1u);
            }
            r12 = rd32(0x80503904u);
            if (r12 != 0u) {
                r3 = rd32(0x80503908u);
                wr32(0x80503904u, 0u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
                if (rd32(0x80503780u) != 0u) {
                    a.r[0] = 0x80503780u;
                    (void)tc_call(0x802300d0u, &a);
                }
            }
            wr8(0x80571ab0u, (u8)rd32(0x80503908u));
        }
    }
    return;
}
