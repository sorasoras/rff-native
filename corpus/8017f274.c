#include "tc_rt.h"

void fn_8017f274(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    f1 = (f64)rdf32(0x80575058u);
    wr32(0x817fe004u, 0x817ff000u);
    f0 = (f64)rdf32(0x80575048u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    f1 = (f64)(f32)((f64)rdf32(param_1 + 0x88u) - f1);
    wrf32d(param_1 + 0x88u, f1);
    if (f1 < f0) {
        if (rd32(0x805706e0u) == 4u && rd32(rd32(0x8057110cu) + 0xcu) == 0xdu) {
            a.r[0] = param_1;
            r3 = tc_call(0x8017f628u, &a);
            if (r3 != 0u) {
                return;
            }
        }
        r3 = tc_call(0x80040b64u, &a);
        f1 = tc_lastf();
        r30 = 0u;
        r4 = ppc_mulhwu(0x446f8657u, r3);
        r31 = r3 - (((((((r3 - r4) >> 1u) & 0x7fffffffu) + r4) >> 6u) & 0x3ffffffu) * 0x65u);
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        f1 = tc_lastf();
        r28 = r3;
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = 0x80480000u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfe4u, rd32(r3));
        wr32(0x817fdfe8u, r0);
        wr32(0x817fdfecu, rd32(r3 + 8u));
        a.r[0] = 0x817fdfe4u;
        a.r[1] = r28;
        a.r[2] = 0x817fdfe4u;
        (void)tc_call(0x802343a4u, &a);
        wrf32d(0x817fdfe8u, (f64)rdf32(0x80575048u));
        a.r[0] = 0x817fdfe4u;
        f1 = tc_callf(0x80234428u, &a);
        r4 = tc_lastr4();
        if (f1 > (f64)rdf32(0x80575094u)) {
            r30 = 1u;
            a.r[0] = param_1;
            f1 = tc_callf(0x8017fafcu, &a);
            r4 = tc_lastr4();
        }
        if (r30 == 0u) {
            r3 = rd32(param_1 + 0xb0u);
            if (r3 != 0u && rd32(r3 + 0x260u) != 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                f1 = tc_lastf();
                r28 = r3;
                r3 = rd32(param_1 + 0xb0u);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfd8u, rd32(r3));
                wr32(0x817fdfdcu, r0);
                wr32(0x817fdfe0u, rd32(r3 + 8u));
                a.r[0] = 0x817fdfd8u;
                a.r[1] = r28;
                a.r[2] = 0x817fdfd8u;
                (void)tc_call(0x802343a4u, &a);
                wrf32d(0x817fdfdcu, (f64)rdf32(0x80575048u));
                a.r[0] = 0x817fdfd8u;
                f1 = tc_callf(0x80234428u, &a);
                f0 = (f64)rdf32(0x80575098u);
                if ((f1 < f0) || (f1 == f0)) {
                    r30 = 1u;
                    if (rd32(param_1 + 0x84u) != 1u) {
                        if (r31 < 0x1eu) {
                            f1 = (f64)rdf32(0x8057509cu);
                            f0 = (f64)rdf32(0x80575048u);
                            wrf32d(0x817fdfd4u, f0);
                            wrf32d(0x817fdfd0u, f0);
                            wrf32d(0x817fdfccu, f0);
                            a.f[0] = f1;
                            a.f[1] = f1;
                            a.r[0] = 0x817fdfccu;
                            f1 = tc_callf(0x80079000u, &a);
                            r3 = rd32(param_1 + 0xb0u);
                            a.r[0] = r3;
                            a.r[1] = tc_lastr4();
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                            r6 = rd32(0x817fdfd0u);
                            r0 = rd32(0x817fdfd4u);
                            wr32(0x817fdfc0u, rd32(0x817fdfccu));
                            wr32(0x817fdfc4u, r6);
                            wr32(0x817fdfc8u, r0);
                            a.r[0] = 0x817fdfc0u;
                            a.r[1] = r3;
                            a.r[2] = 0x817fdfc0u;
                            (void)tc_call(0x80234380u, &a);
                            f1 = (f64)rdf32(0x817fdfc4u);
                            f0 = (f64)rdf32(0x817fdfc8u);
                            wrf32d(0x817fdfccu, (f64)rdf32(0x817fdfc0u));
                            wrf32d(0x817fdfd0u, f1);
                            wrf32d(0x817fdfd4u, f0);
                            wrf32d(0x817fdfd0u, (f64)rdf32(param_1 + 0x94u));
                            a.r[0] = param_1;
                            a.r[1] = 0x817fdfccu;
                            (void)tc_call(0x8017f924u, &a);
                        }
                    } else if (r31 < 0x28u) {
                        a.r[0] = param_1;
                        a.r[1] = param_1 + 0x90u;
                        a.r[2] = 0u;
                        (void)tc_call(0x8017fb4cu, &a);
                    }
                }
            }
        }
        if ((u32)(s8)rd8(0x80571328u) == 0u) {
            f1 = (f64)rdf32(0x80575048u);
            f0 = (f64)rdf32(0x805750a0u);
            wrf32d(0x804d9018u, f1);
            wrf32d(0x804d901cu, f0);
            wrf32d(0x804d9020u, f1);
            wr8(0x80571328u, 1u);
        }
        if (r30 == 0u) {
            if (rd32(param_1 + 0x84u) != 1u) {
                if ((u32)((s32)((rd32(param_1 + 0xacu) << 2u) & 0xc0000000u) >> 31) == 0u) {
                    if (r31 >= 0x1eu || (s32)rd32(0x804d9000u) >= 10) {
                        a.r[0] = param_1;
                        (void)tc_call(0x8017fafcu, &a);
                    } else {
                        r0 = rd32(param_1 + 0x94u);
                        wr32(0x817fdfa8u, rd32(param_1 + 0x90u));
                        wr32(0x817fdfacu, r0);
                        wr32(0x817fdfb0u, rd32(param_1 + 0x98u));
                        a.r[0] = 0x817fdfa8u;
                        a.r[1] = 0x804d9018u;
                        a.r[2] = 0x817fdfa8u;
                        (void)tc_call(0x80234380u, &a);
                        a.r[0] = param_1;
                        a.r[1] = 0x817fdfa8u;
                        a.r[2] = 1u;
                        (void)tc_call(0x8017fb4cu, &a);
                    }
                } else if (r31 >= 0x28u) {
                    a.r[0] = param_1;
                    (void)tc_call(0x8017fafcu, &a);
                } else {
                    r0 = rd32(param_1 + 0x94u);
                    wr32(0x817fdfb4u, rd32(param_1 + 0x90u));
                    wr32(0x817fdfb8u, r0);
                    wr32(0x817fdfbcu, rd32(param_1 + 0x98u));
                    a.r[0] = 0x817fdfb4u;
                    a.r[1] = 0x804d9018u;
                    a.r[2] = 0x817fdfb4u;
                    (void)tc_call(0x80234380u, &a);
                    a.r[0] = param_1;
                    a.r[1] = 0x817fdfb4u;
                    a.r[2] = 1u;
                    (void)tc_call(0x8017fb4cu, &a);
                }
            } else if (r31 >= 0x1eu) {
                a.r[0] = param_1;
                (void)tc_call(0x8017fafcu, &a);
            } else {
                a.r[0] = param_1;
                a.r[1] = param_1 + 0x90u;
                a.r[2] = 0u;
                (void)tc_call(0x8017fb4cu, &a);
            }
        }
    }
    return;
}
