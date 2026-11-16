#include "tc_rt.h"

void fn_8024ce60(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdd20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr16(0xcc00500au, (u16)(((u32)rd16(0xcc00500au) & 0xffffffd7u) | 0x80u));
    a.r[0] = 0x817fdd28u;
    (void)tc_call(0x80228148u, &a);
    a.r[0] = 0x817fdd28u;
    (void)tc_call(0x80227f20u, &a);
    do {
        r3 = tc_call(0x8024cba4u, &a);
    } while (r3 == 0u);
    r3 = tc_call(0x8024cbb4u, &a);
    f1 = tc_lastf();
    r5 = rd32(0x8057194cu);
    if ((rd32(r5 + 8u) & 2u) != 0u && (r3 + 0x232f0000u) == 2u) {
        r3 = 0xdcd10003u;
    }
    c0lt = (s32)r3 < -590282750;
    do {
        if (r3 == 0xdcd10002u) {
            if (rd32(0x80571938u) == 0u) {
                if (rd32(r5 + 0x38u) != 0u) {
                    a.r[0] = 0xcdd10001u;
                    (void)tc_call(0x8024cbc8u, &a);
                    do {
                        r3 = tc_call(0x8024cb94u, &a);
                    } while (r3 != 0u);
                    r3 = rd32(0x8057194cu);
                    a.r[0] = r3;
                    a.r[1] = rd32(r3 + 0x38u);
                    (void)tc_call(0x8024d294u, &a);
                    wr32(rd32(0x8057194cu), 2u);
                    wr32(0x8057194cu, rd32(rd32(0x8057194cu) + 0x38u));
                } else if (r5 != rd32(0x80571948u)) {
                    a.r[0] = 0xcdd10001u;
                    (void)tc_call(0x8024cbc8u, &a);
                    do {
                        r3 = tc_call(0x8024cb94u, &a);
                    } while (r3 != 0u);
                    a.r[0] = rd32(0x8057194cu);
                    a.r[1] = rd32(0x80571948u);
                    (void)tc_call(0x8024d294u, &a);
                    wr32(rd32(0x8057194cu), 2u);
                    wr32(0x8057194cu, rd32(0x80571948u));
                } else {
                    a.r[0] = 0xcdd10003u;
                    (void)tc_call(0x8024cbc8u, &a);
                    do {
                        r3 = tc_call(0x8024cb94u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } while (r3 != 0u);
                    r3 = rd32(0x8057194cu);
                    r12 = rd32(r3 + 0x2cu);
                    if (r12 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                    }
                }
            } else if (r5 != rd32(0x8057193cu)) {
                a.r[0] = 0xcdd10001u;
                (void)tc_call(0x8024cbc8u, &a);
                do {
                    r3 = tc_call(0x8024cb94u, &a);
                } while (r3 != 0u);
                a.r[0] = rd32(0x8057194cu);
                a.r[1] = rd32(0x8057193cu);
                (void)tc_call(0x8024d294u, &a);
                wr32(rd32(0x8057194cu), 2u);
                r3 = rd32(0x8057193cu);
                wr32(0x80571938u, 0u);
                wr32(0x8057194cu, r3);
                wr32(0x8057193cu, 0u);
            } else {
                a.r[0] = 0xcdd10003u;
                (void)tc_call(0x8024cbc8u, &a);
                do {
                    r3 = tc_call(0x8024cb94u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                } while (r3 != 0u);
                r3 = rd32(0x8057194cu);
                wr32(0x8057193cu, 0u);
                wr32(0x80571938u, 0u);
                r12 = rd32(r3 + 0x2cu);
                if (r12 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                }
            }
        } else if (!c0lt) {
            c0lt = (s32)r3 < -590282748;
            if (r3 == 0xdcd10004u) {
                r12 = rd32(r5 + 0x34u);
                if (r12 != 0u) {
                    a.r[0] = r5;
                    a.r[1] = 0xdcd10000u;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                }
            } else if (c0lt) {
                if (rd32(0x80571938u) != 0u) {
                    if (r5 != rd32(0x8057193cu)) {
                        r12 = rd32(r5 + 0x30u);
                        if (r12 != 0u) {
                            a.r[0] = r5;
                            a.r[1] = 0xdcd10000u;
                            a.r[2] = r5;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(r12, &a);
                        }
                        a.r[0] = 0xcdd10001u;
                        (void)tc_call(0x8024cbc8u, &a);
                        do {
                            r3 = tc_call(0x8024cb94u, &a);
                        } while (r3 != 0u);
                        a.r[0] = 0u;
                        a.r[1] = rd32(0x8057193cu);
                        (void)tc_call(0x8024d294u, &a);
                        a.r[0] = rd32(0x8057194cu);
                        (void)tc_call(0x8024d660u, &a);
                        r3 = rd32(0x8057193cu);
                        wr32(0x80571938u, 0u);
                        wr32(0x8057194cu, r3);
                        wr32(0x8057193cu, 0u);
                        break;
                    }
                    wr32(0x8057193cu, 0u);
                    wr32(0x80571938u, 0u);
                }
                if (rd32(r5 + 0x38u) != 0u) {
                    r12 = rd32(r5 + 0x30u);
                    if (r12 != 0u) {
                        a.r[0] = r5;
                        a.r[1] = 0xdcd10000u;
                        a.r[2] = r5;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                    }
                    a.r[0] = 0xcdd10001u;
                    (void)tc_call(0x8024cbc8u, &a);
                    do {
                        r3 = tc_call(0x8024cb94u, &a);
                    } while (r3 != 0u);
                    wr32(rd32(0x8057194cu), 3u);
                    a.r[0] = 0u;
                    a.r[1] = rd32(rd32(0x8057194cu) + 0x38u);
                    (void)tc_call(0x8024d294u, &a);
                    r3 = rd32(rd32(0x8057194cu) + 0x38u);
                    wr32(0x8057194cu, r3);
                    r3 = rd32(r3 + 0x3cu);
                    a.r[0] = r3;
                    (void)tc_call(0x8024d660u, &a);
                } else if (r5 != rd32(0x80571948u)) {
                    r12 = rd32(r5 + 0x30u);
                    if (r12 != 0u) {
                        a.r[0] = r5;
                        a.r[1] = 0xdcd10000u;
                        a.r[2] = r5;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                    }
                    a.r[0] = 0xcdd10001u;
                    (void)tc_call(0x8024cbc8u, &a);
                    do {
                        r3 = tc_call(0x8024cb94u, &a);
                    } while (r3 != 0u);
                    wr32(rd32(0x8057194cu), 3u);
                    a.r[0] = 0u;
                    a.r[1] = rd32(0x80571948u);
                    (void)tc_call(0x8024d294u, &a);
                    r3 = rd32(0x80571944u);
                    wr32(0x8057194cu, rd32(0x80571948u));
                    a.r[0] = r3;
                    (void)tc_call(0x8024d660u, &a);
                } else {
                    r12 = rd32(r5 + 0x30u);
                    if (r12 != 0u) {
                        a.r[0] = r5;
                        a.r[1] = 0xdcd10000u;
                        a.r[2] = r5;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                    }
                    a.r[0] = 0xcdd10002u;
                    (void)tc_call(0x8024cbc8u, &a);
                    do {
                        r3 = tc_call(0x8024cb94u, &a);
                    } while (r3 != 0u);
                    wr32(rd32(0x8057194cu), 3u);
                    a.r[0] = rd32(0x8057194cu);
                    (void)tc_call(0x8024d660u, &a);
                }
            }
        } else {
            c0lt = (s32)r3 < -590282752;
            if (r3 == 0xdcd10000u) {
                wr32(r5, 1u);
                r3 = rd32(0x8057194cu);
                r12 = rd32(r3 + 0x28u);
                if (r12 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0xdcd10000u;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                }
            } else if (!c0lt) {
                wr32(r5, 1u);
                r3 = rd32(0x8057194cu);
                r12 = rd32(r3 + 0x2cu);
                if (r12 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0xdcd10000u;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                }
            }
        }
    } while (0);
    a.r[0] = 0x817fdd28u;
    (void)tc_call(0x80228148u, &a);
    a.r[0] = param_2;
    (void)tc_call(0x80227f20u, &a);
    return;
}
