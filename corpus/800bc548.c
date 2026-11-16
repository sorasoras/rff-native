#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_800bc548(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r25 = 0, r26 = 0, r27 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x573u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r30 = r3;
    a.r[0] = r3;
    r3 = tc_call(0x80045be0u, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x8004bf2cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    wr32(param_r3 + 0x1354u, r3);
    r27 = param_r3;
    r26 = param_r3 + 0x12e0u;
    r25 = 0u;
    do {
        a.r[0] = r26;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        f1 = tc_callf(rd32(rd32(r26) + 0xcu), &a);
        r4 = tc_lastr4();
        wr32(r27 + 0x133cu, 1u);
        r3 = rd32(param_r3 + 0x1354u);
        wr32(r27 + 0x12f8u, r3);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x8004c630u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if ((s32)r3 > (s32)r25) {
                wr32(r27 + 0x12fcu, r25);
            }
        }
        r25 = r25 + 1u;
        wr32(r27 + 0x1308u, 0u);
        r26 = r26 + 0x90u;
        r27 = r27 + 0x90u;
    } while ((s32)r25 < 2);
    f3 = (f64)rdf32(0x80572cb0u);
    a.r[0] = param_r3 + 0x12e0u;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = (f64)rdf32(0x80572ce4u);
    a.f[1] = (f64)rdf32(0x80572de4u);
    a.f[2] = f3;
    a.f[3] = f3;
    (void)tc_call(rd32(rd32(param_r3 + 0x12e0u) + 0x1cu), &a);
    a.r[0] = param_r3 + 0x1370u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = (f64)rdf32(0x80572ce4u);
    a.f[1] = (f64)rdf32(0x80572de8u);
    a.f[2] = (f64)rdf32(0x80572cb0u);
    a.f[3] = (f64)rdf32(0x80572decu);
    (void)tc_call(rd32(rd32(param_r3 + 0x1370u) + 0x1cu), &a);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r30;
            (void)tc_call(0x80094ec0u, &a);
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
    }
    r8 = 0x68u;
    f0 = (f64)rdf32(0x80572c98u);
    r7 = 0xd0u;
    wrf32d(param_r3 + 0x1364u, (f64)rdf32(param_r3 + 0x12f4u));
    r6 = 0xf0u;
    r5 = 0xffu;
    r4 = 8u;
    f26 = rdf64(0x80572d08u);
    wrf32d(param_r3 + 0x1368u, (f64)rdf32(param_r3 + 0x12f0u));
    r27 = param_r3;
    f27 = (f64)rdf32(0x80572df4u);
    r26 = param_r3 + 0x1400u;
    r25 = 0u;
    f28 = (f64)rdf32(0x80572df0u);
    wrf32d(param_r3 + 0x1358u, (f64)rdf32(param_r3 + 0x12e4u));
    f29 = (f64)rdf32(0x80572df8u);
    f30 = (f64)rdf32(0x80572ce4u);
    wrf32d(param_r3 + 0x135cu, (f64)rdf32(param_r3 + 0x12e8u));
    f31 = (f64)rdf32(0x80572dc0u);
    wrf32d(param_r3 + 0x136cu, f0);
    wrf32d(param_r3 + 0x13f4u, (f64)rdf32(param_r3 + 0x1384u));
    wrf32d(param_r3 + 0x13f8u, (f64)rdf32(param_r3 + 0x1380u));
    wrf32d(param_r3 + 0x13e8u, (f64)rdf32(param_r3 + 0x1374u));
    f1 = (f64)rdf32(param_r3 + 0x1378u);
    wrf32d(param_r3 + 0x13ecu, f1);
    wrf32d(param_r3 + 0x13fcu, f0);
    wr8(param_r3 + 0x13bcu, 0x68u);
    wr8(param_r3 + 0x13bdu, 0xd0u);
    wr8(param_r3 + 0x13beu, 0xf0u);
    wr8(param_r3 + 0x13bfu, 0xffu);
    wr8(param_r3 + 0x13c0u, 0x68u);
    wr8(param_r3 + 0x13c1u, 0xd0u);
    wr8(param_r3 + 0x13c2u, 0xf0u);
    wr8(param_r3 + 0x13c3u, 0xffu);
    wr8(param_r3 + 0x13c4u, 8u);
    wr8(param_r3 + 0x13c5u, 0x78u);
    wr8(param_r3 + 0x13c6u, 0xccu);
    wr8(param_r3 + 0x13c7u, 0xffu);
    wr8(param_r3 + 0x13c8u, 8u);
    wr8(param_r3 + 0x13c9u, 0x78u);
    wr8(param_r3 + 0x13cau, 0xccu);
    wr8(param_r3 + 0x13cbu, 0xffu);
    do {
        wrf32d(r27 + 0x1478u, ppc_fmadds(f27, (f64)(f32)(px_b2f((u64)(r25 ^ 0x80000000u) | 0x4330000000000000ull) - f26), f28));
        wrf32d(r27 + 0x147cu, f29);
        wrf32d(r27 + 0x1484u, f27);
        wrf32d(r27 + 0x1488u, f30);
        a.r[0] = r26;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        (void)tc_call(rd32(rd32(r26) + 0xcu), &a);
        wr32(r27 + 0x145cu, 1u);
        a.r[0] = r26;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = (f64)rdf32(r27 + 0x1478u);
        a.f[1] = (f64)rdf32(r27 + 0x147cu);
        a.f[2] = (f64)rdf32(r27 + 0x1484u);
        a.f[3] = (f64)rdf32(r27 + 0x1488u);
        f1 = tc_callf(rd32(rd32(r26) + 0x1cu), &a);
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r25 = r25 + 1u;
        r26 = r26 + 0x90u;
        wr32(r27 + 0x1418u, rd32(param_r3 + 0x788u));
        wrf32d(r27 + 0x140cu, f31);
        wr32(r27 + 0x1428u, 0u);
        r27 = r27 + 0x90u;
    } while ((s32)r25 < 2);
    return;
}
