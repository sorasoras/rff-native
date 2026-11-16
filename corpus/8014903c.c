#include "tc_rt.h"

void fn_8014903c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (rd32(param_1 + 0x120u) == 3u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x800dad50u, &a);
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = rd32(param_1 + 0x140u);
            r3 = tc_call(0x800da8b8u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            if (r3 != 0u) {
                r6 = rd32(param_1 + 0x144u);
                if ((s32)r6 > 0) {
                    r4 = rd32(param_2 + 0x2cu);
                    r3 = 0u;
                    if (r4 != 0u && rd32(r4 + 0xb8u) == 0u) {
                        r4 = r4 + 0x54cu;
                        if (r4 != 0u) {
                            r5 = rd32(r4 + 0x74u);
                            r4 = ((r5 - 0x1f8u) * 0x14u) - 0x7fb60e50u;
                            if ((s32)rd8(r4 + 0x61fu) >= (s32)r6) {
                                r3 = 1u;
                            }
                        }
                    }
                }
            }
            if (r3 == 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfd4u, rd32(r3));
                wr32(0x817fdfd8u, r0);
                wr32(0x817fdfdcu, rd32(r3 + 8u));
                if (param_3 != 0u) {
                    wrf32d(0x817fdfd4u, (f64)rdf32(param_3));
                    wrf32d(0x817fdfd8u, (f64)rdf32(param_3 + 4u));
                    wrf32d(0x817fdfdcu, (f64)rdf32(param_3 + 8u));
                }
                r4 = rd32(param_1 + 0x780u);
                r27 = 1u;
                if (r4 != 0xffffffffu && (s32)rd32(param_1 + 0x784u) <= 0) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = r4;
                    (void)tc_call(0x8010a74cu, &a);
                    r27 = 0u;
                    wr32(param_1 + 0x784u, rd32(param_1 + 0x788u));
                }
                r3 = rd32(param_1 + 0x794u);
                if (r3 != 0xffffffffu) {
                    a.f[0] = (f64)rdf32(0x80574684u);
                    a.r[0] = r3;
                    a.r[1] = 0x817fdfd4u;
                    a.r[2] = param_1 + 0x7b0u;
                    a.r[3] = 0x804b15c0u;
                    r3 = tc_call(0x800d782cu, &a);
                    r28 = r3;
                    if (r3 != 0u) {
                        a.r[1] = 0xffffffffu;
                        r3 = tc_call(0x8010b43cu, &a);
                        wr32(r28 + 0x20u, r3);
                        wr32(r28 + 0x24u, 0u);
                    }
                }
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = 0u;
                a.r[4] = r27;
                (void)tc_call(0x800dab98u, &a);
            } else {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                f1 = tc_lastf();
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfc8u, rd32(r3));
                wr32(0x817fdfccu, r0);
                wr32(0x817fdfd0u, rd32(r3 + 8u));
                if (param_3 != 0u) {
                    wrf32d(0x817fdfc8u, (f64)rdf32(param_3));
                    wrf32d(0x817fdfccu, (f64)rdf32(param_3 + 4u));
                    wrf32d(0x817fdfd0u, (f64)rdf32(param_3 + 8u));
                }
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_1) + 0xd4u), &a);
                if (r3 != 0u) {
                    r4 = rd32(param_1 + 0x77cu);
                    if (r4 != 0xffffffffu) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = r4;
                        (void)tc_call(0x8010a74cu, &a);
                    }
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    a.r[3] = 1u;
                    a.r[4] = (ppc_cntlzw(rd32(param_1 + 0x77cu) + 1u) >> 5u) & 0x7ffffffu;
                    f1 = tc_callf(0x800dab98u, &a);
                    r4 = tc_lastr4();
                    if (rd32(param_1 + 0x790u) != 0xffffffffu) {
                        if (rd32(param_1 + 0x7c0u) != 0u) {
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                            wrf32d(0x817fdfc8u, (f64)rdf32(r3));
                            wrf32d(0x817fdfccu, (f64)rdf32(r3 + 4u));
                            wrf32d(0x817fdfd0u, (f64)rdf32(r3 + 8u));
                        }
                        a.f[0] = (f64)rdf32(param_1 + 0x7bcu);
                        a.r[0] = rd32(param_1 + 0x790u);
                        a.r[1] = 0x817fdfc8u;
                        a.r[2] = param_1 + 0x7a4u;
                        a.r[3] = 0x804b15c0u;
                        r3 = tc_call(0x800d782cu, &a);
                        r30 = r3;
                        if (r3 != 0u) {
                            a.r[1] = 0xffffffffu;
                            r3 = tc_call(0x8010b43cu, &a);
                            wr32(r30 + 0x20u, r3);
                            wr32(r30 + 0x24u, 0u);
                        }
                    }
                    wr32(param_1 + 0x120u, 4u);
                } else {
                    r4 = rd32(param_1 + 0x778u);
                    if (r4 != 0xffffffffu) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = r4;
                        (void)tc_call(0x8010a74cu, &a);
                    }
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    a.r[3] = 1u;
                    a.r[4] = (ppc_cntlzw(rd32(param_1 + 0x778u) + 1u) >> 5u) & 0x7ffffffu;
                    (void)tc_call(0x800dab98u, &a);
                    r3 = rd32(param_1 + 0x78cu);
                    if (r3 != 0xffffffffu) {
                        a.f[0] = (f64)rdf32(0x80574684u);
                        a.r[0] = r3;
                        a.r[1] = 0x817fdfc8u;
                        a.r[2] = param_1 + 0x798u;
                        a.r[3] = 0x804b15c0u;
                        r3 = tc_call(0x800d782cu, &a);
                        r29 = r3;
                        if (r3 != 0u) {
                            a.r[1] = 0xffffffffu;
                            r3 = tc_call(0x8010b43cu, &a);
                            wr32(r29 + 0x20u, r3);
                            wr32(r29 + 0x24u, 0u);
                        }
                    }
                }
            }
        }
    }
    return;
}
