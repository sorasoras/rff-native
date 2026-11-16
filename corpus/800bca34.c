#include "tc_rt.h"

void fn_800bca34(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x1520u, param_2);
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
    a.r[1] = 0x575u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r27 = r3;
    a.r[0] = r3;
    r3 = tc_call(0x80045be0u, &a);
    wr32((u32)param_1 + 0x16bcu, 0xffffffffu);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x8004bf2cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    wr32((u32)param_1 + 0x16bcu, r3);
    r29 = (u32)param_1;
    f28 = (f64)rdf32(0x80572d2cu);
    r28 = (u32)param_1 + 0x1524u;
    f29 = (f64)rdf32(0x80572cc0u);
    r26 = 0u;
    f30 = (f64)rdf32(0x80572e14u);
    f31 = (f64)rdf32(0x80572c98u);
    do {
        wr32(r29 + 0x1598u, 0xffffffffu);
        a.r[0] = r28;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        (void)tc_call(rd32(rd32(r28) + 0xcu), &a);
        wrf32d(r29 + 0x15a8u, f28);
        f2 = (f64)rdf32(0x80572e18u);
        wrf32d(r29 + 0x15acu, f29);
        f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 8u) * f28);
        a.r[0] = r28;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = ppc_fnmsubs(f3, f30, f28);
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f29;
        f1 = tc_callf(rd32(rd32(r28) + 0x1cu), &a);
        r4 = tc_lastr4();
        r26 = r26 + 1u;
        r28 = r28 + 0x90u;
        wr32(r29 + 0x153cu, rd32((u32)param_1 + 0x16bcu));
        wr32(r29 + 0x154cu, 0u);
        wrf32d(r29 + 0x159cu, (f64)rdf32(r29 + 0x1528u));
        wrf32d(r29 + 0x15a0u, (f64)rdf32(r29 + 0x152cu));
        wrf32d(r29 + 0x15b0u, f31);
        r29 = r29 + 0x90u;
    } while ((s32)r26 < 2);
    r3 = rd32((u32)param_1 + 0x153cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if ((s32)r3 > 2) {
            wr32((u32)param_1 + 0x1540u, 2u);
        }
    }
    r3 = rd32((u32)param_1 + 0x15ccu);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if ((s32)r3 > 1) {
            wr32((u32)param_1 + 0x15d0u, 1u);
        }
    }
    a.r[0] = (u32)param_1 + 0x1648u;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x1648u) + 0xcu), &a);
    f4 = (f64)rdf32(0x80572d00u);
    f2 = (f64)rdf32(0x80572cb0u);
    wrf32d((u32)param_1 + 0x16d0u, f4);
    f0 = (f64)rdf32((u32)param_1 + 8u);
    wrf32d((u32)param_1 + 0x16ccu, f2);
    a.r[0] = (u32)param_1 + 0x1648u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = (f64)rdf32((u32)param_1 + 0x159cu);
    a.f[1] = (f64)(f32)((f64)rdf32(0x80572e1cu) + (f64)rdf32((u32)param_1 + 0x15a0u));
    a.f[2] = (f64)(f32)(f2 * f0);
    a.f[3] = f4;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x1648u) + 0x1cu), &a);
    r3 = rd32((u32)param_1 + 0x16bcu);
    wr32((u32)param_1 + 0x1660u, r3);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        if ((s32)r3 > 0) {
            wr32((u32)param_1 + 0x1664u, 0u);
        }
    }
    f2 = (f64)rdf32((u32)param_1 + 0x164cu);
    f1 = (f64)rdf32((u32)param_1 + 0x1650u);
    f0 = (f64)rdf32(0x80572c98u);
    wr32((u32)param_1 + 0x1670u, 0u);
    wrf32d((u32)param_1 + 0x16c0u, f2);
    wrf32d((u32)param_1 + 0x16c4u, f1);
    wrf32d((u32)param_1 + 0x16d4u, f0);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r27;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r27;
            (void)tc_call(0x80094ec0u, &a);
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r27;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
    }
    wrf32d((u32)param_1 + 0x1644u, (f64)rdf32((u32)param_1 + 0x1638u));
    return;
}
