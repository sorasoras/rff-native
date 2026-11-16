#include "tc_rt.h"

u32 fn_8005edc0(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    r28 = 1u;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8005d53cu, &a);
    wr32((u32)param_1 + 0xcu, r3);
    (void)tc_call(0x800cf350u, &a);
    if (rd32((u32)param_1 + 0xcu) == 5u) {
        r27 = 1u;
        wr32((u32)param_1 + 0x18u, 0u);
        r25 = 0u;
        r30 = 0u;
        r26 = rd32(0x805711e8u);
        r3 = tc_call(0x800cf66cu, &a);
        c0lt = (s32)r3 < 2;
        do {
            if (r3 == 2u) {
                r3 = tc_call(0x800cf5e8u, &a);
                if (r3 == 0u) {
                    r25 = 1u;
                    wr32((u32)param_1 + 0xcu, 1u);
                    r27 = 0u;
                }
            } else {
                if (!c0lt) {
                    c0lt = (s32)r3 < 4;
                    if (r3 != 4u) {
                        if (!c0lt) break;
                        r0 = rd32(r26 + 0x48u);
                        c0lt = (s32)r0 < 2;
                        if (r0 == 2u) {
                            r3 = tc_call(0x800cf5e8u, &a);
                            if (r3 != 0u) break;
                            a.r[0] = (u32)param_1;
                            a.r[1] = 2u;
                            a.r[2] = 1u;
                            (void)tc_call(0x8005d3f8u, &a);
                            r27 = 0u;
                            r28 = 0u;
                            break;
                        }
                        if (!c0lt) {
                            c0lt = (s32)r0 < 8;
                            if (r0 == 8u) {
                                r3 = tc_call(0x800cf5e8u, &a);
                                if (r3 != 0u) break;
                                r27 = 0u;
                                wr32((u32)param_1 + 0xcu, 1u);
                                r28 = 0u;
                                r25 = 1u;
                                break;
                            }
                            if (c0lt && (s32)r0 >= 7) {
                                r3 = tc_call(0x800cf5e8u, &a);
                                if (r3 != 0u) break;
                                r27 = 0u;
                                wr32((u32)param_1 + 0xcu, 1u);
                                r28 = 0u;
                                r25 = 1u;
                                break;
                            }
                        } else {
                            c0lt = (s32)r0 < 0;
                            if (r0 == 0u) {
                                r3 = tc_call(0x800cf5e8u, &a);
                                if (r3 != 0u) break;
                                if (rd32(r26 + 0x50u) != 0u) {
                                    wr32((u32)param_1 + 0xcu, 1u);
                                } else {
                                    r25 = 1u;
                                    wr32((u32)param_1 + 0xcu, 1u);
                                }
                                r27 = 0u;
                                r28 = 0u;
                                break;
                            }
                            if (!c0lt) {
                                r3 = tc_call(0x800cf5e8u, &a);
                                if (r3 != 0u) break;
                                if (rd32(0x80499524u) != 0x3cu) {
                                    a.r[0] = (u32)param_1;
                                    a.r[1] = 2u;
                                    a.r[2] = 5u;
                                    (void)tc_call(0x8005d3f8u, &a);
                                } else {
                                    a.r[0] = (u32)param_1;
                                    a.r[1] = 2u;
                                    a.r[2] = 6u;
                                    (void)tc_call(0x8005d3f8u, &a);
                                }
                                r27 = 0u;
                                r28 = 0u;
                                break;
                            }
                        }
                        r3 = tc_call(0x800cf5e8u, &a);
                        if (r3 != 0u) break;
                        r25 = 1u;
                        wr32((u32)param_1 + 0xcu, 1u);
                        r27 = 0u;
                        break;
                    }
                    r30 = 1u;
                } else if (r3 != 0u) {
                    break;
                }
                r3 = tc_call(0x800cf5e8u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 == 0u) {
                    a.r[0] = r26;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r26) + 0x38u), &a);
                    if (r3 == 4u) {
                        wr32((u32)param_1 + 0xcu, 1u);
                    } else {
                        wr32(0x805706e0u, r3);
                        r31 = 0u;
                    }
                    r25 = 1u;
                    r27 = 0u;
                }
            }
        } while (0);
        if (r27 == 0u && r28 != 0u) {
            if ((rd32(0x8057118cu) & 0x40u) != 0u) {
                a.r[0] = 0x80486da8u;
                (void)tc_call(0x800b872cu, &a);
            }
            (void)tc_call(0x80052ee0u, &a);
        }
        if (r30 == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x41f7u;
            (void)tc_call(0x8005df40u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x1f7u;
            (void)tc_call(0x8005df48u, &a);
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x41b3u;
            (void)tc_call(0x8005df40u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x1b3u;
            (void)tc_call(0x8005df48u, &a);
        }
        if (r25 != 0u) {
            r3 = rd32(0x804863d8u);
            wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) & 0xbfffffffu);
        }
        if (rd32((u32)param_1 + 0xcu) != 5u) {
            a.r[0] = 0u;
            (void)tc_call(0x80077b70u, &a);
            (void)tc_call(0x800cf350u, &a);
            a.r[0] = rd32(0x805706e8u);
            r3 = tc_call(0x8007d150u, &a);
            if (rd32(r3 + 8u) != 1u) {
                r0 = 1u;
            } else {
                r0 = 0u;
            }
            wr32(0x80571170u, r0);
        }
        r3 = r31;
    } else {
        a.r[0] = 0u;
        (void)tc_call(0x80077b70u, &a);
        a.r[0] = rd32(0x805706e8u);
        r3 = tc_call(0x8007d150u, &a);
        if (rd32(r3 + 8u) != 1u) {
            r0 = 1u;
        } else {
            r0 = 0u;
        }
        wr32(0x80571170u, r0);
        r3 = 1u;
    }
    return r3;
}
