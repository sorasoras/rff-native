#include "tc_rt.h"

void fn_80165ff8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x1f8u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r30 = 0u;
    if (rd32(param_2 + 0x1468u) == r3) {
        a.r[0] = param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            r30 = 1u;
        }
    }
    if (r30 != 0u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x1d4u), &a);
        a.f[0] = (f64)rdf32(0x80574b98u);
        a.r[0] = param_2;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.r[4] = 3u;
        a.r[5] = 0u;
        f1 = tc_callf(0x800b5248u, &a);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
        wr32(0x817fdfdcu, r3);
        a.r[0] = 0x817fdfdcu;
        f1 = tc_callf(0x8014995cu, &a);
        r4 = rd32(param_2 + 0xf78u);
        wrf32d(param_2 + 0xf7cu, (f64)(f32)((f64)rdf32(0x80574b9cu) * f1));
        wr32(param_2 + 0xf78u, r4 | (r4 ^ 0x4000u));
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
        wr32(0x817fdfd8u, r3);
        a.r[0] = 0x817fdfd8u;
        f1 = tc_callf(0x8014995cu, &a);
        r4 = tc_lastr4();
        r3 = rd32(param_2 + 0xf78u);
        wrf32d(param_2 + 0xd50u, (f64)(f32)((f64)rdf32(0x80574b9cu) * f1));
        wr32(param_2 + 0xf78u, r3 ^ (r3 & 0x10000u));
    }
    a.r[0] = param_2;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x1d4u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == rd32(param_2 + 0x100u) && (rd32(param_2 + 0xe88u) & 0x40u) != 0u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x1c4u), &a);
        a.r[0] = param_2;
        a.r[1] = r3;
        r3 = tc_call(0x800b5210u, &a);
        if (r3 != 0u) {
            return;
        }
        a.r[0] = param_2;
        (void)tc_call(0x800b52b4u, &a);
        r5 = rd32(param_2 + 0xf78u);
        r5 = r5 ^ (r5 & 0x4000u);
        wr32(param_2 + 0xf78u, r5);
        r0 = r5 | (r5 ^ 0x10000u);
        r6 = rd32(0x804890c8u);
        r5 = rd32(0x804890ccu);
        r4 = rd32(0x804890d0u);
        wr32(0x817fdfe0u, r6);
        wr32(0x817fdfe4u, r5);
        f2 = (f64)rdf32(0x817fdfe0u);
        wr32(0x817fdfe8u, r4);
        f1 = (f64)rdf32(0x817fdfe4u);
        f0 = (f64)rdf32(0x817fdfe8u);
        wrf32d(param_2 + 0xd18u, f2);
        wrf32d(param_2 + 0xd1cu, f1);
        wrf32d(param_2 + 0xd20u, f0);
        wr32(param_2 + 0xf78u, r0);
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(param_2) + 0x1c4u), &a);
        a.f[0] = (f64)rdf32(0x80574b98u);
        a.r[0] = param_2;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b5248u, &a);
    } else {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x1d4u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r30 = 0u;
        if (rd32(param_2 + 0x1468u) == r3) {
            a.r[0] = param_2;
            r3 = tc_call(0x800b2fe8u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                r30 = 1u;
            }
        }
        if (r30 != 0u) {
            r4 = rd32(param_2 + 0xf78u);
            wr32(param_2 + 0xf78u, r4 ^ (r4 & 0x4000u));
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_2) + 0x1c4u), &a);
            a.r[0] = param_2;
            a.r[1] = r3;
            r3 = tc_call(0x800b5210u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 0u) {
                a.r[0] = param_2;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_2) + 0x1fcu), &a);
                a.f[0] = (f64)rdf32(0x80574b98u);
                a.r[0] = param_2;
                a.r[1] = r3;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                f1 = tc_callf(0x800b5248u, &a);
                r4 = tc_lastr4();
            }
            r3 = rd32(param_2 + 0xf78u);
            wrf32d(param_2 + 0xfdcu, (f64)rdf32(0x80574ba0u));
            wr32(param_2 + 0xf78u, r3 | (r3 ^ 0x80000u));
        }
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x1fcu), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r30 = 0u;
        if (rd32(param_2 + 0x1468u) == r3) {
            a.r[0] = param_2;
            r3 = tc_call(0x800b2fe8u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                r30 = 1u;
            }
        }
        if (r30 != 0u) {
            r3 = rd32(param_2 + 0xe88u);
            wr32(param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        }
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x1c4u), &a);
        r30 = 0u;
        if (rd32(param_2 + 0x1468u) == r3) {
            a.r[0] = param_2;
            r3 = tc_call(0x800b2fe8u, &a);
            if (r3 != 0u) {
                r30 = 1u;
            }
        }
        if (r30 != 0u) {
            r3 = rd32(param_2 + 0xe88u);
            wr32(param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        }
    }
    return;
}
