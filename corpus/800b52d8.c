#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800b52d8(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r4 = rd32(param_r3 + 0xe88u);
    r28 = rd32(param_r3 + 0x15d8u);
    wr32(param_r3 + 0xe88u, r4 ^ (r4 & 0x1000u));
    if (r28 == 0u) {
        a.r[0] = param_r3;
        r3 = tc_call(0x800b2fdcu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = 0u;
        f2 = 0.0;
        if (r3 != 0u) {
            r0 = rd32(param_r3 + 0x100u);
            wr8(param_r3 + 0x358u, (u8)((u32)rd8(param_r3 + 0x358u) | 0x80u));
            wr32(param_r3 + 0x1468u, r0);
        }
    } else {
        r31 = r28;
        do {
            if (rd32(r28 + 0xcu) != 0u) {
                r4 = rd32(r28 + 0x18u);
                if ((s32)r4 >= (s32)rd32(r28 + 0x14u)) {
                    if (rd32(r28 + 4u) != 0u) {
                        if (rd32(r28 + 4u) == 0u || (s32)rd32(param_r3 + 0xe80u) < (s32)rd32(r28 + 8u)) break;
                    } else {
                        a.r[0] = param_r3;
                        r3 = tc_call(0x800b2fdcu, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r5 = 0u;
                        f2 = 0.0;
                        if (r3 == 0u && (rd32(r28 + 4u) == 0u || (s32)rd32(param_r3 + 0xe80u) < (s32)rd32(r28 + 8u))) break;
                    }
                    r31 = rd32(r28 + 0x20u);
                    if (r31 == 0u) {
                        r0 = rd32(param_r3 + 0x15d4u);
                        wr32(param_r3 + 0x15d8u, 0u);
                        r31 = 0u;
                        wr32(r28 + 0x20u, r0);
                        wr32(param_r3 + 0x15d4u, r28);
                    } else {
                        wr32(param_r3 + 0x15d8u, r31);
                        wr32(r28 + 0x20u, rd32(param_r3 + 0x15d4u));
                        wr32(param_r3 + 0x15d4u, r28);
                    }
                    r0 = rd32(param_r3 + 0x100u);
                    wr8(param_r3 + 0x358u, (u8)((u32)rd8(param_r3 + 0x358u) | 0x80u));
                    wr32(param_r3 + 0x1468u, r0);
                }
            }
        } while (0);
        if (r31 != 0u) {
            if (rd32(r31 + 0xcu) != 0u) {
                wr32(r31 + 0x18u, rd32(r31 + 0x18u) + 1u);
            } else {
                wr32(r31 + 0xcu, 1u);
                if (rd32(r31 + 4u) != 0u) {
                    a.r[0] = param_r3;
                    (void)tc_call(0x800b510cu, &a);
                    r4 = tc_lastr4();
                } else {
                    a.r[0] = param_r3;
                    (void)tc_call(0x800b510cu, &a);
                    r4 = tc_lastr4();
                }
                a.r[0] = param_r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(r31 + 0x1cu);
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                f1 = tc_callf(rd32(rd32(param_r3) + 0x50u), &a);
                r4 = tc_lastr4();
                r5 = 0u;
                f2 = 0.0;
                if (rd32(r31 + 0x10u) != 0u) {
                    r5 = 0x804890c8u;
                    r4 = rd32(0x804890c8u);
                    r3 = rd32(0x804890ccu);
                    r0 = rd32(0x804890d0u);
                    wr32(0x817fdfb8u, r4);
                    wr32(0x817fdfbcu, r3);
                    f2 = (f64)rdf32(0x817fdfb8u);
                    wr32(0x817fdfc0u, r0);
                    f1 = (f64)rdf32(0x817fdfbcu);
                    f0 = (f64)rdf32(0x817fdfc0u);
                    wrf32d(param_r3 + 0xd18u, f2);
                    wrf32d(param_r3 + 0xd1cu, f1);
                    wrf32d(param_r3 + 0xd20u, f0);
                }
            }
            wr32(param_r3 + 0xe84u, rd32(r31 + 8u));
        }
    }
    a.r[0] = param_r3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_r3) + 0x19cu), &a);
    wr32(0x817fdfb4u, r3);
    r0 = rd32(param_r3 + 0xd1cu);
    wr32(0x817fdfc4u, rd32(param_r3 + 0xd18u));
    wr32(0x817fdfc8u, r0);
    wr32(0x817fdfccu, rd32(param_r3 + 0xd20u));
    a.r[0] = 0x817fdfc4u;
    f1 = tc_callf(0x80234440u, &a);
    f31 = f1;
    a.r[0] = param_r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_r3) + 0x70u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        r31 = rd32(param_r3 + 0x100u);
        r29 = 0u;
        a.r[0] = param_r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_r3) + 0x1d0u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        do {
            if (r31 != r3) {
                a.r[0] = param_r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(param_r3) + 0x1d4u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r31 != r3) break;
            }
            r28 = 0u;
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3) + 0x1b8u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r31 == r3) {
                r28 = 1u;
            } else {
                a.r[0] = param_r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(param_r3) + 0x1bcu), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r31 == r3) {
                    r28 = 1u;
                }
            }
            if (r28 == 0u) {
                r29 = 1u;
            }
        } while (0);
        if (r29 == 0u) {
            r28 = rd32(param_r3 + 0x100u);
            r31 = 0u;
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3) + 0x1b8u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            do {
                if (r28 != r3) {
                    a.r[0] = param_r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    r3 = tc_call(rd32(rd32(param_r3) + 0x1bcu), &a);
                    if (r28 != r3) break;
                }
                r31 = 1u;
            } while (0);
            if (r31 == 0u) {
                a.r[0] = 0x817fdfb4u;
                r3 = tc_call(0x801497a8u, &a);
                r26 = r3;
                if (r3 != 0xffffffffu) {
                    a.r[0] = 0x817fdfb4u;
                    r3 = tc_call(0x801497c0u, &a);
                    if (r3 != 0xffffffffu && (s32)rd32(param_r3 + 0xec4u) >= (s32)r3) {
                        a.r[0] = param_r3;
                        a.r[1] = r26;
                        (void)tc_call(0x800aef78u, &a);
                        wr32(param_r3 + 0xec4u, 0u);
                    }
                    wr32(param_r3 + 0xec4u, rd32(param_r3 + 0xec4u) + 1u);
                }
            } else {
                f0 = rdf64(0x80572c68u);
                if ((f31 > f0) || (f31 == f0)) {
                    a.r[0] = param_r3 + 0xd24u;
                    f1 = tc_callf(0x80234440u, &a);
                    r4 = tc_lastr4();
                    if ((f31 > f1) || (f31 == f1)) {
                        a.r[0] = param_r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        (void)tc_call(rd32(rd32(param_r3) + 0x1d0u), &a);
                        a.r[0] = param_r3;
                        (void)tc_call(0x800b510cu, &a);
                    }
                }
                a.r[0] = 0x817fdfb4u;
                r3 = tc_call(0x80149708u, &a);
                r26 = r3;
                if (r3 != 0xffffffffu) {
                    a.r[0] = 0x817fdfb4u;
                    r3 = tc_call(0x80149720u, &a);
                    if (r3 != 0xffffffffu && (s32)rd32(param_r3 + 0xec0u) >= (s32)r3) {
                        a.r[0] = param_r3;
                        a.r[1] = r26;
                        (void)tc_call(0x800aef78u, &a);
                        wr32(param_r3 + 0xec0u, 0u);
                    }
                    wr32(param_r3 + 0xec0u, rd32(param_r3 + 0xec0u) + 1u);
                }
            }
        } else {
            do {
                if (!(f31 < rdf64(0x80572c68u)) || (rd32(param_r3 + 0xe88u) & 0x20000u) != 0u) {
                    a.r[0] = param_r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    r3 = tc_call(rd32(rd32(param_r3) + 0x1d4u), &a);
                    f1 = tc_lastf();
                    r28 = r3;
                    a.r[0] = param_r3;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    r3 = tc_call(rd32(rd32(param_r3) + 0x1d0u), &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 != r28) {
                        a.r[0] = param_r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        r3 = tc_call(rd32(rd32(param_r3) + 0x19cu), &a);
                        wr32(0x817fdfb0u, r3);
                        a.r[0] = 0x817fdfb0u;
                        f1 = tc_callf(0x80149944u, &a);
                        r4 = tc_lastr4();
                        if (!(f31 > (rdf64(0x80572c68u) + f1))) {
                            a.r[0] = param_r3;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            r3 = tc_call(rd32(rd32(param_r3) + 0x1d4u), &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if (r3 == rd32(param_r3 + 0x100u)) {
                                a.r[0] = param_r3;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                (void)tc_call(rd32(rd32(param_r3) + 0x1d0u), &a);
                                a.r[0] = param_r3;
                                f1 = tc_callf(0x800b510cu, &a);
                                r4 = tc_lastr4();
                            }
                        } else {
                            a.r[0] = param_r3;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            r3 = tc_call(rd32(rd32(param_r3) + 0x1d0u), &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if (r3 == rd32(param_r3 + 0x100u)) {
                                a.r[0] = param_r3;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                (void)tc_call(rd32(rd32(param_r3) + 0x1d4u), &a);
                                a.r[0] = param_r3;
                                f1 = tc_callf(0x800b510cu, &a);
                                r4 = tc_lastr4();
                            }
                        }
                    }
                } else {
                    a.r[0] = param_r3 + 0xd24u;
                    f1 = tc_callf(0x80234440u, &a);
                    r4 = tc_lastr4();
                    if (!(f1 > f31)) {
                        a.r[0] = param_r3 + 0xd24u;
                        f1 = tc_callf(0x80234440u, &a);
                        r4 = tc_lastr4();
                        f0 = (f64)rdf32(0x80572bfcu);
                        if (!(f1 < f0) || !(f31 < f0)) break;
                    }
                    a.r[0] = param_r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    (void)tc_call(rd32(rd32(param_r3) + 0x1b8u), &a);
                    a.r[0] = param_r3;
                    f1 = tc_callf(0x800b510cu, &a);
                    r4 = tc_lastr4();
                }
            } while (0);
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3) + 0x1d0u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != rd32(param_r3 + 0x100u)) {
                a.r[0] = param_r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(param_r3) + 0x19cu), &a);
                wr32(0x817fdfa8u, r3);
                a.r[0] = 0x817fdfa8u;
                f1 = tc_callf(0x8014992cu, &a);
                f1 = (f64)(f32)px_fdiv(f31, f1);
                a.f[0] = f1;
                a.f[1] = (f64)rdf32(0x80572c14u);
                a.f[2] = (f64)rdf32(0x80572c04u);
                f1 = tc_callf(0x800acaf8u, &a);
                a.r[0] = param_r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                f1 = tc_callf(rd32(rd32(param_r3) + 0x50u), &a);
                r4 = tc_lastr4();
            } else {
                a.r[0] = param_r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(param_r3) + 0x19cu), &a);
                wr32(0x817fdfacu, r3);
                a.r[0] = 0x817fdfacu;
                f1 = tc_callf(0x80149914u, &a);
                f1 = (f64)(f32)px_fdiv(f31, f1);
                a.f[0] = f1;
                a.f[1] = (f64)rdf32(0x80572c14u);
                a.f[2] = (f64)rdf32(0x80572c04u);
                f1 = tc_callf(0x800acaf8u, &a);
                a.r[0] = param_r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                f1 = tc_callf(rd32(rd32(param_r3) + 0x50u), &a);
                r4 = tc_lastr4();
            }
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3) + 0x1d0u), &a);
            if (r3 != rd32(param_r3 + 0x100u)) {
                f31 = rdf64(0x80572c08u);
                r26 = 0u;
                do {
                    r27 = param_r3 + r26;
                    if ((u32)rd8(r27 + 0xebcu) == 0u) {
                        a.r[0] = 0x817fdfb4u;
                        a.r[1] = r26;
                        r3 = tc_call(0x80149788u, &a);
                        r28 = r3;
                        if (r3 != 0xffffffffu) {
                            a.r[0] = 0x817fdfb4u;
                            r3 = tc_call(0x80149750u, &a);
                            if (r3 != 0xffffffffu) {
                                r3 = rd32(param_r3 + 0x70u);
                                wr32(0x817fdfd4u, r28 ^ 0x80000000u);
                                f1 = (f64)rdf32(r3 + 0x54u);
                                wr32(0x817fdfd0u, 0x43300000u);
                                f0 = (f64)(f32)(rdf64(0x817fdfd0u) - f31);
                                if ((f1 > f0) || (f1 == f0)) {
                                    a.r[0] = 0x817fdfb4u;
                                    r3 = tc_call(0x80149750u, &a);
                                    a.r[0] = param_r3;
                                    a.r[1] = r3;
                                    (void)tc_call(0x800aef78u, &a);
                                    wr8(r27 + 0xebcu, 1u);
                                }
                            }
                        }
                    }
                    r26 = r26 + 1u;
                } while ((s32)r26 < 2);
            } else {
                f31 = rdf64(0x80572c08u);
                r26 = 0u;
                do {
                    r27 = param_r3 + r26;
                    if ((u32)rd8(r27 + 0xebcu) == 0u) {
                        a.r[0] = 0x817fdfb4u;
                        a.r[1] = r26;
                        r3 = tc_call(0x80149768u, &a);
                        r31 = r3;
                        if (r3 != 0xffffffffu) {
                            a.r[0] = 0x817fdfb4u;
                            r3 = tc_call(0x80149738u, &a);
                            if (r3 != 0xffffffffu) {
                                r3 = rd32(param_r3 + 0x70u);
                                wr32(0x817fdfd4u, r31 ^ 0x80000000u);
                                f1 = (f64)rdf32(r3 + 0x54u);
                                wr32(0x817fdfd0u, 0x43300000u);
                                f0 = (f64)(f32)(rdf64(0x817fdfd0u) - f31);
                                if ((f1 > f0) || (f1 == f0)) {
                                    a.r[0] = 0x817fdfb4u;
                                    r3 = tc_call(0x80149738u, &a);
                                    a.r[0] = param_r3;
                                    a.r[1] = r3;
                                    (void)tc_call(0x800aef78u, &a);
                                    wr8(r27 + 0xebcu, 1u);
                                }
                            }
                        }
                    }
                    r26 = r26 + 1u;
                } while ((s32)r26 < 2);
            }
        }
    }
    r3 = rd32(param_r3 + 0xe88u);
    wr32(param_r3 + 0xe88u, r3 ^ (r3 & 0x10000u));
    return;
}
