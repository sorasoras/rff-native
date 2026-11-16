#include "tc_rt.h"

void fn_801ea504(u32 param_r3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r18 = 0, r19 = 0, r20 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x805713c8u);
    f2 = (f64)rdf32(0x80576378u);
    f0 = (f64)rdf32(param_r3 + 0x84u);
    f3 = ppc_fmadds((f64)rdf32(param_r3 + 0x88u), f2, f1);
    wrf32d(param_r3 + 0x3cu, f1);
    f0 = ppc_fmadds(f0, f2, f1);
    wrf32d(param_r3 + 0x40u, f1);
    wrf32d(param_r3 + 0x44u, f0);
    wrf32d(param_r3 + 0x48u, f3);
    a.r[0] = param_r3;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_r3 + 0x28u, 1u);
    r3 = tc_call(0x80059e38u, &a);
    if (r3 != 0u) {
        wrf32d(0x805713c8u, (f64)(f32)((f64)rdf32(0x805713c8u) + rdf64(0x80576408u)));
    }
    a.r[0] = param_r3 + 0x94u;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_r3 + 0xbcu, 1u);
    a.r[0] = param_r3 + 0x128u;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_r3 + 0x150u, 1u);
    a.r[0] = param_r3 + 0x254u;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_r3 + 0x27cu, 1u);
    a.r[0] = param_r3 + 0x1200u;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_r3 + 0x1228u, 1u);
    r27 = param_r3;
    r28 = param_r3 + 0x41cu;
    r26 = param_r3 + 0x544u;
    r25 = param_r3 + 0x5d8u;
    r24 = param_r3 + 0x66cu;
    r23 = param_r3 + 0x700u;
    r22 = 0u;
    do {
        a.r[0] = r28;
        (void)tc_call(0x8005250cu, &a);
        wr32(r27 + 0x444u, 1u);
        a.r[0] = r26;
        (void)tc_call(0x8005250cu, &a);
        wr32(r27 + 0x56cu, 1u);
        if ((u32)rd8(param_r3 + 0x15a5u) == 2u) {
            r0 = (u32)rd8(param_r3 + 0x159cu);
            if (r0 < 9u) {
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)rd8(((r0 << 2u) & 0x3fcu) + (r22 + param_r3) + 0x1578u)) >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                a.r[0] = param_r3;
                a.r[1] = r25;
                a.r[2] = (u32)(s8)r0;
                (void)tc_call(0x801eb2d8u, &a);
                r6 = (u32)rd8((((u32)rd8(param_r3 + 0x159cu) << 2u) & 0xfffffffcu) + (r22 + param_r3) + 0x1578u);
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)r6) >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                r0 = r0 * 0x64u;
                r0 = r6 - r0;
                r0 = ppc_mulhw(1717986919, (s32)r0);
                r0 = (u32)((s32)r0 >> 2);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                a.r[0] = param_r3;
                a.r[1] = r24;
                a.r[2] = (u32)(s8)r0;
                (void)tc_call(0x801eb2d8u, &a);
                r6 = (u32)rd8((((u32)rd8(param_r3 + 0x159cu) << 2u) & 0xfffffffcu) + (r22 + param_r3) + 0x1578u);
                r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r6) >> 2);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                r0 = r0 * 0xau;
                r0 = r6 - r0;
                a.r[0] = param_r3;
                a.r[1] = r23;
                a.r[2] = (u32)(s8)r0;
                (void)tc_call(0x801eb2d8u, &a);
                r20 = r25;
                r19 = r27;
                r18 = 0u;
                do {
                    a.r[0] = r20;
                    (void)tc_call(0x8005250cu, &a);
                    r18 = r18 + 1u;
                    wr32(r19 + 0x600u, 1u);
                    r20 = r20 + 0x94u;
                    r19 = r19 + 0x94u;
                } while ((s32)r18 < 3);
            }
        }
        r22 = r22 + 1u;
        r27 = r27 + 0x378u;
        r26 = r26 + 0x378u;
        r25 = r25 + 0x378u;
        r24 = r24 + 0x378u;
        r23 = r23 + 0x378u;
        r28 = r28 + 0x378u;
    } while ((s32)r22 < 4);
    if ((u32)rd8(param_r3 + 0x15a5u) == 2u && (u32)rd8(param_r3 + 0x159cu) < 9u) {
        a.r[0] = param_r3 + 0x1294u;
        (void)tc_call(0x8005250cu, &a);
        wr32(param_r3 + 0x12bcu, 1u);
        a.r[0] = param_r3 + 0x1328u;
        (void)tc_call(0x8005250cu, &a);
        wr32(param_r3 + 0x1350u, 1u);
        a.r[0] = param_r3 + 0x13bcu;
        (void)tc_call(0x8005250cu, &a);
        wr32(param_r3 + 0x13e4u, 1u);
        a.r[0] = param_r3 + 0x1450u;
        (void)tc_call(0x8005250cu, &a);
        wr32(param_r3 + 0x1478u, 1u);
        a.r[0] = param_r3 + 0x14e4u;
        (void)tc_call(0x8005250cu, &a);
        wr32(param_r3 + 0x150cu, 1u);
    }
    r4 = (u32)rd8(param_r3 + 0x159cu);
    do {
        if (r4 >= 9u) {
            f0 = (f64)rdf32(0x80576348u);
            wrf32d(param_r3 + 0x32cu, f0);
            wrf32d(param_r3 + 0x330u, f0);
            wrf32d(param_r3 + 0x334u, f0);
            wrf32d(param_r3 + 0x338u, f0);
        } else {
            a.r[0] = 0x80475e24u;
            a.r[1] = r4;
            r3 = tc_call(0x8017c270u, &a);
            c0lt = (s32)r3 < 2;
            if (r3 == 2u) {
                f2 = (f64)rdf32(0x80576348u);
                f1 = (f64)rdf32(0x80576410u);
                f0 = (f64)rdf32(0x805763a8u);
                wrf32d(param_r3 + 0x32cu, (f64)rdf32(0x80576360u));
                wrf32d(param_r3 + 0x330u, f2);
                wrf32d(param_r3 + 0x334u, f1);
                wrf32d(param_r3 + 0x338u, f0);
            } else {
                if (!c0lt) {
                    if ((s32)r3 < 4) {
                        f2 = (f64)rdf32(0x80576348u);
                        f1 = (f64)rdf32(0x80576360u);
                        f0 = (f64)rdf32(0x805763a8u);
                        wrf32d(param_r3 + 0x32cu, (f64)rdf32(0x805763a4u));
                        wrf32d(param_r3 + 0x330u, f2);
                        wrf32d(param_r3 + 0x334u, f1);
                        wrf32d(param_r3 + 0x338u, f0);
                        break;
                    }
                } else {
                    c0lt = (s32)r3 < 0;
                    if (r3 == 0u) {
                        f2 = (f64)rdf32(0x80576348u);
                        f1 = (f64)rdf32(0x805763a4u);
                        f0 = (f64)rdf32(0x805763a8u);
                        wrf32d(param_r3 + 0x32cu, f2);
                        wrf32d(param_r3 + 0x330u, f2);
                        wrf32d(param_r3 + 0x334u, f1);
                        wrf32d(param_r3 + 0x338u, f0);
                        break;
                    }
                    if (!c0lt) {
                        f0 = (f64)rdf32(0x805763a8u);
                        f1 = (f64)rdf32(0x80576348u);
                        wrf32d(param_r3 + 0x32cu, (f64)rdf32(0x80576410u));
                        wrf32d(param_r3 + 0x330u, f1);
                        wrf32d(param_r3 + 0x334u, f0);
                        wrf32d(param_r3 + 0x338u, f0);
                        break;
                    }
                }
                f0 = (f64)rdf32(0x80576348u);
                wrf32d(param_r3 + 0x32cu, f0);
                wrf32d(param_r3 + 0x330u, f0);
                wrf32d(param_r3 + 0x334u, f0);
                wrf32d(param_r3 + 0x338u, f0);
            }
        }
    } while (0);
    a.r[0] = param_r3 + 0x2f0u;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_r3 + 0x318u, 1u);
    a.r[0] = param_r3 + 0x384u;
    (void)tc_call(0x8005250cu, &a);
    r0 = (u32)rd8(param_r3 + 0x159cu);
    r18 = 0u;
    wr32(param_r3 + 0x3acu, 1u);
    if (r0 != 0xfu) {
        a.r[0] = param_r3;
        r3 = tc_call(0x801eacf8u, &a);
        a.r[0] = 0x15u;
        a.r[1] = (u32)(s8)r3 + 0x1cu;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        r18 = r3;
    }
    if (r18 != 0u && (u32)rd8(param_r3 + 0x15a5u) == 2u) {
        a.r[0] = r18;
        r3 = tc_call(0x8025e7a4u, &a);
        if (r3 >= 9u) {
            f2 = (f64)rdf32(0x80576418u);
        } else {
            f2 = (f64)rdf32(0x80576414u);
        }
        a.f[0] = (f64)rdf32(0x8057641cu);
        a.f[1] = f2;
        a.f[2] = (f64)rdf32(0x80576358u);
        a.f[3] = (f64)rdf32(0x80576420u);
        a.r[0] = r18;
        a.r[1] = 0u;
        (void)tc_call(0x80052a08u, &a);
    }
    a.r[0] = param_r3 + 0x1bcu;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_r3 + 0x1e4u, 1u);
    return;
}
